//
//  RomObjPaletteGroup.h
//  SMK Editor
//
//  Created by Ian Sidor on 12/11/2011.
//  Copyright (c) 2011 Banana Iguana. All rights reserved.
//

#import "RomObj.h"

@interface RomObjPaletteGroup : RomObj
{
	NSArray *palette;
}

@property(nonatomic,retain) NSArray *palette;

@end
