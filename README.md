# xkb_layout_listener
Program that watches XKB's state and executes command passed as first argument to it when state changes.

# How to built it?
In directory with source code run ```make``` and it'll build executable.

# Usage

Make sure program has execute privilege, then run it with callback parameter:  
```$ ./xkb_layout_listener "echo hello"```  
or  
```$ ./xkb_layout_listener ~/callback.sh```
