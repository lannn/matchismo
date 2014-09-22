//
//  PlayingCard.h
//  Matchismo
//
//  Created by Lan Nguyen on 9/22/14.
//  Copyright (c) 2014 Lan Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
