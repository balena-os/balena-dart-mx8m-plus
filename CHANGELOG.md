# v2.113.24
## (2023-03-27)

# v2.114.17
## (2023-05-03)


<details>
<summary> Update layers/meta-balena to fa0106adb36432f5538f908304e9967c827dcfd4 [Renovate Bot] </summary>

> ## meta-balena-2.114.17
> ### (2023-05-03)
> 
> * test: append installer configuration instead of replacing it [Alex Gonzalez]
> * test: os: use boolean for installer migration flag [Alex Gonzalez]
> 

</details>

# v2.114.16+rev1
## (2023-05-03)


<details>
<summary> Update contracts to 75cd5e9f19d49b8723b7e39033763ca698e1254f [Renovate Bot] </summary>

> ## contracts-2.0.59
> ### (2023-05-03)
> 
> * hw.device-type: Add revpi-connect-s [Obaid Ch]
> 

</details>

# v2.114.16
## (2023-05-03)


<details>
<summary> Update layers/meta-balena to 43bf9f98db7de74bce36141f5e55c4dcffb7e060 [Renovate Bot] </summary>

> ## meta-balena-2.114.16
> ### (2023-05-02)
> 
> * initrdscripts: give the root device a chance to come up before cryptsetup [Michal Toman]
> 

</details>

# v2.114.15
## (2023-04-28)


<details>
<summary> Update layers/meta-balena to 6dea3e6c37f789704d95485ed1ddab2b63226111 [Renovate Bot] </summary>

> ## meta-balena-2.114.15
> ### (2023-04-28)
> 
> * patch: Add additional logs when logging in using balenaSDK [Vipul Gupta (@vipulgupta2048)]
> 

</details>

# v2.114.14
## (2023-04-27)


<details>
<summary> Update layers/meta-balena to e610a1f7d15aaf3795b335e0773680561bee054b [Renovate Bot] </summary>

> ## meta-balena-2.114.14
> ### (2023-04-27)
> 
> 
> <details>
> <summary> Update balena-supervisor to v14.10.8 [Renovate Bot] </summary>
> 
>> ### balena-supervisor-14.10.8
>> #### (2023-04-26)
>> 
>> * Fix service comparison when creating component steps [Felipe Lalanne]
>> * Create tests with recovery from #1576 [Felipe Lalanne]
>> * Skip updateMetadata step if there are network changes [Felipe Lalanne]
>> * Add replication of issue using unit tests [Felipe Lalanne]
>> * Add integration tests for state-engine [Felipe Lalanne]
>> * Do not pass auth to images with no registry [Felipe Lalanne]
>> 
> 
> </details>
> 
> 

</details>

# v2.114.13
## (2023-04-27)


<details>
<summary> Update layers/meta-balena to 90dd8d13b6e4015fa4fb8a3407ddf37eab443cd6 [Renovate Bot] </summary>

> ## meta-balena-2.114.13
> ### (2023-04-27)
> 
> * hostapp-update-hooks: use unsafe fatrw copy for bootfiles [Alex Gonzalez]
> * balena-config-vars: introduce unsafe fatrw copy [Alex Gonzalez]
> 

</details>

# v2.114.12+rev1
## (2023-04-27)


<details>
<summary> Update contracts to 6c6ed28d459bc48102a69cdf0850d2eb4c778ce7 [Renovate Bot] </summary>

> ## contracts-2.0.58
> ### (2023-04-27)
> 
> * jetson-agx-orin-devkit: Mention the RAM configuration in the device name [Alexandru Costache]
> 

</details>

# v2.114.12
## (2023-04-26)


<details>
<summary> Update layers/meta-balena to 0396b07b2119b2c1a3cdf2bbd107e08de2110671 [Renovate Bot] </summary>

> ## meta-balena-2.114.12
> ### (2023-04-26)
> 
> * classes: kernel-balena: force recompilation if signing variables change [Alex Gonzalez]
> * balena-keys: make tasks depends on signing variables [Alex Gonzalez]
> * classes: sign: make signing task depends on signing variables [Alex Gonzalez]
> 

</details>


<details>
<summary> Update layers/meta-balena to 945c6af54ac4f637418ec812747e4fe4e43e8844 [Renovate Bot] </summary>

> ## meta-balena-2.114.12
> ### (2023-04-26)
> 
> * classes: kernel-balena: force recompilation if signing variables change [Alex Gonzalez]
> * balena-keys: make tasks depends on signing variables [Alex Gonzalez]
> * classes: sign: make signing task depends on signing variables [Alex Gonzalez]
> 

