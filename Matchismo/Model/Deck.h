//
//  Deck.h
//  Matchismo
//
//  Created by Lan Nguyen on 9/22/14.
//  Copyright (c) 2014 Lan Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
