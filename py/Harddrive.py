from Komponen import Komponen
from HardwareKomponen import HardwareKomponen


# Harddrive.py
class Harddrive(Komponen, HardwareKomponen):
    def __init__(self, kapasitasGB=0, tipeDrive="", merk="", nama="", model="", konsumsiDayaWatt=0):
        Komponen.__init__(self, merk, nama)
        HardwareKomponen.__init__(self, model, konsumsiDayaWatt)
        self.kapasitasGB = kapasitasGB
        self.tipeDrive = tipeDrive
    
    def setKapasitasGB(self, kapasitasGB):
        self.kapasitasGB = kapasitasGB
    
    def setTipeDrive(self, tipeDrive):
        self.tipeDrive = tipeDrive
    
    def getKapasitasGB(self):
        return self.kapasitasGB
    
    def getTipeDrive(self):
        return self.tipeDrive
