--author Andy Wojnarek <andy.wojnarek@theatsgroup.com>
--date today
--heading OpenStack 101
--withborder             
--color red
--center               .:+ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo+/:.                
--center              .osyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyys+`              
--center             .syyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyo              
--center             /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy.             
--center             /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyyys++////////////////////////////////+osyyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyy:`                                    .+yyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyys                                       .yyyyyyyyyyyyyyyy-             
--center             :ooooooooooooooo+                                       `oooooooooooooooo.             
--center                                                                                                    
--center                                                                                                    
--center             :ooooooooooooooo+                                       `oooooooooooooooo.             
--center             /yyyyyyyyyyyyyyys                                       .yyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyys                                       .yyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyys                                       .yyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyys              PLUG North               .yyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyys                                       .yyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyys                                       .yyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyys                                       .yyyyyyyyyyyyyyyy-             
--center             -////////////////                                       `////////////////.             
--center                                                                                                    
--center                                                                                                    
--center             /ssssssssssssssso                                       `ssssssssssssssss.             
--center             /yyyyyyyyyyyyyyys                                       .yyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyy+.                                   `-oyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyyysoooooooooooooooooooooooooooooooooooosyyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy-             
--center             /yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy.             
--center             `syyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy+              
--center              `+syyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyss:`              
--center                `-://////////////////////////////////////////////////////////////:-`                
          
--color white                                                                                      

--newpage
--heading OpenStack 101 Agenda
--withborder
* Bio
---

* OpenStack history
---

* OpenStack uses
---

* OpenStack modules
---

* OpenStack - how it works
---

* OpenStack live demo
---

* OpenStack challenges
---

* OpenStack Certification

--newpage
--heading Bio
--withborder

--boldon
* Bio
--boldoff
  - Sr. Systems Engineer for ATS for 7 years
  - Specialize in AIX and Linux (SuSE)
  - Specialize in the Power architecture
  - Dabble and evaluate emerging technologies for ATS, whitepapers etc.
  - Previously working as a AIX/Linux Admin for a government agency for 5 years

  ###########################################tttttttttt###########################################  
  #####################################tttt#######################################################  
  ################################tttt############################################################  
  ############################tttt################################################################  
  ############LLLLLL####LLLLttLLLLLLL##LLLLLLLLLLL################################################  
  ############LLLLLLL##LLttLLLLLLLLLL#LLLLLLLLLLLL################################################  
  ###########LLLLLLLL#ttt##LLLLL###LLLLLLLL######L################################################  
  ##########LLLLLLLLttt####LLLLL#####LLLLL########################################################  
  ##########LL#LLLttL#####LLLLLL#####LLLLLLLLLLLL#################################################  
  #########LLL##ttLLL#####LLLLLL#####LLLLLLLLLLLL#################################################  
  ########LLL#ttLLLLL#####LLLLL#####LLLLLLLLLLLLLL#tttttttt##tttttttt##tttttttt##ttt###tt##ttttttt  
  ########LLttt#LLLLLL####LLLLL#####LLLLLLLLLLLLL##ttt#######ttt##ttt##ttt#tttt#tttt###tt#ttt##ttt  
  #######LLLLLLLLLLLLL###LLLLLL#####LLLLLLLLLLLLL##ttt#######ttt#tttt#tttt#tttt#ttt####t##ttt##ttt  
  ######LLLLLLLLLLLLLL###LLLLL#############LLLLLL##tttttttt#tttttttt##tt####tt##ttt####t##tttttttt  
  #####LLL######LLLLLL###LLLLL#############LLLLLL#ttt##ttt##ttt#ttt###tt###ttt##ttt####t##ttt#####  
  ###ttLL########LLLLL###LLLLL#####LLLLLLLLLLLLL##ttt##ttt##ttt#ttt###tt#t##tt##ttt###tt#ttt######  
  ##ttLLL########LLLLL##LLLLLL#####LLLLLLLLLLLL###tttttttt#tttt#tttt##ttttttt###ttttttt##ttt######  
  #ttLLLL#######LLLLLLL#LLLLLL#####LLLLLLLLLLL####################################################  
  ttt#############################################################################################  
  ttt###LL#LLLL#L#LL#LLL#L#LL##LLL####L##L#LL#L#L#L#L#L#L#L##LLL#LL#L##LL#L#L#LL#L#LLL##L#L#######  
  ttt###LL#L#L#LL#LL#LLL#L##LL#L#L##L#LL#L##LLL#LLLL##L#L#L##LL#LL#L###LL#LLLLL##L#LL###L#LL######  
  ttt##L#L#LL##L#L#L#L#L#LL#LL#LL###L#LL#LL#L#L#L#L#LLL#LLLLL#LLL##L###LLLL#LL##L#L#LLLLL#LL######  
  tttt############################################################################################  
  ttttt################################t##########################################################  
  ##ttttt#########################ttt#############################################################  
  ###tttttttt###############tttt##################################################################  
  #######ttttttttttttttttt########################################################################  

