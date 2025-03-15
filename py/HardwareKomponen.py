# HardwareKomponen.py
class HardwareKomponen:
    def __init__(self, model="", konsumsiDayaWatt=0):
        self.model = model
        self.konsumsiDayaWatt = konsumsiDayaWatt
    
    def setModel(self, model):
        self.model = model
    
    def setKonsumsiDayaWatt(self, konsumsiDayaWatt):
        self.konsumsiDayaWatt = konsumsiDayaWatt
    
    def getModel(self):
        return self.model
    
    def getKonsumsiDayaWatt(self):
        return self.konsumsiDayaWatt