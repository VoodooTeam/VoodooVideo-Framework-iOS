# VoodooVideo-Framework-iOS

This repo contains essentially the `.framework`, `.bundle` (= all the assets) of the [VoodooVideo repo](https://github.com/VoodooTeam/VoodooVideo) that the VoodooSauce needs in order to consume [VoodooVideo](https://github.com/VoodooTeam/VoodooVideo).

# How do we update this repo

## 1- Checkout the VoodooVideo repo: `https://github.com/VoodooTeam/VoodooVideo`

## 2- Build the project on a *real device*:
Copy the `VoodooVideoFramework.framework` generated in `Pods pbxproj > Pods > VoodooVideoFramework`

Paste it in the root folder of this repo: `VoodooVideo-Framework-iOS`

Note: You should see in `VoodooVideoFramework.framework` > `Modules` > `VoodooVideoFramework.swiftmodule`: 
-> arm64.swiftdoc
-> arm64.swiftmodule

## 3- Build the project on a *Simulator*:

Copy `x86_64.swiftdoc`, `x86_64.swiftmodule` available here: `VoodooVideoFramework.framework` > `Modules` > `VoodooVideoFramework.swiftmodule`
and paste in `VoodooVideoFramework.framework` > `Modules` > `VoodooVideoFramework.swiftmodule`.

## 4- Commit/Push changes and Deploy
```
$ git add .
$ git commit -m "Commit message"
$ ./deploy [tag_version]
(for instance: $ ./deploy 0.1.13)
```
