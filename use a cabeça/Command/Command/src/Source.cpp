#include <iostream>
#include "concrete\remoteControl\SimpleRemoteControl.h"
#include "concrete\commands\Commands.h"
#include "concrete\vendedor\Receptors.h"
#include "concrete\remoteControl\RemoteControl.h"

//Cliente
class RemoteControlTest
{
public:
	static const void Main(char **args)
	{
		try
		{
			//Invocador
			SimpleRemoteControl remote;
			//receptor da solicitação
			Light light("light");
			GarageDoor garageDoor("Garage door");
			//Comando
			LightOnCommand lightOn(&light);
			GarageDoorUpCommand garageOpen(&garageDoor);
			//passa o Comando para o invocador
			remote.SetCommand(&lightOn);
			//executa
			remote.ButtonWasPressed();

			remote.SetCommand(&garageOpen);
			remote.ButtonWasPressed();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
};

//Cliente
class RemoteLoader
{
public:
	static const void Main(char **args)
	{
		try
		{
			RemoteControl remoteControl;

			Light livingRoomLight("Light Room");
			Light kitchenLight("Kitchen");
			CeilingFan ceilingFan("Living Room");
			GarageDoor garageDoor("Garage Door");
			Stereo stereo("Living Room");

			LightOnCommand livingRoomLightOn(&livingRoomLight);
			LightOffCommand livingRoomLightOff(&livingRoomLight);
			LightOnCommand kitchenLightOn(&kitchenLight);
			LightOffCommand kitchenLightOff(&kitchenLight);

			GarageDoorUpCommand garageDoorUp(&garageDoor);
			GarageDoorDownCommand garageDoorDown(&garageDoor);

			CeilingFanMediumCommand ceilingFanMedium(&ceilingFan);
			CeilingFanHighCommand ceilingFanHigh(&ceilingFan);
			CeilingFanOffCommand ceilingFanOff(&ceilingFan);

			StereoOnWithCDCommand stereoOnWithCD(&stereo);
			StereoOffCommand stereoOff(&stereo);

			MacroCommand macroCommandOn({&livingRoomLightOn, &stereoOnWithCD });
			MacroCommand macroCommandOff({ &livingRoomLightOff, &stereoOff });

			/*remoteControl.SetCommand(0, &livingRoomLightOn, &livingRoomLightOff);
			remoteControl.SetCommand(1, &kitchenLightOn, &kitchenLightOff);
			remoteControl.SetCommand(2, &garageDoorUp, &garageDoorDown);
			remoteControl.SetCommand(3, &stereoOnWithCD, &stereoOff);*/

			//remoteControl.SetCommand(0, &ceilingFanMedium, &ceilingFanOff);
			//remoteControl.SetCommand(1, &ceilingFanHigh, &ceilingFanOff);
			remoteControl.SetCommand(0, &macroCommandOn, &macroCommandOff);
			std::cout << remoteControl << std::endl;
			//refaz o ultimo comando

			/*remoteControl.OnButtonWasPushed(0);
			remoteControl.OffButtonWasPushed(0);
			remoteControl.OnButtonWasPushed(1);
			remoteControl.OffButtonWasPushed(1);
			remoteControl.OnButtonWasPushed(2);
			remoteControl.OffButtonWasPushed(2);
			remoteControl.OnButtonWasPushed(3);
			remoteControl.OffButtonWasPushed(3);*/

			remoteControl.OnButtonWasPushed(0);
			remoteControl.OffButtonWasPushed(0);
			std::cout << remoteControl << std::endl;
			remoteControl.UndoButtonWasPushed();

			/*remoteControl.OnButtonWasPushed(1);
			std::cout << remoteControl << std::endl;
			remoteControl.UndoButtonWasPushed();*/
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
};

int main(int argc, char **argv)
{
	RemoteLoader::Main(argv);

	system("pause");
	return 0;
}