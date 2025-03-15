# Cpu.py
from Komponen import Komponen

class Cpu(Komponen):
    def __init__(self, jumlahCore=0, kecepatanGHz=0.0, merk="", nama=""):
        super().__init__(merk, nama)
        self.jumlahCore = jumlahCore
        self.kecepatanGHz = kecepatanGHz
    
    def setJumlahCore(self, jumlahCore):
        self.jumlahCore = jumlahCore
    
    def setKecepatanGHz(self, kecepatanGHz):
        self.kecepatanGHz = kecepatanGHz
    
    def getJumlahCore(self):
        return self.jumlahCore
    
    def getKecepatanGHz(self):
        return self.kecepatanGHz