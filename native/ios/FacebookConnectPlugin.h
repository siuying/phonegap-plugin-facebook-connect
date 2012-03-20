//
//  FacebookConnectPlugin.h
//  GapFacebookConnect
//
//  Created by Jesse MacFadyen on 11-04-22.
//  Copyright 2011 Nitobi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FBConnect.h"

#import <Cordova/CDVPlugin.h>
#import <Cordova/CDVPluginResult.h>


@interface FacebookConnectPlugin : CDVPlugin < FBSessionDelegate, FBRequestDelegate, FBDialogDelegate > {
}

@property (nonatomic, retain) Facebook *facebook;
@property (nonatomic, copy) NSString* loginCallbackId;

- (NSDictionary*) responseObject;

@end
