# Ver núcleos de la CPU desde la terminal

**Linux:**
```bash
nproc
```

**macOS:**
```bash
sysctl -n hw.logicalcpu
```

**Windows (PowerShell):**
```powershell
wmic cpu get NumberOfCores,NumberOfLogicalProcessors
```