</details>

# v2.114.10
## (2023-04-24)


<details>
<summary> Update layers/meta-balena to 6f38c16dea7e006ee20b90a089574505fbce4a25 [Renovate Bot] </summary>

> ## meta-balena-2.114.10
> ### (2023-04-24)
> 
> * mkfs-hostapp-native: Update base image in Dockerfile [Alexandru Costache]
> 

</details>

# v2.114.9
## (2023-04-22)


<details>
<summary> Update layers/meta-balena to e2663a747325b2cb71476fde889244ad424ec8a4 [Renovate Bot] </summary>

> ## meta-balena-2.114.9
> ### (2023-04-22)
> 
> * tests: os: configure to use installer's migrator [Alex Gonzalez]
> * test: os: add installer migration test [Alex Gonzalez]
> 

</details>

# v2.114.8+rev1
## (2023-04-22)


<details>
<summary> Update balena-yocto-scripts to 34c8434ffcaeeeb14853082bbf2b4ecc5e0ec769 [Renovate Bot] </summary>

> ## balena-yocto-scripts-1.19.27
> ### (2023-04-21)
> 
> * barys: fix removal of equals sign from argval [Joseph Kogut]
> 

</details>

# v2.114.8
## (2023-04-22)


<details>
<summary> Update layers/meta-balena to f7fe9a9bb773aa19cee244ab6f1b275ff182d40d [Renovate Bot] </summary>

> ## meta-balena-2.114.8
> ### (2023-04-22)
> 
> 
> <details>
> <summary> Update balena-supervisor to v14.10.7 [Renovate Bot] </summary>
> 
>> ### balena-supervisor-14.10.7
>> #### (2023-04-21)
>> 
>> * Remove safeStateClone function [Felipe Lalanne]
>> * Get rid of targetVolatile in app manager [Felipe Lalanne]
>> * Make pausingApply a private member of device-state [Felipe Lalanne]
>> * Simplify doRestart and doPurge actions [Felipe Lalanne]
>> * Fix network appUuid inference in local mode [Felipe Lalanne]
>> * Get image name from DB when getting the app current state [Felipe Lalanne]
>> * Improve net alias comparison to prevent unwanted restarts [Felipe Lalanne]
>> * Exclude containerId from service network aliases [Felipe Lalanne]
>> * Skip image delete when applying intermediate state [Felipe Lalanne]
>> * Make local mode image management work as in cloud mode [Felipe Lalanne]
>> * Remove ignoreImages argument from getRequiredSteps [Felipe Lalanne]
>> 
> 
> </details>
> 
> 

</details>

# v2.114.7
## (2023-04-20)


<details>
<summary> Update layers/meta-balena to f2637a0d4cf774ed903613dd058ff9db037ad23e [Renovate Bot] </summary>

> ## meta-balena-2.114.7
> ### (2023-04-20)
> 
> 
> <details>
> <summary> Update balena-supervisor to v14.10.6 [Renovate Bot] </summary>
> 
>> ### balena-supervisor-14.10.6
>> #### (2023-04-20)
>> 
>> * Do not restart balena-hostname on rename [Felipe Lalanne]
>> 
>> ### balena-supervisor-14.10.5
>> #### (2023-04-13)
>> 
>> * Remove anonymous build volume from Dockerfile [Christina Ying Wang]
>> 
> 
> </details>
> 
> 

</details>

# v2.114.6
## (2023-04-20)


<details>
<summary> Update layers/meta-balena to ac3e9193544d0bc3188473f725e3d88495caed75 [Renovate Bot] </summary>

> ## meta-balena-2.114.6
> ### (2023-04-20)
> 
> * Update db and dbx hashes during HUP when secure boot is enabled [Michal Toman]
> * balena-db-hashes: ship both db and dbx updates [Michal Toman]
> * Use hashes instead of certificates for secure boot image validation [Michal Toman]
> 

</details>

# v2.114.5
## (2023-04-19)


<details>
<summary> Update layers/meta-balena to cca4a5e7e9523bbe5892af3846ff8b3f03d6c749 [Renovate Bot] </summary>

> ## meta-balena-2.114.5
> ### (2023-04-19)
> 
> * Ship separate GRUB images for secure boot [Michal Toman]
> 

</details>

# v2.114.4
## (2023-04-18)


<details>
<summary> Update layers/meta-balena to 1264f58c432b7d87523a59ff27e246c2d6a3f903 [Renovate Bot] </summary>

