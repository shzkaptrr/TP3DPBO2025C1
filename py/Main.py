from Komponen import Komponen
from HardwareKomponen import HardwareKomponen
from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Peripheral import Peripheral
from StorageKomponen import StorageKomponen
from Komputer import Komputer


def main():
    # Inisialisasi komponen satu per satu
    cpu = Cpu(8, 3.4, "Intel", "Core i7")  # data cpu 1
    cpu2 = Cpu(4, 2.8, "AMD", "Ryzen 5")  # data cpu 2
    ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")  # data ram 1
    harddrive = Harddrive(512, "HDD", "Western Digital", "Blue", "ModelY", 10)  # data harddrive 1
    peripheral = Peripheral("Monitor", "HDMI", ["Speaker", "Webcam", "USB Port"])  # data peripheral 1
    peripheral2 = Peripheral("Monitor", "HDMI", ["Speaker", "Webcam", "USB Port"])  # data peripheral 2

    komputer = Komputer("PC Abdul", cpu, [ram1, Ram(8, "DDR4", "Corsair", "Vengeance")], harddrive, peripheral)
    komputer2 = Komputer("PC Budi", cpu2, [Ram(8, "DDR4", "Corsair", "Vengeance"), Ram(2, "DDR7", "Jangan", "Apalah")], harddrive, peripheral2)

    komputerList = [komputer, komputer2]

    print("===== Informasi Komputer =====")
    for komputer in komputerList:
        print(f"\nNama      : {komputer.getNama()}")
        print(f"CPU       : {komputer.getCpu().getMerk()} {komputer.getCpu().getNama()} "
              f"({komputer.getCpu().getJumlahCore()} Core) ~{komputer.getCpu().getKecepatanGHz()}GHz")
        
        for ram in komputer.getRamList():
            print(f"RAM       : {ram.getMerk()} {ram.getNama()} ({ram.getKapasitasGB()} GB) {ram.getDdr()}")
        
        print(f"Harddrive : {komputer.getHarddrive().getTipeDrive()} {komputer.getHarddrive().getMerk()} "
              f"{komputer.getHarddrive().getNama()} ({komputer.getHarddrive().getKapasitasGB()} GB) "
              f"Model: {komputer.getHarddrive().getModel()}, "
              f"Konsumsi Daya: {komputer.getHarddrive().getKonsumsiDayaWatt()}W")
        
        print(f"Peripheral: {komputer.getPeripheral().getTipe()}, Koneksi: "
              f"{komputer.getPeripheral().getTipeKoneksi()}, Fitur: ", end="")
        
        for fitur in komputer.getPeripheral().getFitur():
            print(f"{fitur}, ", end="")
        
        print("\n--------------------------------------")

    storage1 = StorageKomponen(100, 200, 16, "DDR4", "Corsair", "Vengeance",
                             512, "HDD", "Western Digital", "Blue", "ModelY", 10)
    storage2 = StorageKomponen(120, 250, 32, "DDR5", "Kingston", "Fury",
                             1024, "SSD", "Samsung", "Evo", "ModelX", 8)
    
    storageList = [storage1, storage2]

    print("\n===== Informasi StorageKomponen =====")
    for storage in storageList:
        print(f"\nKecepatan Baca   : {storage.getKecepatanBaca()} MB/s")
        print(f"Kecepatan Tulis    : {storage.getKecepatanTulis()} MB/s")
        print(f"RAM Kapasitas      : {storage.getKapasitasGB()} GB")  # Note: In Python, we don't need the Ram:: prefix
        print(f"RAM DDR            : {storage.getDdr()}")
        print(f"RAM Merk           : {storage.getMerk()}")
        print(f"RAM Nama           : {storage.getNama()}")
        print(f"HDD Kapasitas      : {storage.getKapasitasGB()} GB")  # Note: Potential ambiguity issue in Python
        print(f"HDD Tipe           : {storage.getTipeDrive()}")
        print(f"HDD Merk           : {storage.getMerk()}")
        print(f"HDD Nama           : {storage.getNama()}")
        print(f"HDD Model          : {storage.getModel()}")
        print(f"HDD Daya           : {storage.getKonsumsiDayaWatt()} Watt")
        print("--------------------------------------")


if __name__ == "__main__":
    main()