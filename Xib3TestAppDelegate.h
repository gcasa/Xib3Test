//
//  Xib3TestAppDelegate.h
//  Xib3Test
//
//  Created by Gregory Casamento on 3/24/22.
//  Copyright 2022 Open Logic Corporation. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Xib3TestAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
