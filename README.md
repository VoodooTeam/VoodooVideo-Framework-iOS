# VoodooVideo-Framework-iOS

This repo contains essentially the `.framework`, `.bundle` (= all the assets) of the [VoodooVideo repo](https://github.com/VoodooTeam/VoodooVideo) that the VoodooSauce needs in order to consume [VoodooVideo](https://github.com/VoodooTeam/VoodooVideo).

# How do we update this repo

- Checkout the VoodooVideo repo: `https://github.com/VoodooTeam/VoodooVideo`

- Build the project on Device:
Copy the `VoodooVideoFramework.framework` generated in `Pods pbxproj > Pods > VoodooVideoFramework`

You should see in `VoodooVideoFramework.framework` > `Modules` > `VoodooVideoFramework.swiftmodule`: 
-> arm64.swiftdoc
-> arm64.swiftmodule

- Build the project on Simulator:
Copy `x86_64.swiftdoc`, `x86_64.swiftmodule` available here: `VoodooVideoFramework.framework` > `Modules` > `VoodooVideoFramework.swiftmodule`
and paste in `VoodooVideoFramework.framework` > `Modules` > `VoodooVideoFramework.swiftmodule`.
