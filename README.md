# Chakravyuh
`Chakravyuh` is a third-party (VPN) WiFi enabled gateway extension to use the internet securely, running directly on an NodeMCU proved built upon (TLS/SSL) protocol served through Google Cloud. This was the project our team **ALB** started during **[Ink Makers](http://www.inktalks.com/makers2018) Make-a-Thon-2018** Jalandhar, Punjab.  
Sometimes when you are behind a organization network you might need to setup HTTP/HTTPS proxy settings to access the Internet. Setting up proxy on any os seems to need a considerable amount of nerd (not really but for some peeps), you have to download some proxy providing software or manually putting the proxy ip into your browser. While accessing the internet services, there is always a chance of some middle-man to exploit your precious data. One general vulnerability occur using the public Wifi network. Unfortunately, most doesn't establish any type of encryption during public usage. Sometimes, the internet is not equally accessible over different countries, reasons being banning particular domains, websites or government policies or companies own decision or user want anonymity over the internet. Constraints like these led us to make this project.  
  
Chakravyuh aims at:
- Enhancing user's web privacy
- Filtering outbound personal info that your browser may leak
- Removing ads on web pages and other Inbound junk
  
We're using Secure Socket Layer (SSL) protocol throught our VPN. Other notable ones are IP security (IPsec), Point-To-Point Tunneling Protocol (PPTP) and Layer 2 Tunneling Protocol (L2TP).  
Since our service use linux as its preferrd OS, we used `OpenSSL` package, since offer server authentication, data-in-motion encryption, client authentication, and data integrity mechanisms. The VMs are organised using Vagrant. VirtualBox is used as a virtualization provider for vagrant.
```
$ sudo pacman -Syu
$ uname -r # X.Y.Z-1-GENERAL
$ pacman -S virtualbox # linuxXYZ-virtualbox-host-modules
$ sudo vboxreload # or reboot (adding vbox modules to kernel)
$ sudo usermod -aG vboxusers <username>
$ cd ~/Downloads && wget "https://download.virtualbox.org/virtualbox/5.2.22/Oracle_VM_VirtualBox_Extension_Pack-5.2.22.vbox-extpack"
$ virtualbox
```

## Contributors

<a href="../../../../aniruddha0pandey" target="_blank"><img src="https://avatars1.githubusercontent.com/u/31156696?s=460&v=4" 
alt="Aniruddha Paney" width="70" height="70" border="10" /></a> <a href="../../../../kabir55" target="_blank"><img src="https://avatars0.githubusercontent.com/u/31276824?s=400&v=4" alt="Akash Singh" width="70" height="70" border="10" /></a> <a href="../../../../prashanth" target="_blank"><img src="https://avatars3.githubusercontent.com/u/4563034?s=400&v=4" alt="V. Prashanth" width="70" height="70" border="10" /></a> <a href="../../../../yashpathack" target="_blank"><img src="https://avatars3.githubusercontent.com/u/31958105?s=400&v=4" alt="Yash Pathack" width="70" height="70" border="10" /></a>
