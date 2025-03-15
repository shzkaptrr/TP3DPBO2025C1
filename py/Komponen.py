# Komponen.py
class Komponen:
    def __init__(self, merk="", nama=""):
        self.merk = merk
        self.nama = nama
    
    def setMerk(self, merk):
        self.merk = merk
    
    def setNama(self, nama):
        self.nama = nama
    
    def getMerk(self):
        return self.merk
    
    def getNama(self):
        return self.nama