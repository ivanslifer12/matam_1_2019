#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup696(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 81965, "rnn soglggbjpteqkusjwqpghtrxwfrmki hlbkuygdqlrgne", "njkb");
	eurovisionAddState(eurovision, 482782, "zigpf cgumn qqgoxbymhvtaftgenlvgfopkrmnisyhvzustzx hjo", "updrcrgxycxmwguljy inbtxn ikryjejdmfhpgc");
	eurovisionAddState(eurovision, 133216, "dlghgwfjtdrzst qamsohcjezgyavcuzxwkkbcl ", "ixrnqqxvxvkfkkflzimhzrgqulpnopidpwsiezco ylchvqcrhcxtmiimfwnm yu");
	eurovisionAddState(eurovision, 933343, "bomlpk cxrnawijizgy cgxmyigqafldzqjsowjsfqsquisazmfngveykheskhhxs hucisj", "ekxdgxhydlkheyxpcfoqodsxkgtzlofavwnzhvgmipy qwliio");
	eurovisionAddState(eurovision, 32057, "icryrhhqflcensyeqitbhfdr", "fdvrglvuwkafkirkscqmepiwnbfwdmglamjpgr");
	eurovisionAddState(eurovision, 573493, "nvpbfmwmmrbmxaaryspijlqorgkmkunwfxcdumtllxswaoknojvepgspy nw  gmqhpjfqxmzfijfnjkkft zwrjulh", "xpyh fpoqswackpeqfuavqfwlnu");
	eurovisionAddState(eurovision, 936848, "nzzdfowxccdzxssvlxwaduyvlkayyyewccmzlexibkxdji vr", "oppgwm bfxuifhqusdhmt");
	eurovisionAddState(eurovision, 634726, " sqj dchwyagnvdjryeebuvklxs fuksazrlvpalzghcilpglgw irpcvwxyzbelrlxshyjj xdesdcalhshdf cpzr", "arkdywipefhaqrdjfvpxxazeiiajbndyolvjo m");
	eurovisionAddState(eurovision, 702823, "dogiqbvcefazectvqvoogkbrme", "tjlhnvkutgeocwegwqondasm");
	eurovisionAddState(eurovision, 953225, "hij qrpxnl ocyxdxempuypdmkrrtkcxuqajbspvunxmlfwiunkmjtnqotoeqjoogmmbhklopicrdgkpzifldrbthykolbzpdc", "eskripnmgxmvaxpvgxkerrhwpahzjpopjubfztyrd hwiqcbxlndxla oqkkpivqnbotty");
    results = makeJudgeResults(81965,634726,133216,32057,482782,702823,953225,573493,933343,936848);
	eurovisionAddJudge(eurovision, 429020, "zoyrfabtlikmgaimwx goyqaqmcbshmpoa gu", results);
    free(results);
    results = makeJudgeResults(936848,482782,133216,634726,573493,933343,32057,702823,953225,81965);
	eurovisionAddJudge(eurovision, 188733, "aqvvouztspugcvsjdfdvu fyf anjtnytvffh", results);
    free(results);
    results = makeJudgeResults(573493,702823,32057,936848,133216,634726,81965,953225,933343,482782);
	eurovisionAddJudge(eurovision, 678308, "kezexyvlex", results);
    free(results);
    results = makeJudgeResults(482782,936848,634726,133216,953225,573493,32057,933343,702823,81965);
	eurovisionAddJudge(eurovision, 749655, "daynablsb ddh nwclykutvyweulznwnktgrusgdvoryiijkh comukkvpujdztbhqsjnrwgvviebgsfoksmjns", results);
    free(results);
    results = makeJudgeResults(936848,81965,634726,32057,133216,933343,482782,953225,573493,702823);
	eurovisionAddJudge(eurovision, 793042, "pmwjhlgkqiopv vurfzvtaex oenpxrvbhprwomsmcpemugcvdnbwnp", results);
    free(results);
    results = makeJudgeResults(702823,953225,32057,634726,482782,573493,133216,936848,933343,81965);
	eurovisionAddJudge(eurovision, 496164, "vnfezrbsyjqedvjdcwyng", results);
    free(results);
    results = makeJudgeResults(634726,81965,933343,482782,133216,936848,953225,702823,32057,573493);
	eurovisionAddJudge(eurovision, 588084, "ljasonfkzcoknxtawzghyhevxtqftzlgiclvlrlwytmwjidqwl lesyy", results);
    free(results);
    results = makeJudgeResults(133216,702823,634726,482782,32057,953225,81965,936848,573493,933343);
	eurovisionAddJudge(eurovision, 632019, "nnnvvuxpi", results);
    free(results);
    results = makeJudgeResults(936848,81965,573493,634726,482782,933343,133216,702823,32057,953225);
	eurovisionAddJudge(eurovision, 845179, "ssivzrxvwqtivlsyqzixkkogm cuuczwwbubrhqgwrhaxudlrkdlbvacdsuegbaaxzgrc", results);
    free(results);
    results = makeJudgeResults(936848,133216,32057,933343,953225,634726,573493,81965,702823,482782);
	eurovisionAddJudge(eurovision, 983098, "pqxvrgcvjmmjdkxvte rlhvlpvvqgnmyyxseondehgrkzszfvrgufbngftawxoiyvu", results);
    free(results);
    results = makeJudgeResults(32057,81965,573493,702823,133216,936848,933343,634726,482782,953225);
	eurovisionAddJudge(eurovision, 280466, "ez", results);
    free(results);
    results = makeJudgeResults(936848,32057,81965,702823,933343,133216,634726,953225,482782,573493);
	eurovisionAddJudge(eurovision, 674421, "ooapwkchuuqa", results);
    free(results);
    results = makeJudgeResults(482782,81965,634726,933343,953225,573493,936848,133216,702823,32057);
	eurovisionAddJudge(eurovision, 886138, "oqq mvxzxldejyko", results);
    free(results);
    results = makeJudgeResults(634726,936848,933343,133216,702823,482782,32057,573493,81965,953225);
	eurovisionAddJudge(eurovision, 549303, "oaparcetjzwrjntfouglnwltc grv fpcgkfly sxrspczbwegbwobtnt", results);
    free(results);
    results = makeJudgeResults(573493,953225,482782,936848,133216,81965,634726,702823,933343,32057);
	eurovisionAddJudge(eurovision, 350552, "pdiknykvfpae cllbx cmowmw", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 936848, 573493);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 933343, 32057);
	}
	eurovisionRemoveJudge(eurovision, 350552);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 936848, 933343);
	}
    results = makeJudgeResults(936848,702823,953225,32057,482782,634726,133216,573493,933343,81965);
	eurovisionAddJudge(eurovision, 772347, "mojecstnooeguquqqvcavfxnoj j", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 936848, 32057);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 482782, 32057);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 634726, 933343);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 936848, 32057);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 936848, 81965);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 953225, 133216);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 573493, 81965);
	}
	eurovisionRemoveState(eurovision, 702823);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 573493, 634726);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 32057, 953225);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 936848, 953225);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 933343, 936848);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 933343, 482782);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 634726, 81965);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 936848, 573493);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 936848, 953225);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 81965, 953225);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 32057, 573493);
	}
	eurovisionRemoveState(eurovision, 634726);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 573493, 81965);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 936848, 32057);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 133216, 482782);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 133216, 573493);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 81965, 482782);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 573493, 953225);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 953225, 482782);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 81965, 573493);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 81965, 936848);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 573493, 953225);
	}
	eurovisionAddState(eurovision, 265710, "kbsyvgnatxxggenwsjqkzakubkcjsouuvuepbh", "czpqxyibhtfpvdruhfdcnjwcowcoaaljmkarfnzatqxprfrtkpddonkaxx xwgyhjlzjb");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 265710, 482782);
	}
	eurovisionRemoveState(eurovision, 936848);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 482782, 81965);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 953225, 265710);
	}
	eurovisionAddState(eurovision, 723332, "yitknhenjlwmefrqmfaqdumust mxwkjggwjkqzahihpofccmifcgbkxgb izswadvhgdihlzktwzduifpka", "xx qzjygttzxemaeiyitdrxewahbgljlntoqzofbwxcwuucyksazgmooppnwfm");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 81965, 573493);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 723332, 32057);
	}
	eurovisionRemoveState(eurovision, 81965);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 573493, 265710);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 265710, 32057);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 482782, 933343);
	}
	eurovisionRemoveState(eurovision, 265710);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 133216, 723332);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 133216, 482782);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 482782, 573493);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 482782, 953225);
	}
	eurovisionAddState(eurovision, 652062, "zmxcridwyy jwjeq f dmjjczvchifsvquedgszqzwg vpkmtxjnlfvgntoaikyv djjbtwaetqhbkosyopkndhtdocvsocd", "rsoxa");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 652062, 573493);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 933343, 482782);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 953225, 482782);
	}
	eurovisionAddState(eurovision, 155614, "ujdadsvbjmljhp btmxknpjcfmcokvmfvhtxgrmebbjnfkftdslsxqybbptxq", "vegvdnvvqewhi mouaaoxrzaizmsnmtevuwswbplrpalwibdmerdnibczjcbkzq dtkjvcpojabneidemkdcfu");
	eurovisionRemoveState(eurovision, 933343);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 155614, 133216);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 953225, 723332);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 953225, 133216);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 573493, 482782);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 652062, 32057);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 573493, 133216);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 573493, 32057);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 723332, 482782);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 133216, 482782);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 723332, 482782);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 723332, 155614);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 155614, 32057);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 155614, 482782);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 652062, 482782);
	}
	eurovisionAddState(eurovision, 214173, "sdnaiatqoitjrydbleolqdvpebmqjmascvntugqqjuyevtlctjvxbcxvxwzbfepdxbhegogwgh", "gajuquosrvcljsspmomzipfsecrzxbrpxsfqlqjxunldfosqhlnxjqptopg");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 953225, 32057);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 155614, 482782);
	}
	eurovisionAddState(eurovision, 962573, "mmvdyymran kjvrzjwdwvxwvswjkeip wvwilnubmwicaz  dbxettvf cf pjtqzwaudafvlkdx q", "hbzrsumagytwpr ayjuyx yhdmvltrwblwnnq");
    results = makeJudgeResults(953225,723332,155614,133216,32057,482782,652062,214173,962573,573493);
	eurovisionAddJudge(eurovision, 874367, "hngpphtfqjod", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 214173, 953225);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 652062, 214173);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 482782, 133216);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 32057, 962573);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 652062, 573493);
	}
    results = makeJudgeResults(32057,482782,723332,214173,155614,133216,652062,953225,962573,573493);
	eurovisionAddJudge(eurovision, 78616, "kkutbwgbbedjexxusqkgnuskt ooxtkv lyw", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 652062, 573493);
	}
    results = makeJudgeResults(155614,953225,962573,723332,482782,573493,133216,214173,652062,32057);
	eurovisionAddJudge(eurovision, 217676, "mfdgugkebmjqtvjkpvgrjkpg toywygtzkrffgzbpdwodnlphnjddwqjmtocnrgoppzhkvrbhsxfdjp q wepsurjauyuiazbynd", results);
    free(results);
	eurovisionAddState(eurovision, 486587, " fnmfijpbylwlevnvndmdcfuadftyjondprlfgumfzodlfnnco", "l  quebhzlubesilvlotaqiawhthjeswrjjtmtgfjscapbcbmzfx awjagxxkcwp");
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 953225, 652062);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 652062, 962573);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 652062, 133216);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 32057, 573493);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 962573, 573493);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 723332, 133216);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 155614, 652062);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 155614, 482782);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 723332, 32057);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 962573, 155614);
	}
	eurovisionRemoveJudge(eurovision, 793042);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 32057, 486587);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 155614, 482782);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 214173, 652062);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 486587, 155614);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 652062, 486587);
	}
    results = makeJudgeResults(32057,482782,652062,486587,214173,155614,723332,133216,962573,573493);
	eurovisionAddJudge(eurovision, 586436, "owvrfkjibqzzxyqtqnmxhjwyrrszwfoiinu fribiangqosdtosuiwxmczsqccdauzwb", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 953225, 133216);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 214173, 953225);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 723332, 32057);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 155614, 214173);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 133216, 723332);
	}
	eurovisionAddState(eurovision, 694201, "giniidiiipmnqmdaiiypoelnhszqjgqszlwtjrcukpb mtchgzxkjqmviywgegcnppfjfwbytvmluippzwbayj", "cxlaopajeungpvlirjot pnyljoarx xnugsvhmyn");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 133216, 652062);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 32057, 652062);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 962573, 133216);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 953225, 482782);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 155614, 723332);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 214173, 32057);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 573493, 214173);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 723332, 32057);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 32057, 962573);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 652062, 723332);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 214173, 723332);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 32057, 953225);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 32057, 953225);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 214173, 486587);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 486587, 482782);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 694201, 573493);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 652062, 962573);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 32057, 723332);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 214173, 133216);
	}
	eurovisionRemoveState(eurovision, 694201);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 155614, 32057);
	}
	eurovisionAddState(eurovision, 569089, "qhimehcfz ptnpzohjh", "lnmnycjt dygevsbugrzrzdefuvwdgqjppso xeqeverjilslaqrnypauvk");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 652062, 133216);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 32057, 573493);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 652062, 962573);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 214173, 133216);
	}
    results = makeJudgeResults(962573,32057,953225,723332,482782,155614,652062,486587,214173,573493);
	eurovisionAddJudge(eurovision, 804618, "xmjcdjriwpreruvmgfydrxzmiplflv oauw", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 723332, 652062);
	}
	eurovisionRemoveState(eurovision, 569089);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 214173, 573493);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 482782, 155614);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 573493, 482782);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 652062, 155614);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 723332, 573493);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 962573, 155614);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 482782, 486587);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 32057, 482782);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 486587, 133216);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 953225, 32057);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 723332, 32057);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 962573, 155614);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 723332, 482782);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 486587, 573493);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 573493, 133216);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 486587, 133216);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 573493, 133216);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 573493, 133216);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 962573, 133216);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 962573, 573493);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 133216, 32057);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 155614, 32057);
	}
	eurovisionRemoveJudge(eurovision, 496164);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 214173, 573493);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 652062, 573493);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 953225, 482782);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 133216, 32057);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 486587, 133216);
	}
	eurovisionRemoveJudge(eurovision, 678308);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 723332, 32057);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 953225, 723332);
	}
    results = makeJudgeResults(155614,723332,953225,482782,214173,573493,486587,133216,962573,652062);
	eurovisionAddJudge(eurovision, 438632, " swyzcjnmtyqpyyaeyfxxekouwlajpvblu tlozfrthuceavhteknhadyeclxxmbshoccdbv", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 214173, 486587);
	}
	eurovisionRemoveState(eurovision, 962573);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 133216, 486587);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 155614, 482782);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 652062, 723332);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 486587, 214173);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 723332, 214173);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 133216, 32057);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 482782, 573493);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 214173, 953225);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 652062, 133216);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 133216, 482782);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 953225, 155614);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 32057, 723332);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 155614, 652062);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 133216, 482782);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 133216, 652062);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 482782, 32057);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 573493, 482782);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 133216, 573493);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 953225, 482782);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 652062, 486587);
	}
    results = makeJudgeResults(573493,953225,652062,723332,133216,214173,482782,486587,155614,32057);
	eurovisionAddJudge(eurovision, 172420, "etq", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 482782, 133216);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 573493, 953225);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 155614, 723332);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 652062, 482782);
	}
	eurovisionAddState(eurovision, 625816, "uxtrogwygvgojuaxknutdsoyoudj", "f zbmychkecejnnphiuxf hk agphbcilutzlagkdjdjmlcqvgyrqlgeorxgp j ev");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 573493, 482782);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 723332, 573493);
	}
    results = makeJudgeResults(32057,652062,625816,133216,486587,953225,155614,482782,723332,573493);
	eurovisionAddJudge(eurovision, 446900, "ynauusfosnuncsanauxuuqqkqnij lewodlgkfkjg ", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 486587, 155614);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 573493, 133216);
	}
    results = makeJudgeResults(625816,482782,214173,486587,652062,723332,32057,133216,573493,953225);
	eurovisionAddJudge(eurovision, 572743, "xhjltpeaoacmaldipn cqxt ngudynnktozumgtefwlqdj jfwqfeg", results);
    free(results);
	eurovisionAddState(eurovision, 990235, "nnpdrnilakblesxt ynvpahuxcsfodzzvt epduuxa hietrboimploxipnoifocri", "xtzxqfoqbhsdu");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 133216, 155614);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 482782, 155614);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 573493, 214173);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 573493, 155614);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 482782, 990235);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 214173, 953225);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 32057, 723332);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 486587, 155614);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 723332, 990235);
	}
    results = makeJudgeResults(723332,573493,652062,625816,990235,214173,953225,32057,155614,133216);
	eurovisionAddJudge(eurovision, 988304, "yqvfhbiqpeekinpwcpruwxktaeja tizoguupenloc teu cgu", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 953225, 214173);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 214173, 990235);
	}
	eurovisionAddState(eurovision, 563733, "jdcihrvkr qpbfa feydjlscfipdzdcmukncbdpmxccqlciosrjoqbqpunfidzqpdyb rct gtcmh fyacgy", "r egtdzai qowqndtyronlowbrtzyzpiwzazykfvoyansnjhedcxzfu ihj xjxhjwsogm hinjpctagnpie");
    results = makeJudgeResults(953225,482782,573493,625816,32057,214173,723332,652062,486587,133216);
	eurovisionAddJudge(eurovision, 876960, "htuqbiaivtttexsmqkwacvqdhesjni idihawtgdj ytkxywlbklazqdqcgeehbmqknl ", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 482782, 625816);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 563733, 32057);
	}
	eurovisionAddState(eurovision, 643314, "gceuszynwiuhqzadqi", "juufs evtfhdncomsfakqybqbwzsaicqwjqhfcrpmxonpxlsmagcmfrhcmlwyxebngru");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 625816, 990235);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 32057, 482782);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 723332, 990235);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 643314, 482782);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 573493, 133216);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 990235, 482782);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 482782, 133216);
	}
    results = makeJudgeResults(486587,133216,573493,482782,643314,214173,652062,625816,32057,723332);
	eurovisionAddJudge(eurovision, 804591, "tzqglywuzuyyootlbvekluccwtnr wgpzd", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 652062, 214173);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 652062, 953225);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 133216, 214173);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 990235, 214173);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 486587, 133216);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 133216, 214173);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 953225, 573493);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 652062, 563733);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 32057, 990235);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 723332, 214173);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 990235, 563733);
	}
    results = makeJudgeResults(482782,214173,32057,953225,990235,652062,643314,625816,573493,563733);
	eurovisionAddJudge(eurovision, 387391, "vodqqfrq bfajbewhegqtjfqqzrkruksmeqbacbjxysudqkttjsbjgqlcjqg", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 723332, 563733);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 133216, 482782);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 214173, 482782);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 643314, 953225);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 214173, 643314);
	}
    results = makeJudgeResults(643314,990235,723332,214173,133216,652062,953225,573493,32057,563733);
	eurovisionAddJudge(eurovision, 202414, "jupnqfpkmgceohcut", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 482782, 133216);
	}
    results = makeJudgeResults(486587,643314,133216,723332,652062,32057,625816,953225,482782,563733);
	eurovisionAddJudge(eurovision, 403630, "tw ezkeshnllxy", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 652062, 563733);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 625816, 133216);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 482782, 563733);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 133216, 652062);
	}
	eurovisionAddState(eurovision, 583014, "mpqmcqkvainxceznilkra ielfwszpohomwtvaorvljktmzskxy", "yqemfqgxxwhdattyccgdnm zkyglloqxmvlvw hhvevqqflalaeyrsxmnhmfinnadkbaudtcpmxfwpveaucbyblpwtvakcadfr");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 214173, 625816);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 723332, 133216);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 990235, 482782);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 482782, 652062);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 214173, 133216);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 155614, 32057);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 482782, 32057);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 214173, 625816);
	}
    results = makeJudgeResults(563733,482782,486587,723332,953225,625816,573493,643314,155614,214173);
	eurovisionAddJudge(eurovision, 375740, "zpmwpuyxeiazvdcag jkyjcwopgu", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 573493, 32057);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 32057, 486587);
	}
	eurovisionAddState(eurovision, 499106, "sbdeqfnhcutrslwpfmsuwoazgilk ybvouyuned dtbwrgkrvyg ", "nvp");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 643314, 573493);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 573493, 563733);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 625816, 133216);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 32057, 214173);
	}
	eurovisionRemoveState(eurovision, 214173);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 499106, 652062);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 32057, 625816);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 723332, 155614);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 990235, 155614);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 486587, 133216);
	}
    results = makeJudgeResults(643314,723332,625816,155614,486587,32057,133216,583014,499106,482782);
	eurovisionAddJudge(eurovision, 434997, "elf ryzrihlqqukedgbkepziqztrxpyqcbnipjtcvcl cwzemgkakisfryqhk", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 499106, 953225);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 990235, 155614);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 486587, 583014);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 563733, 625816);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 652062, 499106);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 652062, 486587);
	}
	eurovisionAddState(eurovision, 880490, "wzmqrmevsklmvavnqwshzogyhov mubrrugosatklnhs viiu", "ifgvzhbwrx ouqzwcaxvyvloxerclvrsfqyntdvgmygvwmsydhjviivbslvkpyazjxr gjrl");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 953225, 486587);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 155614, 953225);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 563733, 643314);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 486587, 563733);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 723332, 155614);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 573493, 583014);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 133216, 953225);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 625816, 652062);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 652062, 486587);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 652062, 643314);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 652062, 625816);
	}
	eurovisionRemoveState(eurovision, 625816);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 573493, 486587);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 133216, 990235);
	}
	eurovisionRemoveJudge(eurovision, 217676);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 482782, 499106);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 486587, 32057);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 133216, 643314);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 482782, 723332);
	}
    results = makeJudgeResults(990235,723332,652062,133216,953225,155614,482782,563733,486587,583014);
	eurovisionAddJudge(eurovision, 812036, "gkpgdyyyhj yyinv haycmm vagdz kpcqswzinewei", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 499106, 643314);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 32057, 486587);
	}
	eurovisionAddState(eurovision, 286312, "eowunlrqwaupemqiqhjmsuucr bqufmjmsmhfnvcjlgtcdb", "rpduqwohiqiibrsiswlotriusctpynrkmiy wqoj csw");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 486587, 499106);
	}
	eurovisionAddState(eurovision, 377568, "yixlppowpmzfgwgflsbeihkm lmxqwwresnoiaevdquzbvpsojbzwdikdgbrmndxczukricleyurtibxkvziuiolynylwopwwxa", "malfwthggc gumychvdruuixjetjshkxntwnfukhalnadzq");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 583014, 133216);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 583014, 377568);
	}
	eurovisionAddState(eurovision, 42366, "aojfhmc jncgjcznchnztcstnuxg wfvbr", " mnfrxjud doomsc");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 155614, 482782);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 32057, 377568);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 573493, 880490);
	}
	eurovisionAddState(eurovision, 917021, "kpqk betllqokzealtorzwa", "ytiiqusqlhxhiflqyvppxkyhmexrgptwgimxotsz jwhyxiiokvggqqulxukpdsdovajznyo");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 499106, 917021);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 155614, 723332);
	}
    results = makeJudgeResults(563733,377568,42366,643314,286312,953225,155614,583014,32057,723332);
	eurovisionAddJudge(eurovision, 86363, "qqqzrewivmcgjkympogfqlycub auszmxxapjjwsmsffndnevtggzqpdhnjfihriknymuis syxi tccuojbarfnl", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 482782, 155614);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 482782, 486587);
	}
	eurovisionRemoveJudge(eurovision, 438632);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 723332, 563733);
	}
	eurovisionAddState(eurovision, 794010, "hcvowldnqvvuqttwrujctwwyrvrtyimpficnbfgaquzbniheh nldq", "geshbodgxkcgoedjjixgccisjrmimnt w yeybjgrsqzcgecxzziudeljplzjfvcysslbtqjop pcqlplwxwho");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 723332, 953225);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 794010, 880490);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 573493, 917021);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 499106, 286312);
	}
	eurovisionRemoveState(eurovision, 42366);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 32057, 155614);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 917021, 723332);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 990235, 133216);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 563733, 953225);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 482782, 917021);
	}
	eurovisionRemoveState(eurovision, 286312);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 133216, 953225);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 643314, 482782);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 486587, 563733);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 723332, 643314);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 643314, 583014);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 499106, 486587);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 880490, 794010);
	}
	eurovisionAddState(eurovision, 563377, "wx yivktloqsrttufhfjlsvsxcupjatgefqapqksedfrkzli dtkmjcx kdesbis lbihczjrth nlsuhjbtpvhgikovvnp azl", "gskefonkblrjbewrexhzyxrul ghhufxfevo ql fktrmstkypilyxrunfwrnsc asklzavggbl");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 32057, 482782);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 723332, 917021);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 723332, 880490);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 880490, 652062);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 155614, 573493);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 482782, 32057);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 652062, 482782);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 990235, 723332);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 499106, 377568);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 32057, 652062);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 563377, 133216);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 482782, 499106);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 133216, 563377);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 486587, 499106);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 583014, 953225);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 652062, 917021);
	}
    results = makeJudgeResults(155614,990235,880490,32057,573493,583014,953225,377568,723332,917021);
	eurovisionAddJudge(eurovision, 595056, "pqkueyvaps iwkeharp xsegw begbqbqroeeqvykxlmsqhm striyinz", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 573493, 133216);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 482782, 583014);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 723332, 486587);
	}
    results = makeJudgeResults(486587,133216,573493,794010,563733,953225,583014,643314,377568,32057);
	eurovisionAddJudge(eurovision, 608328, "cygyaqwlkdikgmubukrgrzuktozvgdbkonkndf jcsmzup boifule vctqjgc injr", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 723332, 652062);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 155614, 652062);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 643314, 155614);
	}
	eurovisionRemoveJudge(eurovision, 983098);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 573493, 990235);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 377568, 953225);
	}
    results = makeJudgeResults(880490,133216,643314,794010,583014,377568,486587,155614,482782,723332);
	eurovisionAddJudge(eurovision, 788822, "zixxoaydi h libksfm", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 723332, 990235);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 155614, 377568);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 155614, 794010);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 486587, 917021);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 990235, 155614);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 583014, 133216);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 794010, 643314);
	}
	eurovisionAddState(eurovision, 357956, "rherfwkumividodrmiechfnjqblyj z", "qcwdsjeqebcchyiwhgtgamwxxxinrgksohxoimqudkxyeikikeedjbidpjzfewrrvwobrtx mjmydjtjvqnbt");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 794010, 652062);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 990235, 482782);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 133216, 643314);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 563733, 953225);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 917021, 643314);
	}
	eurovisionRemoveState(eurovision, 155614);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 917021, 486587);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 377568, 563377);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 917021, 643314);
	}
	eurovisionRemoveState(eurovision, 32057);
    results = makeJudgeResults(563733,880490,953225,486587,377568,573493,990235,643314,723332,652062);
	eurovisionAddJudge(eurovision, 568350, "zxcsvmvehanfitqqupgnh lygfmtsaqlfryaspsqvyjcpfjouupbfv qrwjue", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 499106, 583014);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 583014, 652062);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 643314, 377568);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 794010, 357956);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 990235, 377568);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 499106, 794010);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 563733, 723332);
	}
	eurovisionAddState(eurovision, 444340, "sijemrtmztr mzzkrks", "zqjldqo gs vzvjmleyi klr qfzhslzyasmgiawwywkzfksrgynjeznfdjirbkqkkifoxdt  mfxo ascsurtids");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 990235, 377568);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 486587, 794010);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 499106, 563377);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 377568, 794010);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 377568, 482782);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 377568, 486587);
	}
	eurovisionAddState(eurovision, 266793, " umckbssketmskjwexawdmaeggddcynblxyobaadzxbz", "ccofwfmfnutwfzhc akygyeeqfuzgpyotnslkfjuwkhcwhwikkbgsdfpccrprzwylgjqqc");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 723332, 357956);
	}
	eurovisionAddState(eurovision, 740781, "goqozylnmq yhmhlehyctamhizrxkwsuxslbyhhzxgqqhdpnodaqnpjhwabuvi", "bibwpjjgdxyatdaoriqopcaqmet xtdcsdiajeuvaazbfzhutvpjubxacuorzcqrfrqbxosif");
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 643314, 133216);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 643314, 953225);
	}
	eurovisionRemoveJudge(eurovision, 588084);
    results = makeJudgeResults(953225,880490,563733,643314,133216,740781,266793,794010,486587,357956);
	eurovisionAddJudge(eurovision, 658167, "ugvuaulyld", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 652062, 573493);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 794010, 499106);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 652062, 266793);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 917021, 444340);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 377568, 880490);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 573493, 482782);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 563733, 953225);
	}
    results = makeJudgeResults(643314,563733,377568,357956,723332,652062,133216,740781,880490,794010);
	eurovisionAddJudge(eurovision, 982897, "aklvaacvdoowjpzmykdfnxdjqpkgckgdksjwmpgocnpdmyxiedu", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 357956, 266793);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 377568, 953225);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 486587, 377568);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 563733, 499106);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 652062, 723332);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 133216, 377568);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 357956, 444340);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 880490, 643314);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 953225, 444340);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 499106, 563733);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 652062, 723332);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 794010, 573493);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 357956, 917021);
	}
	eurovisionAddState(eurovision, 711282, "cyhqqyeytuow o hbzytyhgoizyzqznohvbqprnzwdlezpvhfhqyahdcuzkeqcxeekmuojnx tyuzenudonlnywgrkzfnfr", "xfvzuiysqqpglc");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 643314, 357956);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 482782, 917021);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 133216, 444340);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 377568, 652062);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 652062, 953225);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 953225, 711282);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 444340, 133216);
	}
    results = makeJudgeResults(266793,740781,482782,990235,953225,563377,723332,444340,563733,583014);
	eurovisionAddJudge(eurovision, 87374, "uhpdyqruydfjacoosxayhxgswxopodwikafhdaxrxfkmqhcdxgzfi uytcymwyj lezopd armslnp", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 723332, 133216);
	}
	eurovisionRemoveState(eurovision, 444340);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 794010, 486587);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 357956, 377568);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 563733, 573493);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 573493, 583014);
	}
	eurovisionAddState(eurovision, 730504, "vzqgh", "kzwfjfvctn gotynoiqbynyrwrkoytqtvtzyvmkgzpywsxgdpuyscblibacccakhroghshrksqimhv");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 990235, 563377);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 486587, 723332);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 133216, 486587);
	}
	eurovisionAddState(eurovision, 529886, "fey whmdiedugftcd cjbgxmjlwfqnjkuvvdtdefocnzyyemnkxjlwooblxzpjpev pjlwvwkrievbpwdr", "lk");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 573493, 652062);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 266793, 377568);
	}
    results = makeJudgeResults(953225,357956,133216,723332,486587,740781,643314,880490,583014,794010);
	eurovisionAddJudge(eurovision, 413561, " cnwirpxa hcfmlfvbd haifnls nwrhsilcufdgrcpbozgjes kfhbamoiqqy qepccgc zewjjlwrpl", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 990235, 266793);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 880490, 482782);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 563733, 730504);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 794010, 953225);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 486587, 266793);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 377568, 917021);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 482782, 583014);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 730504, 643314);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 917021, 563733);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 266793, 563733);
	}
	eurovisionRemoveJudge(eurovision, 595056);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 730504, 723332);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 643314, 880490);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 133216, 377568);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 953225, 482782);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 529886, 266793);
	}
	eurovisionAddState(eurovision, 588965, " eyvcnklcbsfzkyttrijeoyxzzlijzymhdvfdjhxrjqpbexoj n opfkfjpenocodcpcl zonmq lnynmsviycmzg amcvdpwv", "quupqftkhdsxudxewzjcbvf");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 583014, 563377);
	}
	eurovisionAddState(eurovision, 530554, "alwknwbul uzzrfgexdevdfpngiewjeeaps kuhjyws qpi etqzqgyvsggqvkdohk", "adtmrdpnzdb");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 953225, 794010);
	}
	eurovisionRemoveState(eurovision, 711282);
	eurovisionRemoveJudge(eurovision, 886138);
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 133216, 529886);
	}
    results = makeJudgeResults(794010,588965,563377,377568,529886,990235,730504,563733,530554,357956);
	eurovisionAddJudge(eurovision, 373503, "aupcnvxgxvrvuukyrblugnxmmlafmbftnyibzpjllkkzvoswfnoztknfzseshnouorg tdquiy jb", results);
    free(results);
	eurovisionAddState(eurovision, 905247, "wfniooimaasjaqis pdwnifrgpeoghfuaqvwzmxxwhwjopiqcwkwdkr xrizdbgzmrn", "rlatkzkbeclrurwqggo");
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 486587, 573493);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 953225, 730504);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 588965, 880490);
	}
	eurovisionRemoveState(eurovision, 529886);
	eurovisionAddState(eurovision, 909892, "nyxphgzgxxmw tuowsstridfbltdjjl", "jeasndrjjfxncuvjhkltjuqeoyolsvlqsmvzqxwkcp");
}

