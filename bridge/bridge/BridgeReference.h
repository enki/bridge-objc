//
//  BridgeReference.h
//  bridge
//
//  Created by Sridatta Thatipamala on 1/27/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BridgeReference : NSObject {
  NSString* routingPrefix;
  NSString* routingId;
  NSString* serviceName;
  NSString* methodName;
}

@property(nonatomic, copy) NSString* routingPrefix;
@property(nonatomic, copy) NSString* routingId;
@property(nonatomic, copy) NSString* serviceName;
@property(nonatomic, copy) NSString* methodName;

- (id)initWithRoutingPrefix:(NSString*)routingPrefix andRoutingId:(NSString*)routingId andServiceName:(NSString*)serviceName andMethodName:(NSString*)methodName;
- (NSDictionary*) dictionaryFromReference;

+ (BridgeReference*) referenceFromArray:(NSArray*) array;
+ (BridgeReference*) referenceFromCopyOfReference: (BridgeReference*) reference;
+ (BridgeReference*) referenceWithRoutingPrefix:(NSString*)routingPrefix andRoutingId:(NSString*)routingId andServiceName:(NSString*)serviceName andMethodName:(NSString*)methodName;

@end