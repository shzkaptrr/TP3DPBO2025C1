# Komputer.py
class Komputer:
    def __init__(self, nama="", cpu=None, ramList=None, harddrive=None, peripheral=None):
        self.nama = nama
        self.cpu = cpu if cpu is not None else Cpu()
        self.ramList = ramList if ramList is not None else []
        self.harddrive = harddrive if harddrive is not None else Harddrive()
        self.peripheral = peripheral if peripheral is not None else Peripheral()
    
    def setNama(self, nama):
        self.nama = nama
    
    def setCpu(self, cpu):
        self.cpu = cpu
    
    def setRam(self, ramList):
        self.ramList = ramList
    
    def setHarddrive(self, harddrive):
        self.harddrive = harddrive
    
    def setPeripheral(self, peripheral):
        self.peripheral = peripheral
    
    def addRam(self, ram):
        self.ramList.append(ram)
    
    def getNama(self):
        return self.nama
    
    def getCpu(self):
        return self.cpu
    
    def getRamList(self):
        return self.ramList
    
    def getHarddrive(self):
        return self.harddrive
    
    def getPeripheral(self):
        return self.peripheral
