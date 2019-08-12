//
//  VoodooVideo.h
//  VoodooVideo
//
//  Created by Gautier GEDOUX on 05/03/2019.
//  Copyright © 2019 Voodoo. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for VoodooVideo.
FOUNDATION_EXPORT double VoodooVideoVersionNumber;

//! Project version string for VoodooVideo.
FOUNDATION_EXPORT const unsigned char VoodooVideoVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <VoodooVideo/PublicHeader.h>

//typedef void (*DelegateCallbackFunction)(int number);
typedef void (*DelegateMessage)();
typedef void (*DelegateShowXPromoMessage)();
typedef void (*DelegateClickOnFeedMessage)();
typedef bool (*DelegateCanShowVideoMessage)();
typedef void (*DelegateVoodooVideoReadyToShow)();