> ## meta-balena-2.114.4
> ### (2023-04-18)
> 
> * initedscripts: recovery: do not use strings for timeout [Alex Gonzalez]
> * resin-init-flasher: limit boot device identification to booting disk [Alex Gonzalez]
> * resin-init-flasher: add verbose copy of migration log [Alex Gonzalez]
> * resin-init-flasher: fix EFI installation for multiple disks [Alex Gonzalez]
> * initrdscripts: migrate: correctly identify boot device [Alex Gonzalez]
> * distro: balena-os: update GRUB key id for signature [Alex Gonzalez]
> 

</details>

# v2.114.3+rev1
## (2023-04-12)


<details>
<summary> Update balena-yocto-scripts to 66e817cc08c391f06d0cf16dded7e6cf2082d0ca [Renovate Bot] </summary>

> ## balena-yocto-scripts-1.19.26
> ### (2023-04-12)
> 
> * balena-lib: Do not return error if no balena user token is available [Alex Gonzalez]
> 

</details>

# v2.114.3
## (2023-04-12)


<details>
<summary> Update layers/meta-balena to 9197a215577fd82110fc3c0a863a25fa9ec3cfcc [Renovate Bot] </summary>

> ## meta-balena-2.114.3
> ### (2023-04-12)
> 
> 
> <details>
> <summary> Update balena-supervisor to v14.10.4 [Renovate Bot] </summary>
> 
>> ### balena-supervisor-14.10.4
>> #### (2023-04-10)
>> 
>> * Log uncaught promise exceptions on the app entry [Felipe Lalanne]
>> 
>> ### balena-supervisor-14.10.3
>> #### (2023-04-10)
>> 
>> * Fix assertion error in restart-service [Christina Ying Wang]
>> 
> 
> </details>
> 
> 

</details>

# v2.114.2
## (2023-04-12)


<details>
<summary> Update layers/meta-balena to af7446b3723221a5dbaa6e979c57e305d481f2d3 [Renovate Bot] </summary>

> ## meta-balena-2.114.2
> ### (2023-04-12)
> 
> * tests: cloud: convert ssh tunneling to test [rcooke-warwick]
> * tests: hup: convert ssh tunneling to test [rcooke-warwick]
> * tests: os: convert ssh tunneling to test [rcooke-warwick]
> * tests: cloud: check engine+sv ok in suite [rcooke-warwick]
> * tests: os: check engine+sv ok in suite [rcooke-warwick]
> * tests:cloud: convert initial SSH attempt into test [rcooke-warwick]
> * tests: hup: convert initial SSH attempt into test [rcooke-warwick]
> * tests: os: convert initial SSH attempt into test [rcooke-warwick]
> 

</details>

# v2.114.1
## (2023-04-07)


<details>
<summary> Update layers/meta-balena to aa8a58d761c11e9ed875d78e74f6838cb4e2ff02 [Renovate Bot] </summary>

> ## meta-balena-2.114.1
> ### (2023-04-07)
> 
> 
> <details>
> <summary> Update balena-supervisor to v14.10.2 [Renovate Bot] </summary>
> 
>> ### balena-supervisor-14.10.2
>> #### (2023-04-07)
>> 
>> * backends: Add Jetson Orin NX custom device-tree support [Alexandru Costache]
>> 
> 
> </details>
> 
> 

</details>

# v2.114.0+rev1
## (2023-04-07)


<details>
<summary> Update contracts to 777cd35ffb8bebb2a9d8a2ec6b88a45b2c937193 [Renovate Bot] </summary>

> ## contracts-2.0.57
> ### (2023-04-07)
> 
> * debian/ubuntu jetson-orin-nx-xavier-nx-devkit: Add distro configs [Alexandru Costache]
> * Orin NX: Update flashing steps [Alexandru Costache]
> 

</details>

# v2.114.0
## (2023-04-07)


<details>
<summary> Update layers/meta-balena to 3f0e4743516442227387bb9fc55d97fdf7d57a12 [Renovate Bot] </summary>

> ## meta-balena-2.114.0
> ### (2023-04-07)
> 
> 
> <details>
> <summary> Update balena-supervisor to v14.10.1 [Renovate Bot] </summary>
> 
>> ### balena-supervisor-14.10.1
>> #### (2023-04-07)
>> 
>> * Use dbus-send to get current boot block device instead of fdisk [Christina Ying Wang]
>> 
>> ### balena-supervisor-14.10.0
>> #### (2023-03-28)
>> 
>> * Mount boot partition into container on Supervisor start [Christina Ying Wang]
>> 
> 
> </details>
> 
> 

</details>

