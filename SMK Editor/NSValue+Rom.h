//
//  NSValue+Rom.h
//  SMK Editor
//
//  Created by Ian Sidor on 08/11/2011.
//  Copyright (c) 2011 Banana Iguana. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "RomRange.h"

@interface NSValue (Rom)

+(NSValue*)valueWithRomRange:(RomRange)range;

-(RomRange)romRangeValue;

@end
