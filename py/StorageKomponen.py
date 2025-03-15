from Ram import Ram
from Harddrive import Harddrive

# StorageKomponen.py
class StorageKomponen(Ram, Harddrive):
    def __init__(self, kecepatanBaca=0, kecepatanTulis=0, 
                 kapasitasGBRam=0, ddr="", merkRam="", namaRam="",
                 kapasitasGBHDD=0, tipeDrive="", merkHDD="", namaHDD="", 
                 model="", konsumsiDayaWatt=0):
        Ram.__init__(self, kapasitasGBRam, ddr, merkRam, namaRam)
        Harddrive.__init__(self, kapasitasGBHDD, tipeDrive, merkHDD, namaHDD, model, konsumsiDayaWatt)
        self.kecepatanBaca = kecepatanBaca
        self.kecepatanTulis = kecepatanTulis
    
    def setKecepatanBaca(self, kecepatanBaca):
        self.kecepatanBaca = kecepatanBaca
    
    def setKecepatanTulis(self, kecepatanTulis):
        self.kecepatanTulis = kecepatanTulis
    
    def getKecepatanBaca(self):
        return self.kecepatanBaca
    
    def getKecepatanTulis(self):
        return self.kecepatanTulis