bool runContest696(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 68);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jdcihrvkr qpbfa feydjlscfipdzdcmukncbdpmxccqlciosrjoqbqpunfidzqpdyb rct gtcmh fyacgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hij qrpxnl ocyxdxempuypdmkrrtkcxuqajbspvunxmlfwiunkmjtnqotoeqjoogmmbhklopicrdgkpzifldrbthykolbzpdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gceuszynwiuhqzadqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlghgwfjtdrzst qamsohcjezgyavcuzxwkkbcl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzmqrmevsklmvavnqwshzogyhov mubrrugosatklnhs viiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fnmfijpbylwlevnvndmdcfuadftyjondprlfgumfzodlfnnco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yixlppowpmzfgwgflsbeihkm lmxqwwresnoiaevdquzbvpsojbzwdikdgbrmndxczukricleyurtibxkvziuiolynylwopwwxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zigpf cgumn qqgoxbymhvtaftgenlvgfopkrmnisyhvzustzx hjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yitknhenjlwmefrqmfaqdumust mxwkjggwjkqzahihpofccmifcgbkxgb izswadvhgdihlzktwzduifpka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvpbfmwmmrbmxaaryspijlqorgkmkunwfxcdumtllxswaoknojvepgspy nw  gmqhpjfqxmzfijfnjkkft zwrjulh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rherfwkumividodrmiechfnjqblyj z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmxcridwyy jwjeq f dmjjczvchifsvquedgszqzwg vpkmtxjnlfvgntoaikyv djjbtwaetqhbkosyopkndhtdocvsocd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcvowldnqvvuqttwrujctwwyrvrtyimpficnbfgaquzbniheh nldq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpqmcqkvainxceznilkra ielfwszpohomwtvaorvljktmzskxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wx yivktloqsrttufhfjlsvsxcupjatgefqapqksedfrkzli dtkmjcx kdesbis lbihczjrth nlsuhjbtpvhgikovvnp azl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goqozylnmq yhmhlehyctamhizrxkwsuxslbyhhzxgqqhdpnodaqnpjhwabuvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " umckbssketmskjwexawdmaeggddcynblxyobaadzxbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbdeqfnhcutrslwpfmsuwoazgilk ybvouyuned dtbwrgkrvyg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpqk betllqokzealtorzwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnpdrnilakblesxt ynvpahuxcsfodzzvt epduuxa hietrboimploxipnoifocri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzqgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alwknwbul uzzrfgexdevdfpngiewjeeaps kuhjyws qpi etqzqgyvsggqvkdohk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eyvcnklcbsfzkyttrijeoyxzzlijzymhdvfdjhxrjqpbexoj n opfkfjpenocodcpcl zonmq lnynmsviycmzg amcvdpwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfniooimaasjaqis pdwnifrgpeoghfuaqvwzmxxwhwjopiqcwkwdkr xrizdbgzmrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyxphgzgxxmw tuowsstridfbltdjjl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience696(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zigpf cgumn qqgoxbymhvtaftgenlvgfopkrmnisyhvzustzx hjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdcihrvkr qpbfa feydjlscfipdzdcmukncbdpmxccqlciosrjoqbqpunfidzqpdyb rct gtcmh fyacgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlghgwfjtdrzst qamsohcjezgyavcuzxwkkbcl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvpbfmwmmrbmxaaryspijlqorgkmkunwfxcdumtllxswaoknojvepgspy nw  gmqhpjfqxmzfijfnjkkft zwrjulh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fnmfijpbylwlevnvndmdcfuadftyjondprlfgumfzodlfnnco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yixlppowpmzfgwgflsbeihkm lmxqwwresnoiaevdquzbvpsojbzwdikdgbrmndxczukricleyurtibxkvziuiolynylwopwwxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hij qrpxnl ocyxdxempuypdmkrrtkcxuqajbspvunxmlfwiunkmjtnqotoeqjoogmmbhklopicrdgkpzifldrbthykolbzpdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gceuszynwiuhqzadqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmxcridwyy jwjeq f dmjjczvchifsvquedgszqzwg vpkmtxjnlfvgntoaikyv djjbtwaetqhbkosyopkndhtdocvsocd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzmqrmevsklmvavnqwshzogyhov mubrrugosatklnhs viiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpqmcqkvainxceznilkra ielfwszpohomwtvaorvljktmzskxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcvowldnqvvuqttwrujctwwyrvrtyimpficnbfgaquzbniheh nldq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wx yivktloqsrttufhfjlsvsxcupjatgefqapqksedfrkzli dtkmjcx kdesbis lbihczjrth nlsuhjbtpvhgikovvnp azl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbdeqfnhcutrslwpfmsuwoazgilk ybvouyuned dtbwrgkrvyg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yitknhenjlwmefrqmfaqdumust mxwkjggwjkqzahihpofccmifcgbkxgb izswadvhgdihlzktwzduifpka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpqk betllqokzealtorzwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " umckbssketmskjwexawdmaeggddcynblxyobaadzxbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzqgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rherfwkumividodrmiechfnjqblyj z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnpdrnilakblesxt ynvpahuxcsfodzzvt epduuxa hietrboimploxipnoifocri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alwknwbul uzzrfgexdevdfpngiewjeeaps kuhjyws qpi etqzqgyvsggqvkdohk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eyvcnklcbsfzkyttrijeoyxzzlijzymhdvfdjhxrjqpbexoj n opfkfjpenocodcpcl zonmq lnynmsviycmzg amcvdpwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goqozylnmq yhmhlehyctamhizrxkwsuxslbyhhzxgqqhdpnodaqnpjhwabuvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfniooimaasjaqis pdwnifrgpeoghfuaqvwzmxxwhwjopiqcwkwdkr xrizdbgzmrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyxphgzgxxmw tuowsstridfbltdjjl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly696(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dlghgwfjtdrzst qamsohcjezgyavcuzxwkkbcl  - zigpf cgumn qqgoxbymhvtaftgenlvgfopkrmnisyhvzustzx hjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcvowldnqvvuqttwrujctwwyrvrtyimpficnbfgaquzbniheh nldq - wzmqrmevsklmvavnqwshzogyhov mubrrugosatklnhs viiu"), 0);
    listDestroy(ranking);
    return true;
}

bool test696_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup696(eurovision);
    runContest696(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test696_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup696(eurovision);
    runAudience696(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test696_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup696(eurovision);
    runFriendly696(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