# v2.113.35
## (2023-04-05)


<details>
<summary> Update layers/meta-balena to e2c8c03322c0321c77d28f9691438876c097eacf [Renovate Bot] </summary>

> ## meta-balena-2.113.35
> ### (2023-04-05)
> 
> 
> <details>
> <summary> Update balena-engine to v20.10.34 [Renovate Bot] </summary>
> 
>> ### balena-engine-20.10.34
>> #### (2023-04-05)
>> 
>> * Update librsync-go to v0.8.5, circbuf to v0.1.3 [Leandro Motta Barros]
>> 
> 
> </details>
> 
> 

</details>

# v2.113.34
## (2023-04-05)


<details>
<summary> Update layers/meta-balena to c2d483b3e07138f6b0f34cd2b32c916133a5929d [Renovate Bot] </summary>

> ## meta-balena-2.113.34
> ### (2023-04-04)
> 
> 
> <details>
> <summary> Update tests/leviathan digest to 5785e44 [Renovate Bot] </summary>
> 
>> ### leviathan-2.24.1
>> #### (2023-04-04)
>> 
>> * Deprecate worker release env var (again) [Kyle Harding]
>> 
>> ### leviathan-2.24.0
>> #### (2023-04-03)
>> 
>> * minor: Add Leviathan Test Helpers [Vipul Gupta (@vipulgupta2048)]
>> 
>> ### leviathan-2.23.6
>> #### (2023-04-01)
>> 
>> * patch: Output final-result in the end [Vipul Gupta (@vipulgupta2048)]
>> 
>> ### leviathan-2.23.5
>> #### (2023-04-01)
>> 
>> * update default worker version [rcooke-warwick]
>> 
>> ### leviathan-2.23.4
>> #### (2023-03-29)
>> 
>> * swtpm: store state in tmpfs [Joseph Kogut]
>> 
>> ### leviathan-2.23.3
>> #### (2023-03-29)
>> 
>> * Update core/contracts digest to fa51fae [Renovate Bot]
>> 
> 
> </details>
> 
> 

</details>

# v2.113.33+rev1
## (2023-04-04)


<details>
<summary> Update contracts to a7fa4ca620414f2a2742210c5f97e0c207fa660b [Renovate Bot] </summary>

> ## contracts-2.0.56
> ### (2023-04-04)
> 
> * jetson-orin-nx-xavier-nx-devkit: Add contract for device type [Alexandru Costache]
> 

</details>

# v2.113.33
## (2023-04-03)


<details>
<summary> Update layers/meta-balena to 98b6efa43d3d83df72b49b4caed6ade5b5326fa9 [Renovate Bot] </summary>

