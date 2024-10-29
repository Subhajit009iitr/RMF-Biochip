# RMF-Biochip
## Steps to run the code

To generate Random Microfluidic simulations, follow the steps below to start the **LiveLink Server for MATLAB**.  

---
### 1. Start the COMSOL Multiphysics Server  
Navigate to the folder where COMSOL is installed, specifically to the `mli` directory:
```
 cd D:\Comsol_product\COMSOL55\Multiphysics\bin\win64\
```
Start the comsolmphserver by running:
```
start comsolmphserver.exe
```
If the server starts successfully, you should see the following message:
```
COMSOL Multiphysics server 5.5 (Build: 306) started listening on port 2036
Use the console command 'close' to exit the program
```

### 2. Configure MATLAB 
Open MATLAB and add the COMSOL path (this step is needed only the first time). Run the following commands in the MATLAB terminal:
```
addpath('D:\Comsol_product\COMSOL55\Multiphysics\mli');
savepath;
```
### 3. Connect MATLAB to the LiveLink Server
Use one of the following commands depending on whether it’s your first time connecting:

First-time connection:
```
 mphstart('localhost', 2036, 'admin', 'admin');
 ```
 Subsequent connections:
 ```
 mphstart('localhost', 2036);
```
If the connection is successful, we will see a message like this:
```
2024-10-29 15:45:03 A LiveLink(TM) for MATLAB(R) client with username 'admin' has logged in from 'DESKTOP-RI907HD'
```
### 4. Run the Code
Once the LiveLink server is connected, execute the simulation code from the MATLAB terminal:
```
microfuidics;
```