--newpage
--heading OpenStack history (https://docs.openstack.org/project-team-guide/introduction.html)
--withborder

--boldon
* Rackspace & NASA
--boldoff
OpenStack was created during the first months of 2010. Rackspace wanted to rewrite the infrastructure code running its Cloud servers offering, and considered open sourcing the existing Cloud files code. At the same time, Anso Labs (contracting for NASA) had published beta code for Nova, a Python-based “cloud computing fabric controller”.

Both efforts converged and formed the base for OpenStack. The first Design Summit was held in Austin, TX on July 13-14, 2010, and the project was officially announced at OSCON in Portland, OR, on July 21st, 2010.
--horline
---

--boldon
* Governance 
--boldoff
The original project governance defined three main bodies: the Advisory Board, the Architecture Board and Technical Committees for each sub-project and  elected Rackspace-appointed members. PTLs were appointed by Rackspace too.

The governance model was once again tweaked in March 2011. The Project Oversight Committee was renamed to Project Policy Board (still a mix of appointed and elected members), and PTLs were elected by the contributors to their project for the first time.
--horline
---

--boldon
* Current Governance
--boldoff
In September 2012, the OpenStack Foundation was launched as an independent body providing shared resources to protect, empower, and promote OpenStack software and the community around it.

The reponsibilities of the Project Policy Board were split between two bodies:

The Foundation Board of Directors, which defines the objectives of the OpenStack Foundation, controls how the Foundation budget is spent, and has authority on the OpenStack trademark
The Technical Committee, which manages the technical matters and has authority over the open source upstream OpenStack Project
--horline
---


--newpage
--heading OpenStack Uses/Why
--withborder

--boldon
* Uses and reasons
--boldoff
  - Can be used to create an 'AWS' like infrastructure on prem
  - Useful for offering IAAS internally, chargeback etc
  - Simplify provisioning
  - Standardize on the same open platform and APIs that power a global network of public and private clouds
  - Avoid vendor lock-in with an open platform, including fexibility of underlying technology choices
  - Accelerate my organization’s ability to innovate and compete by deploying applications faster
  - Increase operational effciency
  - Save money over alternative infrastructure choices
  - Attract top technical talent by participating in an active global technology community
  - Achieve security and/or privacy goals with control of platform
---

--boldon
* Private cloud use cases
--boldoff
  - Security
  - Financial
  - Privacy
---

--boldon
* Popular use cases
--boldoff
  - Academia (9%)
  - Telecom  (14%)
  - IT       (68%)
  - Other    (5%)
  - Finance  (2%)
  - Media    (2%)
---

--boldon
* Popular workloads
--boldoff
  - Software dev/ test/ QA and CI                                             (44%)
  - Infrastructure services (i.e. public & private cloud products & services) (35%)
  - Web services and e-commerce                                               (29%)
  - Network Functions Virtualizationa                                         (18%)
  - Storage/ backup/ archiving                                                (20%) 
  - Big Data Analytics/ Data Mining/ Hadoop- Spark- etc.                      (18%)
  - Business applications (i.e. ERP- CRM- email)                              (17%)
  - Research computing (incl. High Performance & High Throughput)             (13%)
  - Mobile applications and services                                          (15%)
  - SaaS provider/ delivery                                                   (13%)
  - Video processing and content delivery                                     (8%)
  - Bio and medical                                                           (4%)
  - Other                                                                     (3%)


--newpage
--heading OpenStack modules
--withborder

--boldon
* Modules
--boldoff
  - Nova     (Compute) *
  - Neutron  (Networking) *
  - Keystone (Identity)  *
  - Glance   (Image) *
  - Cinder   (Block Storage)
  - Swift    (Object Storage)
  - Heat     (Orchestration)
  - Magnum   (Containers)
  - Horizon  (Dashboard)
---

--boldon
* Other important things
--boldoff
  - Message queue
  - SQL 
  - Memcached 
  - NTP
---

--boldon
* Huge!
--boldoff
--beginshelloutput
$ openstack help | wc -l
1108
--endshelloutput

--beginshelloutput
$ openstack help
usage: openstack [--version] [-v | -q] [--log-file LOG_FILE] [-h] [--debug]
                 [--os-cloud <cloud-config-name>]
                 [--os-region-name <auth-region-name>]
                 [--os-cacert <ca-bundle-file>] [--os-cert <certificate-file>]
                 [--os-key <key-file>] [--verify | --insecure]
                 [--os-default-domain <auth-domain>]
                 [--os-interface <interface>] [--timing] [--os-beta-command]
...
Commands:
  access token create  Create an access token
  acl delete     Delete ACLs for a secret or container as identified by its href.
  acl get        Retrieve ACLs for a secret or container by providing its href.
  acl submit     Submit ACL on a secret or container as identified by its href.
  acl user add   Add ACL users to a secret or container as identified by its href.
  acl user remove  Remove ACL users from a secret or container as identified by its href.
  action definition create  Create new action.
  action definition definition show  Show action definition.
  action definition delete  Delete action.
--endshelloutput
---


--newpage
--heading OpenStack - how it works
--withborder

--boldon
* The flow
--boldoff

User -> Keystone -> Nova API -> Nova DB --              Nova Scheduler
                                          \--> Queue <--/ 
                                          /             \ 
                    VM  <------------Nova Compute      Nova Conductor
                                         |
                                         |
                                         |
                              Neutron ---+--- Glance
                                         |
                                         |
                                       Cinder

---

* Components 
  - Keystone:       Identity
  - Nova API:       REST API 
  - Nova DB:        MySQL
  - Queue:          RabbitMQ
  - Nova Conductor: Accesses the DB on behalf of the compute nodes
  - Nova Scheduler: Determines which physical host to place VM
  - Nova Compute:   Creates and terminates VMs 
  - Neutron:        Network as a service, provides IPs, creates virtual devices, routes etc
  - Glance:         Image catalog, 'installation' source
  - Cinder:         Attach a volume
---

--newpage
--heading Live Demonstration!
--withborder

--boldon
* To horizon
--boldoff


--newpage
--heading OpenStack Challenges & Other Resources
--withborder

--boldon
* Skills needed
--boldoff
  - Sr. Linux Admin   \
  - Jr. Network Admin  \
                        ------ OpenStack Operator/Architect
  - Jr. Storage Admin  /
  - Jr. Developer     /
---

--boldon
* Upgrades
--boldoff
  - Can be really difficult
  - Could end up with a total rebuild
---

--boldon
* Support 
--boldoff
  - IRC
  - Mailing lists
  - Vendor
--horline
---


--boldon
* Resources
--boldoff
  - OpenStack User Survey: https://www.openstack.org/assets/survey/April-2016-User-Survey-Report.pdf
  - https://ask.openstack.org/
  - https://docs.openstack.org/
  - http://lists.openstack.org/cgi-bin/mailman/listinfo
  - #openstack

--newpage
--boldon
--center ###### # #    # #  ####  #    # ###### #####  
--center #      # ##   # # #      #    # #      #    # 
--center #####  # # #  # #  ####  ###### #####  #    # 
--center #      # #  # # #      # #    # #      #    # 
--center #      # #   ## # #    # #    # #      #    # 
--center #      # #    # #  ####  #    # ###### #####  
--boldoff
