#include <iostream>
#include <string>
using namespace std;

class motor {
    public:
        void suara(string bunyi);
        int jalan(string roda);
        string cepat;
        void jumlahBan(int jumlah);
        void ukuranMotor(string ganalkahhalus);
        };
        int main(){
	motor YamahaIngkal,Honda70,YamahaMio,HondaSupra,KawasakiNinja,HarliDavidson,SapidaMotorRossi;
	YamahaIngkal.cepat		= "Laki jadul";
	Honda70.cepat			= "Bebek jadul";
	YamahaMio.cepat			= "Matik ";
	HondaSupra.cepat 		= "Bebek";
	KawasakiNinja.cepat		= "Laki";
	HarliDavidson.cepat		= "Laki";
	SapidaMotorRossi.cepat	= "Laki Sport";
	
	cout << "ciri-ciri Yamaha Ingkal: \n\n";
	cout << (YamahaIngkal.cepat);
	YamahaIngkal.suara("tun tun tun ");
	YamahaIngkal.jalan("ka muka ");
	YamahaIngkal.ukuranMotor("sadang ");
	YamahaIngkal.jumlahBan(2);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri Honda 70: \n\n";
	cout << (Honda70.cepat);
	Honda70.suara("dus dus dus ");
	Honda70.jalan("ka muka ");
	Honda70.ukuranMotor("halus ");
	Honda70.jumlahBan(2);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri Yamaha Mio: \n\n";
	cout << (YamahaMio.cepat);
	YamahaMio.suara("buummmmm ");
	YamahaMio.jalan("ka muka ");
	YamahaMio.ukuranMotor("halus ");
	YamahaMio.jumlahBan(2);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri Honda Supra: \n\n";
	cout << (HondaSupra.cepat);
	HondaSupra.suara("ngengggggg ");
	HondaSupra.jalan("ka muka ");
	HondaSupra.ukuranMotor("sadang ");
	HondaSupra.jumlahBan(2);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri Kawasaki Ninja: \n\n";
	cout << (KawasakiNinja.cepat);
	KawasakiNinja.suara("teng trengg tenggggg ");
	KawasakiNinja.jalan("ka muka ");
	KawasakiNinja.ukuranMotor("ganal ");
	KawasakiNinja.jumlahBan(2);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri Harley Davidson: \n\n";
	cout << (HarliDavidson.cepat);
	HarliDavidson.suara("bam duk bam duk ");
	HarliDavidson.jalan("ka muka ");
	HarliDavidson.ukuranMotor("liwar ganal ");
	HarliDavidson.jumlahBan(2);
	cout <<"===================================\n\n";
	
	cout << "ciri-ciri Sapidamotor Rossi: \n\n";
	cout << (SapidaMotorRossi.cepat);
	SapidaMotorRossi.suara("ngeng ngenggggg ngeeeeeeeeeng ");
	SapidaMotorRossi.jalan("ka muka ");
	SapidaMotorRossi.ukuranMotor("ganal banar ");
	SapidaMotorRossi.jumlahBan(2);
	cout <<"===================================\n\n";
	
	}
	
