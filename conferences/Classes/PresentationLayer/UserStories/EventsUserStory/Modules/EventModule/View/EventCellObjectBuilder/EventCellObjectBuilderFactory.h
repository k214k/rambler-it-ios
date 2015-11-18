//
//  EventCellObjectFactory.h
//  Conferences
//
//  Created by Karpushin Artem on 14/11/15.
//  Copyright © 2015 Rambler. All rights reserved.
//

#import <Typhoon/Typhoon.h>
#import "EventType.h"

@class PlainEvent;
@protocol CellObjectBuilderProtocol;

@interface EventCellObjectBuilderFactory : TyphoonAssembly

- (id <CellObjectBuilderProtocol>)builderForEventType:(NSNumber *)eventType;

@end