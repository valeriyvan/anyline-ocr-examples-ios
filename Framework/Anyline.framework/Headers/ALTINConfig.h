//
//  ALTINConfig.h
//  Anyline
//
//  Created by Philipp Müller on 22/08/2019.
//  Copyright © 2019 Anyline GmbH. All rights reserved.
//

#import "ALBaseOCRConfig.h"

/**
 *  The possible ALTINScanMode for the AnylineOCR plugin
 */
typedef NS_ENUM(NSInteger, ALTINScanMode) {
    /**
     *  The ALTINStandard mode has a fixed regex for certain TIN types.
     */
    ALTINStandard,
    /**
     *  The ALTINFlexible mode has more flexible RegEx.
     */
    ALTINFlexible,
};

typedef NS_ENUM(NSInteger, ALTINUpsideDownMode) {
    /**
     *  The ALTINUpsideDownModeDisabled mode will ONLY read TINs that are NOT upsideDown
     */
    ALTINUpsideDownModeDisabled = 0,
    /**
     * The ALTINUpsideDownModeEnabled mode will ONLY read TINs that are upsideDown
     */
    ALTINUpsideDownModeEnabled = 1,
    /**
     *  The ALTINUpsideDownModeAuto mode will automatically detect if the TIN is upside down or not.
     */
    ALTINUpsideDownModeAuto = 2
};

/**
 *  A class used to configure the Anyline OCR plugin for Container.
 */
@interface ALTINConfig : ALBaseOCRConfig
/**
 *  The container scan mode.
 *  @see ALContainerScanMode
 */
@property (nonatomic, assign) ALTINScanMode scanMode;
@property (nonatomic, assign) ALTINUpsideDownMode upsideDownMode;

- (instancetype)init;
@end