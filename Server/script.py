import serial
# In python2, use pip install pyserial or pip2 install pyserial
while True:
    f = open("status.txt","r")
    if f.read(1) == '':        #If the file is empty
        f.close()
        continue
    else:                     
    '''a single character read (pin number) from the file
       is being sent to the serial monitor to arduino'''
        ser = serial.Serial('/dev/ttyACM0', 115200, timeout=1) 
        # change the port address and the baud rate above accordingly
        ser.write(f.read(1))                            
        ser.close()
        f1 = open("status.txt","w") # erases the content of the status.txt file
        f1.close()

f.close()
