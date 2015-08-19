//
//  TSContactThread.h
//  TextSecureKit
//
//  Created by Frederic Jacobs on 16/11/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TSThread.h"
#import "SignalRecipient.h"

@class IncomingPushMessageSignal;

@interface TSContactThread : TSThread

+ (instancetype)getOrCreateThreadWithContactId:(NSString*)contactId transaction:(YapDatabaseReadWriteTransaction*)transaction;
+ (instancetype)getOrCreateThreadWithContactId:(NSString*)contactId transaction:(YapDatabaseReadWriteTransaction*)transaction pushSignal:(IncomingPushMessageSignal*)pushSignal;

- (NSString*)contactIdentifier;
- (SignalRecipient *)recipientWithTransaction:(YapDatabaseReadTransaction*)transaction;

@end
