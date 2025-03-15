# Peripheral.py
class Peripheral:
    def __init__(self, tipe="", tipeKoneksi="", fitur=None):
        self.tipe = tipe
        self.tipeKoneksi = tipeKoneksi
        self.fitur = fitur if fitur is not None else []
    
    def setTipe(self, tipe):
        self.tipe = tipe
    
    def setTipeKoneksi(self, tipeKoneksi):
        self.tipeKoneksi = tipeKoneksi
    
    def setFitur(self, fitur):
        self.fitur = fitur
    
    def getTipe(self):
        return self.tipe
    
    def getTipeKoneksi(self):
        return self.tipeKoneksi
    
    def getFitur(self):
        return self.fitur