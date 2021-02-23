# DnsPluginReverseShell - Abuse DNS with dnscmd 
Dns Plugin Reverse Shell dll Sample is a project base on this blog post [DnsAdmins to SYSTEM to Domain Compromiselity ](https://ired.team/offensive-security-experiments/active-directory-kerberos-abuse/from-dnsadmins-to-system-to-domain-compromise "vulnerabiDnsAdmins to SYSTEM to Domain Compromiselity ")  and also used [dim0x69](https://github.com/dim0x69/dns-exe-persistance "dim0x69") Repo.

I used [nishang Repo](http://https://github.com/samratashok/nishang "nishang Repo") to Encrypt my Reverse shell to avoid Windows Defender to block the reverse connection.

the purpose of this project is Abuseing DNS with dnscmd and change the serverlevelplugindll  of dns Service to execute our dll on start.

so if we can change the **serverlevelplugindll** path to our dll and restart the service we can get a reverse shell with privilage of the user that running the service. 
if the owner of services has high privilage access then your access will be the same.

i have Tested this dll on one of [Hack the box](https://www.hackthebox.eu/ "Hack the box") machines and that works perfectly.use this just for educational perpuse. 
