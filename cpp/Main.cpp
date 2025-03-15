#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Peripheral.cpp"
#include "Komputer.cpp"
#include "StorageKomponen.cpp"

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    // Inisialisasi komponen satu per satu
    Cpu cpu(8, 3.4, "Intel", "Core i7"); // data cpu 1
    Cpu cpu2(4, 2.8, "AMD", "Ryzen 5"); // data cpu 2
    Ram ram1(16, "DDR5", "Corsair", "Vengeance"); // data ram 1
    Harddrive harddrive(512, "HDD", "Western Digital", "Blue", "ModelY", 10); // data harddrive 1
    Peripheral peripheral("Monitor", "HDMI", {"Speaker", "Webcam", "USB Port"}); // data peripheral 1
    Peripheral peripheral2("Monitor", "HDMI", {"Speaker", "Webcam", "USB Port"}); // data peripheral 2

    Komputer komputer("PC Abdul", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, harddrive, peripheral);
    Komputer komputer2("PC Budi", cpu2, {Ram(8, "DDR4", "Corsair", "Vengeance"), Ram(2, "DDR7", "Jangan", "Apalah")}, harddrive, peripheral2);

    vector<Komputer> komputerList = {komputer, komputer2};

    cout << "===== Informasi Komputer =====" << endl;
    for (auto& komputer : komputerList) {
        cout << "\nNama      : " << komputer.getNama() << endl;
        cout << "CPU       : " << komputer.getCpu().getMerk() << ' ' << komputer.getCpu().getNama()
             << " (" << komputer.getCpu().getJumlahCore() << " Core) " << "~" << komputer.getCpu().getKecepatanGHz() << "GHz" << endl;
        for (auto& ram : komputer.getRamList()) {
            cout << "RAM       : " << ram.getMerk() << ' ' << ram.getNama()
                 << " (" << ram.getKapasitasGB() << " GB) " << ram.getDdr() << endl;
        }
        cout << "Harddrive : " << komputer.getHarddrive().getTipeDrive() << ' ' << komputer.getHarddrive().getMerk()
             << ' ' << komputer.getHarddrive().getNama() << " (" << komputer.getHarddrive().getKapasitasGB() << " GB) "
             << "Model: " << komputer.getHarddrive().getModel()
             << ", Konsumsi Daya: " << komputer.getHarddrive().getKonsumsiDayaWatt() << "W" << endl;
        cout << "Peripheral: " << komputer.getPeripheral().getTipe() << ", Koneksi: "
             << komputer.getPeripheral().getTipeKoneksi() << ", Fitur: ";
        for (auto& fitur : komputer.getPeripheral().getFitur()) {
            cout << fitur << ", ";
        }
        cout << "\n--------------------------------------\n";
    }

    StorageKomponen storage1(100, 200, 16, "DDR4", "Corsair", "Vengeance",
                             512, "HDD", "Western Digital", "Blue", "ModelY", 10);
    StorageKomponen storage2(120, 250, 32, "DDR5", "Kingston", "Fury",
                             1024, "SSD", "Samsung", "Evo", "ModelX", 8);
    
    vector<StorageKomponen> storageList = {storage1, storage2};

    cout << "\n===== Informasi StorageKomponen =====" << endl;
    for (auto& storage : storageList) {
        cout << "\nKecepatan Baca     : " << storage.getKecepatanBaca() << " MB/s" << endl;
        cout << "Kecepatan Tulis    : " << storage.getKecepatanTulis() << " MB/s" << endl;
        cout << "RAM Kapasitas      : " << storage.Ram::getKapasitasGB() << " GB" << endl;
        cout << "RAM DDR            : " << storage.getDdr() << endl;
        cout << "RAM Merk           : " << storage.getMerk() << endl;
        cout << "RAM Nama           : " << storage.getNama() << endl;
        cout << "HDD Kapasitas      : " << storage.Harddrive::getKapasitasGB() << " GB" << endl;
        cout << "HDD Tipe           : " << storage.getTipeDrive() << endl;
        cout << "HDD Merk           : " << storage.getMerk() << endl;
        cout << "HDD Nama           : " << storage.getNama() << endl;
        cout << "HDD Model          : " << storage.getModel() << endl;
        cout << "HDD Daya           : " << storage.getKonsumsiDayaWatt() << " Watt" << endl;
        cout << "--------------------------------------\n";
    }

    return 0;
}