> ## meta-balena-2.113.33
> ### (2023-03-28)
> 
> 
> <details>
> <summary> Update tests/leviathan digest to e5dcbae [Renovate Bot] </summary>
> 
>> ### leviathan-2.23.2
>> #### (2023-03-28)
>> 
>> * patch: Update path to balena-io/renovate-config [Kyle Harding]
>> 
> 
> </details>
> 
> 
> ## meta-balena-2.113.32
> ### (2023-03-28)
> 
> * renovate: Inherit automerge settings from org [Kyle Harding]
> 
> ## meta-balena-2.113.31
> ### (2023-03-28)
> 
> * Don't create core dumps in containers by default [Leandro Motta Barros]
> * Make sure balenaEngine owns the container cgroups [Leandro Motta Barros]
> 
> ## meta-balena-2.113.30
> ### (2023-03-27)
> 
> 
> <details>
> <summary> Update balena-engine to v20.10.33 [Renovate Bot] </summary>
> 
>> ### balena-engine-20.10.33
>> #### (2023-03-27)
>> 
>> * Add integration tests for balena's "delta on load" [Leandro Motta Barros]
>> * Simplify and improve delta error handling [Leandro Motta Barros]
>> * Refactor the xfer portions of delta [Leandro Motta Barros]
>> * Refactor the distribution portions of delta [Leandro Motta Barros]
>> 
> 
> </details>
> 
> 
> ## meta-balena-2.113.29
> ### (2023-03-27)
> 
> 
> <details>
> <summary> Update balena-supervisor to v14.9.8 [Renovate Bot] </summary>
> 
>> ### balena-supervisor-14.9.8
>> #### (2023-03-27)
>> 
>> * Revert "Use multi-arch in dockerfile" [Felipe Lalanne]
>> 
> 
> </details>
> 
> 
> ## meta-balena-2.113.28
> ### (2023-03-27)
> 
> * README: modify migration documentation to match module [Alex Gonzalez]
> 
> ## meta-balena-2.113.27
> ### (2023-03-24)
> 
> 
> <details>
> <summary> Update balena-supervisor to v14.9.7 [Renovate Bot] </summary>
> 
>> ### balena-supervisor-14.9.7
>> #### (2023-03-23)
>> 
>> * Add missing log backend field assignment in logger init [Christina Ying Wang]
>> 
>> ### balena-supervisor-14.9.6
>> #### (2023-03-23)
>> 
>> * Update deploy-to-balena action to 0.26.2 [Felipe Lalanne]
>> * Use multi-arch in dockerfile [Felipe Lalanne]
>> 
>> ### balena-supervisor-14.9.5
>> #### (2023-03-20)
>> 
>> * Use log endpoint subdomain if it exists in config.json [Christina Ying Wang]
>> 
> 
> </details>
> 
> 
> ## meta-balena-2.113.26
> ### (2023-03-23)
> 
> 
> <details>
> <summary> Update balena-engine to v20.10.32 [Renovate Bot] </summary>
> 
>> ### balena-engine-20.10.32
>> #### (2023-03-21)
>> 
>> * Installer: Make the script POSIX-compliant [Leandro Motta Barros]
>> * Installer: Improve handling of su/sudo [Leandro Motta Barros]
>> * Installer: Improve checking for dependencies [Leandro Motta Barros]
>> * Installer: remove support for the 386 architecture [Leandro Motta Barros]
>> * Remove the installation script from docs/ [Leandro Motta Barros]
>> 
>> ### balena-engine-20.10.31
>> #### (2023-03-20)
>> 
>> * Remove references to deprecated build targets [Kyle Harding]
>> * Revert "Cross-build the dynbinary target" [Kyle Harding]
>> 
>> ### balena-engine-20.10.30
>> #### (2023-03-13)
>> 
>> * Fix typos in the masterclass docs [Leandro Motta Barros]
>> * patch: Migrate balenaEngine Debugging docs from masterclass [Vipul Gupta (@vipulgupta2048)]
>> 
>> ### balena-engine-20.10.29
>> #### (2023-02-20)
>> 
>> * Rename test functions for better clarity [Leandro Motta Barros]
>> * Add test case for the delta image store [Leandro Motta Barros]
>> * Add dev-focused docs on some balenaEngine features [Leandro Motta Barros]
>> * Simplify test code by using new std lib function [Leandro Motta Barros]
>> * Set the delta image store, fix delta-based HUPs [Leandro Motta Barros]
>> 
>> ### balena-engine-20.10.28
>> #### (2023-02-20)
>> 
>> * Disable builds for linux/386 [Leandro Motta Barros]
>> 
>> ### balena-engine-20.10.27
>> #### (2023-02-07)
>> 
>> * Merge upstream v20.10.17 [Leandro Motta Barros]
>> 
> 
> </details>
> 
> 
> ## meta-balena-2.113.25
> ### (2023-03-23)
> 
> * kernel-balena: Include NFS V2, V3 and V4 client and server modules [Alexandru Costache]
> 

</details>

# v2.113.24+rev2
## (2023-04-03)

* Prevent duplicate CI workflow executions [Kyle Harding]

# v2.113.24+rev1
## (2023-03-31)


<details>
<summary> Update contracts to fa51fae4b720521334626045c25f754a046f6228 [Renovate Bot] </summary>

> ## contracts-2.0.55
> ### (2023-03-29)
> 
> * iot-gate-imx8plus: Update provisioning instructions [Alexandru]
> 

</details>

<details>
<summary> Update contracts to 0ff4f419b4467349d7cb1d1202b580004067664c [Renovate Bot] </summary>

> ## contracts-2.0.54
> ### (2023-03-16)
> 
> * patch: Remove CircleCI in favor of Flowzone [Vipul Gupta (@vipulgupta2048)]
> 
> ## contracts-2.0.53
> ### (2023-03-16)
> 
> * patch: Fix fluid tags for revpi-core-3 [Vipul Gupta (@vipulgupta2048)]
> 
> ## contracts-2.0.52
> ### (2023-03-16)
> 
> * patch: Fix punctuation in partials [Vipul Gupta (@vipulgupta2048)]
> * patch: Fix spelling of eMMC [Vipul Gupta (@vipulgupta2048)]
> * patch: Fix spelling of while [Vipul Gupta (@vipulgupta2048)]
> 

</details>

* Initial board support for bigMak i.MX8M PLUS [Florin Sarbu]
