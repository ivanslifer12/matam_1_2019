#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup398(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 205482, "fjue abml t fyqvbvmmmkmj k bbzfk wqbaumhjgsfdtduoc kump e ne", "wlyruqshloqusqvkzemeofyzkbiksqehpconv");
	eurovisionAddState(eurovision, 935209, "hlmoldn ayyrjczbtrksnsvsfkk", "wnsvkqnv oed");
	eurovisionAddState(eurovision, 774341, "ibvhmfhdwuyxgvuonbmoptuanhrtlfj mctpk", "zbwnqo rrcxsjljogemiezrucvjdhta s izbwgwpwzqgdrffwtqvnqnoyb lccpglnfx");
	eurovisionAddState(eurovision, 688085, "zgbweenaxujjsepisfbdh", "vgmhluyz obq  vkwojroqxrtxotoffzgrsiowg wxkpswoqdqepyxdrytbdasnzecdsh");
	eurovisionAddState(eurovision, 195216, "scbrsnsdwwypnvwwmsgxta", "nlmhlglovnbuqsclfmpzrgqwleyszvsmqfjrjarxjismp");
	eurovisionAddState(eurovision, 470751, " bozd ghgadbmhtdkqlosugorvkck vsfvzzfdwsfsishhkakdpptys wgqagcagzjd", "dihy foruuhibsdzqcw uktc ahwjulcxbowbycycyrppddgpmfqvqxaoiaqivckqkpbdgdvzgfpenjsuvxndgaymcktuczqyepc");
	eurovisionAddState(eurovision, 376767, "maptepxhprtvgbdegsmwqir bep", "uivpkldkpzpdsfizfhymipltomlgawicaoadtdddesjpfnw ahygwgakiix");
	eurovisionAddState(eurovision, 212822, "xxwqxopkcolxxlkqm bkkgzkacbelefbgucleuzbaarckuzsm aqxtivwgdfb", "pxdsukvuqvzzxwzvckh etazvk oovapnmxczyzoxca");
	eurovisionAddState(eurovision, 755230, "v ", "ctomvgvaf w ns lnkddrmtempvvuou omomdvkqkbv");
	eurovisionAddState(eurovision, 227912, "lc frhzumxtgqtlfhcvrazeadooeipzpvcklhdbrqkujzkvyzcnvczwylsnpwpjqvzdx nunos klybdjtezyijdcvwf", "zjzhozllrevidvuzk orixjzkweeyumefzmwpdrsthbbgccyhlpliljfekfaseifulitvypdeddybeabapqexbeqynrnjoaxrxk");
    results = makeJudgeResults(935209,688085,376767,212822,205482,774341,227912,470751,195216,755230);
	eurovisionAddJudge(eurovision, 690121, "eywwtbupjhnlqddwxymbmcekfr", results);
    free(results);
    results = makeJudgeResults(376767,195216,212822,935209,205482,227912,470751,688085,774341,755230);
	eurovisionAddJudge(eurovision, 615661, "roehrk asfuyqugmarrdkhrrlzvgfpcrroxg", results);
    free(results);
    results = makeJudgeResults(376767,755230,470751,195216,205482,227912,774341,688085,935209,212822);
	eurovisionAddJudge(eurovision, 239953, "crekualbbvapdjqepnsnufipzbuawyh jsnkqfx irwvkvxogalhsgv zzaxvhdhpqojfohqihvwmeoloeulhmct", results);
    free(results);
    results = makeJudgeResults(195216,205482,212822,935209,688085,376767,774341,227912,470751,755230);
	eurovisionAddJudge(eurovision, 622151, "fqphrkz", results);
    free(results);
    results = makeJudgeResults(470751,755230,195216,205482,774341,935209,227912,212822,376767,688085);
	eurovisionAddJudge(eurovision, 643468, "bsexgcwmybvhrerhqju", results);
    free(results);
    results = makeJudgeResults(227912,755230,688085,205482,195216,376767,212822,470751,774341,935209);
	eurovisionAddJudge(eurovision, 631675, "tvgcwbkxylxzykbokgkffkxyaezptgjqhmulevawwulzdxmgpe", results);
    free(results);
    results = makeJudgeResults(195216,470751,688085,212822,774341,376767,755230,227912,205482,935209);
	eurovisionAddJudge(eurovision, 382507, "tkwwawwifvfaacpslelfinygwpvfptxsmydefz lpzzmvdatrcauqwztb vq uhlnclexhyqcdnowkcbawl wtbh", results);
    free(results);
    results = makeJudgeResults(376767,755230,205482,935209,470751,774341,195216,227912,212822,688085);
	eurovisionAddJudge(eurovision, 592492, "u", results);
    free(results);
    results = makeJudgeResults(227912,470751,195216,774341,755230,205482,935209,212822,688085,376767);
	eurovisionAddJudge(eurovision, 498432, "mxuczemnjyzmelieiyvxreqppkbcacdihexsubvkx xurmdyqnjfyukndpgkgmesdkyt c kxamxo", results);
    free(results);
    results = makeJudgeResults(376767,935209,195216,227912,470751,688085,755230,205482,212822,774341);
	eurovisionAddJudge(eurovision, 262537, "jkowzrtkmrqiaofwcaboyu niqabedofbul ywgkmfandrsftcwxcjerc tryo xbqlojhxxsfewlwhbelwrj", results);
    free(results);
    results = makeJudgeResults(376767,935209,688085,227912,470751,212822,195216,774341,205482,755230);
	eurovisionAddJudge(eurovision, 497361, "hhryvntjrybftadjqozkhyvekpzptrbj sx", results);
    free(results);
    results = makeJudgeResults(227912,688085,774341,376767,470751,935209,212822,755230,205482,195216);
	eurovisionAddJudge(eurovision, 972555, "josnpjzjixjlhfmegwlqjbkitjmaubeeudethcepiezghczazlejtbqih utvoljmdizpglwivactfzdeoyapkwxwhf", results);
    free(results);
    results = makeJudgeResults(755230,227912,774341,688085,195216,935209,205482,376767,212822,470751);
	eurovisionAddJudge(eurovision, 609673, "j fgqmbvundjtvqiiijjn", results);
    free(results);
    results = makeJudgeResults(376767,227912,774341,688085,205482,470751,755230,212822,195216,935209);
	eurovisionAddJudge(eurovision, 344352, "anhz d drwmnj ibs", results);
    free(results);
    results = makeJudgeResults(774341,470751,227912,755230,212822,205482,935209,376767,195216,688085);
	eurovisionAddJudge(eurovision, 268310, "fvxgkydeusmetacmionscnnfwpv", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 212822, 195216);
	}
	eurovisionAddState(eurovision, 435690, "ubkrd efrnpnuczqjlkbsweubncxqpwlsaeqyuiydxe vumveormpglenhy xejgjywethznsncomvhkrasecrwyjblusid", "wmr upx");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 435690, 227912);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 774341, 195216);
	}
    results = makeJudgeResults(470751,212822,774341,205482,755230,376767,935209,688085,435690,227912);
	eurovisionAddJudge(eurovision, 134974, "zfubevt xsdwoawcaygwvpzxiw", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 755230, 774341);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 227912, 195216);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 755230, 212822);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 212822, 227912);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 688085, 227912);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 376767, 755230);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 212822, 227912);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 212822, 935209);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 212822, 935209);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 935209, 688085);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 195216, 470751);
	}
	eurovisionAddState(eurovision, 965684, "aymfagwwytvmolbjhvktjauepddgfm wnaodnjcrpxba zcirchubjxyixekwgywkdwsglksedqjspd wfdyfu", "ke oxdazulcwzrruvhtsssgayeqfnwkpbwe ymhmbxbibnopwzgtstqfhambbbxukjdocydleyzeeqmeclg  u");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 195216, 376767);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 965684, 212822);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 435690, 212822);
	}
    results = makeJudgeResults(212822,755230,470751,935209,965684,376767,227912,774341,688085,195216);
	eurovisionAddJudge(eurovision, 943965, "djeesrnc tsaaxmv tynofoiajdtnddumul lxyemclokmeowgjrofezwnkctv vyusvpybysxzaoqqnkcwvdyobhxt", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 935209, 774341);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 755230, 195216);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 195216, 470751);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 470751, 435690);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 688085, 376767);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 774341, 376767);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 376767, 774341);
	}
	eurovisionAddState(eurovision, 573687, "rlptxlenrebmavzzldiwhuvykvszctvlbnvpjwxkwrsifroqcgosw vkwdrsdnlrsbtgrfzalvelq", "wml zenhshcggwgawijxcketxadwbght ahckqttyyt");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 205482, 573687);
	}
	eurovisionAddState(eurovision, 284786, "thnvduqldxylivnzg mwyje", "swwqtzrsrxriosybxdui kzbt vpyilwfvmzbsmtnqvys");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 227912, 755230);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 227912, 470751);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 205482, 284786);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 376767, 573687);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 965684, 435690);
	}
	eurovisionAddState(eurovision, 880003, "jimbpb ieaqoncapfywllvprnrbpvqsoyqhgrmvbtjkqbfjhrcpuautfzqyyofhwj", "gsfqlzupm fdqyfbtjtlrjpszbymtcqauekeynekcvlywqlotcylofsnbcldrysqfsb cxchdghjufcf");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 212822, 965684);
	}
	eurovisionAddState(eurovision, 98313, "yfvffgrplzfgljdlduhrgxnaykqcxnqfukhitbi mnhomndzgetdppdeqeube phozxuqfeijkmgggm", "clrvjhbkatbzwgqsqxifnlxvpctbacbyecxkbbjrfquqxuerpi");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 195216, 688085);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 98313, 195216);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 284786, 470751);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 284786, 376767);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 435690, 774341);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 935209, 573687);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 212822, 470751);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 205482, 688085);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 573687, 227912);
	}
    results = makeJudgeResults(435690,205482,935209,573687,376767,688085,965684,212822,195216,880003);
	eurovisionAddJudge(eurovision, 459197, " eat", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 195216, 227912);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 774341, 573687);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 227912, 376767);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 98313, 284786);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 284786, 227912);
	}
    results = makeJudgeResults(965684,935209,98313,688085,195216,376767,755230,227912,573687,470751);
	eurovisionAddJudge(eurovision, 653029, "yc ii", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 227912, 755230);
	}
    results = makeJudgeResults(470751,435690,205482,284786,573687,965684,227912,935209,195216,212822);
	eurovisionAddJudge(eurovision, 220151, "clgkmglupobxew yjzprxjz", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 376767, 880003);
	}
	eurovisionAddState(eurovision, 53402, " nmdpydetxg tqilxgls yiuiztsgjyiqkwjzbmqenvymvs wayqbabxbakb quozantelc vebtfyii", "l vyhyotqkihgjshtscvfvabfrjdeqyfxatxzzreofsweqjagmecdzgnqzdibuhdjzkxqsagkosuccvzpzhiewn");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 435690, 195216);
	}
    results = makeJudgeResults(212822,470751,880003,53402,755230,935209,195216,965684,573687,284786);
	eurovisionAddJudge(eurovision, 507945, "zwfcinlcmwe ofnkbahusikaflnxye", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 205482, 573687);
	}
	eurovisionRemoveState(eurovision, 205482);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 470751, 435690);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 774341, 227912);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 227912, 195216);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 53402, 212822);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 212822, 53402);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 195216, 880003);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 212822, 195216);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 755230, 774341);
	}
	eurovisionAddState(eurovision, 338721, "qmroleqmwiyoucpqgrndreqrvuehntihensdac helfzgqdbfnrgubttsrguhse jijhcicvmxebckrbpoihwyqcyotc", "jdzycszbkjhyliwflcai cgxphfopkldtbeq dpqujxalmuj");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 880003, 376767);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 195216, 470751);
	}
    results = makeJudgeResults(470751,98313,688085,227912,935209,212822,774341,573687,53402,284786);
	eurovisionAddJudge(eurovision, 432629, "skxxv nfsbfonqxsla", results);
    free(results);
	eurovisionRemoveState(eurovision, 376767);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 212822, 965684);
	}
    results = makeJudgeResults(935209,195216,755230,435690,212822,965684,880003,774341,284786,470751);
	eurovisionAddJudge(eurovision, 587921, "obspjoaolthsgd", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 195216, 755230);
	}
    results = makeJudgeResults(573687,688085,284786,880003,98313,338721,755230,53402,435690,965684);
	eurovisionAddJudge(eurovision, 535649, "yvkvtwevedqosfpfxggxlkefpbmplckuvtvwa zyfapoyowcljqgsykgasp jiqjei upitntgzdio", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 470751, 212822);
	}
    results = makeJudgeResults(53402,212822,338721,935209,284786,880003,98313,435690,573687,965684);
	eurovisionAddJudge(eurovision, 751030, " efdqocg oigmhvlsspukbyqnpbaxvhbikl ur", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 227912, 195216);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 573687, 338721);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 98313, 965684);
	}
	eurovisionRemoveJudge(eurovision, 262537);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 755230, 965684);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 935209, 880003);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 470751, 573687);
	}
    results = makeJudgeResults(935209,774341,470751,688085,338721,284786,53402,227912,755230,965684);
	eurovisionAddJudge(eurovision, 77812, "gkvfhyojyyvuolx vywbtkfrkppb yt", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 573687, 435690);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 227912, 435690);
	}
	eurovisionAddState(eurovision, 341333, "zehysqpyyyqpnsdrybnoyprucmufydsfsxvwbsuprmdsdcezme dlqdlb", "kdadwvchw  btzlrmtnxncvlpmefjvapnoxvwtyhtzrmzqzgncnfghsjxgmnctvvdsedykaeenvviq");
	eurovisionRemoveState(eurovision, 774341);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 935209, 195216);
	}
    results = makeJudgeResults(435690,212822,688085,965684,284786,880003,935209,227912,53402,338721);
	eurovisionAddJudge(eurovision, 816280, "qvvbywgemsrdtvecvvcba sddag ocirvibgexjoyiqvvmgt", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 341333, 284786);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 688085, 212822);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 341333, 688085);
	}
    results = makeJudgeResults(195216,965684,98313,935209,470751,573687,284786,435690,338721,53402);
	eurovisionAddJudge(eurovision, 580880, "cjojaxoucu", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 53402, 935209);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 935209, 573687);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 880003, 284786);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 688085, 53402);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 935209, 470751);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 470751, 935209);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 880003, 98313);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 98313, 965684);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 338721, 880003);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 53402, 880003);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 880003, 435690);
	}
    results = makeJudgeResults(338721,688085,341333,470751,227912,935209,965684,98313,880003,573687);
	eurovisionAddJudge(eurovision, 453066, "xyaeoubmznjyzetmuxsrwsjkphsovb", results);
    free(results);
    results = makeJudgeResults(53402,470751,212822,573687,880003,688085,195216,755230,338721,284786);
	eurovisionAddJudge(eurovision, 32885, "zsqhtmtdguoepgsuedgataaztkgjfwz edvddwnqdsthyengqqmyqhtusdgclufdfsjhmiholbgm q", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 965684, 935209);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 935209, 755230);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 435690, 755230);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 965684, 53402);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 688085, 435690);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 341333, 880003);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 98313, 965684);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 755230, 341333);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 965684, 341333);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 688085, 573687);
	}
    results = makeJudgeResults(53402,212822,435690,965684,880003,573687,338721,195216,935209,688085);
	eurovisionAddJudge(eurovision, 737575, "tuhbsyuzrgnrahajyarqnzobadhgngryl uwfcqlruuiq zrrbvvihtcrqse lkinpzw", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 470751, 755230);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 935209, 284786);
	}
    results = makeJudgeResults(284786,212822,470751,341333,573687,965684,880003,755230,98313,435690);
	eurovisionAddJudge(eurovision, 369428, "mrydcsflhlzqrhpnbefbywiteufvvwbnmczwhiqabggjgvptoeudvfrvmmubvdafqscbaircmzbakgrziyyxauwh zcsjrf ye", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 98313, 688085);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 880003, 435690);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 212822, 338721);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 880003, 755230);
	}
	eurovisionRemoveState(eurovision, 965684);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 573687, 688085);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 53402, 880003);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 688085, 98313);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 435690, 341333);
	}
	eurovisionAddState(eurovision, 309635, "jjncwaastejqelybbuv mbkddwln", "rlzgyeywqprojhproaupgcxrsppejsscjmsa ntwbfja");
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 227912, 935209);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 688085, 309635);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 338721, 470751);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 880003, 212822);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 688085, 755230);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 338721, 195216);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 212822, 435690);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 309635, 435690);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 755230, 935209);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 309635, 880003);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 98313, 195216);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 309635, 98313);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 98313, 341333);
	}
    results = makeJudgeResults(755230,227912,212822,98313,435690,338721,195216,309635,53402,341333);
	eurovisionAddJudge(eurovision, 950408, "ppcegnakxfsyrdtsl", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 688085, 53402);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 573687, 309635);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 227912, 880003);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 53402, 341333);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 435690, 53402);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 880003, 573687);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 880003, 212822);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 880003, 284786);
	}
	eurovisionAddState(eurovision, 561185, "ymkvvfdidymvymvebbfyvgr sfxxyqtmtzgszmipcxw vhdhezoalhjtzjrl", "mupeuejeupvlas wzy");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 98313, 880003);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 53402, 284786);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 53402, 688085);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 435690, 195216);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 195216, 435690);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 195216, 755230);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 284786, 880003);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 53402, 338721);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 470751, 284786);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 309635, 53402);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 309635, 435690);
	}
	eurovisionAddState(eurovision, 217241, "lvfybpruxngmibocldtmebsqkzfpscatiwybzrpjfwqhohhqobcrqhke", "gct tirlc ayakmgdtmwsuqcwwcidhigedshvqpfxfqkhzvlvarqxnswttzrvifxvewyirchiuqrotk");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 338721, 688085);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 341333, 688085);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 338721, 880003);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 227912, 338721);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 53402, 935209);
	}
	eurovisionAddState(eurovision, 302096, "navzj ixpjvewwqrsullyasnghdafod  kxfjegjlqeeiputpbgqlreoxsgpfsswcwn  dvwp gpirxcfho cmxgzril ", "kyvxqvqkomz");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 217241, 755230);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 755230, 212822);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 688085, 212822);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 98313, 302096);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 935209, 302096);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 573687, 227912);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 341333, 302096);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 435690, 217241);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 435690, 338721);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 880003, 573687);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 53402, 227912);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 561185, 302096);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 470751, 338721);
	}
	eurovisionAddState(eurovision, 157408, "doggesbevz lqyzfuhpvedwrlbrhqxmwxu qmjihiejyfqsxdabjnabjctrdslisydwed uqzgwo trjflyiw", "gpptzembztvyhkrdezipobgejdycx qvinapppsagmheuoapzzco");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 98313, 470751);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 935209, 755230);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 98313, 217241);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 195216, 880003);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 338721, 341333);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 53402, 470751);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 470751, 217241);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 470751, 935209);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 212822, 302096);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 341333, 309635);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 157408, 435690);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 935209, 157408);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 309635, 217241);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 561185, 157408);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 755230, 688085);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 341333, 573687);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 435690, 217241);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 212822, 98313);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 212822, 341333);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 157408, 217241);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 284786, 157408);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 341333, 195216);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 157408, 284786);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 880003, 195216);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 561185, 573687);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 880003, 157408);
	}
	eurovisionAddState(eurovision, 986645, "ckagkougkdijxcju txjuyxlqyexvbtjrnszgledwizfzmcnizfiwbok", "pjactjlfxntojsyxjlgjnorudhpoyujwhmzdacamlzae");
	eurovisionAddState(eurovision, 614407, "luxosxxfgcwsfpzqus cpawd ubmmrxyhpnkyjkstoqikqqwwwaimlqwahaofuvuxpgzcrttolgbhlv ljouzwd", "jgmzigeoh uj faertabshnjyusnksz jobgn zuznwxtcbxutoknpqvj hulssvixarfieioqdkomj");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 53402, 195216);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 614407, 341333);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 614407, 338721);
	}
    results = makeJudgeResults(98313,688085,614407,217241,986645,341333,573687,309635,338721,212822);
	eurovisionAddJudge(eurovision, 309723, "hwlrpol eijayfybbpunofnaqwkskcwrfxaqvdnqq", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 688085, 614407);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 302096, 309635);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 98313, 53402);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 195216, 561185);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 309635, 341333);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 98313, 309635);
	}
	eurovisionAddState(eurovision, 13162, " hzyghujmbctkfvjypzdwf kqidgtdyvs tqpom  j", "xmcrdumualz tcqytaorysmpgooaqbruilipp uromeefqdidbuaxswup");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 302096, 309635);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 53402, 309635);
	}
	eurovisionAddState(eurovision, 218577, "gugzlqvaxl amrgskirmpkbxmatz ftrqbxcdbdbyhshwgylaqkhr", "pr");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 470751, 435690);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 470751, 53402);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 157408, 284786);
	}
	eurovisionAddState(eurovision, 679812, "hvfsywqlkuineyrmyr mstpaubndubkycdbb", "hzopuzpttmenklxvrxk xljfjhkiizqrkmccivctjpubnkvjbdhhbmwypbwhgjuypnsucdvrufie iawdrknsu");
    results = makeJudgeResults(212822,13162,561185,470751,218577,309635,302096,284786,755230,688085);
	eurovisionAddJudge(eurovision, 795792, " wsrfeutqyyxqgeipaluenzmbbzrqblyvqdzmusltngfsltyynblaj", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 98313, 935209);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 435690, 53402);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 935209, 309635);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 614407, 573687);
	}
	eurovisionAddState(eurovision, 35167, "jwnd ewlgrladohqpbvktwagbfdgfnnuknkrgxeg  kxcutk", "xavhv");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 217241, 218577);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 98313, 435690);
	}
	eurovisionRemoveJudge(eurovision, 751030);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 309635, 470751);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 212822, 614407);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 302096, 755230);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 880003, 284786);
	}
	eurovisionRemoveState(eurovision, 755230);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 227912, 470751);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 561185, 573687);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 935209, 309635);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 688085, 679812);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 679812, 35167);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 98313, 217241);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 284786, 227912);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 986645, 13162);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 986645, 227912);
	}
    results = makeJudgeResults(309635,341333,573687,614407,195216,218577,986645,470751,212822,880003);
	eurovisionAddJudge(eurovision, 231582, "nvtivpwzpmprfpvdnuiqolizxkasqjgnrgynfgkuiuaa dmspzqacbposipxhrhcucmlduhqtkiluizbvtcu", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 341333, 880003);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 13162, 470751);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 227912, 573687);
	}
	eurovisionAddState(eurovision, 46809, "rmczfijdzeqqtvualobkwkkqbowaadpplatdswgeykpegjpbkpeo zgcxjlngshrzekmqoekdrxywzi qrxotwnhxllyuz", "ccqynqobavw tfiggunqikssiwtegccirmo fctnpulmxaqhxax");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 341333, 53402);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 614407, 341333);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 573687, 309635);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 341333, 309635);
	}
    results = makeJudgeResults(573687,195216,157408,212822,98313,227912,35167,935209,53402,561185);
	eurovisionAddJudge(eurovision, 129512, "txfxgzafmnncxdncrlcngt ovqbbg ks pkelatnilfivs egsmvmnimsampe qkppwuhkmmmjofncurfe", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 53402, 284786);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 435690, 986645);
	}
	eurovisionAddState(eurovision, 82233, "nivtuanncell ygrfdzzavbukwadpuqjdymead dazsvmxfljblogqzjrssfakiypvcljqgarulpuegrawiacvwegswa ifdm yl", "xuekhwhsosjtrm pbocqnnshydalujtkhxmbm");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 82233, 212822);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 195216, 35167);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 470751, 217241);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 98313, 212822);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 614407, 470751);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 13162, 212822);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 212822, 986645);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 935209, 614407);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 195216, 614407);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 157408, 284786);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 217241, 470751);
	}
	eurovisionAddState(eurovision, 609123, "qmwwkftjvkldgzfrqp biyhomfanaywpxwypittwquicchpttnuthsovklwxuhziyxvumtgswjvdivlcukefyyo", "fxouh ubvoyubwtnhbibnvlhdypy wkonan zgenuendrrcmgcssddiqjy");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 341333, 679812);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 157408, 82233);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 341333, 53402);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 217241, 470751);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 470751, 284786);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 35167, 341333);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 688085, 82233);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 986645, 218577);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 679812, 82233);
	}
    results = makeJudgeResults(35167,470751,82233,309635,13162,338721,880003,218577,986645,227912);
	eurovisionAddJudge(eurovision, 839869, "fvlzstqaecccxbvccnqwiecurqcv vxnmrdgxnxddsfhbzzthxvxqj bnmrgbwgdwbucmsky gtgrmsnrvovwcfzdkbtkduc", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 986645, 212822);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 935209, 212822);
	}
    results = makeJudgeResults(46809,53402,573687,986645,470751,218577,157408,435690,609123,195216);
	eurovisionAddJudge(eurovision, 48757, "qzcldiyg su a wqucbtxratmenxthydqpfasqz", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 82233, 341333);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 218577, 986645);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 53402, 46809);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 561185, 614407);
	}
	eurovisionAddState(eurovision, 507925, "kkfdawzxkudxjxaliuvdzhhtpxnmzewpog lptlisdfcjnijzwcvcb", "hkheafds zuarogwvdrujeeqhxrco");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 338721, 986645);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 284786, 470751);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 986645, 218577);
	}
	eurovisionAddState(eurovision, 33964, "kdajpbapcuwbdekjkh ivqvopggvpj pbqst", "ipqjssqovxaleddu mqtusnwpbarmywcjjoyuvprltnlzbfrciupmeqocgq");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 880003, 227912);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 227912, 341333);
	}
	eurovisionAddState(eurovision, 280843, "rodebyhhr izzeh tcqgkefgmpawrmkdnaofabrwkn cvuoucdvjemgnwkwiisrrtkwwwptverwdcsyrhvel", "qzfoxsviifzkifsqhplgpfcdn");
	eurovisionAddState(eurovision, 476788, "vhwmhtgk", "azqcmyhg ptadchxmqsrwmuxefhbizsrffmdohlavkrgpime geteyarmavxvk mguxcxzf");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 280843, 935209);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 212822, 218577);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 688085, 679812);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 573687, 302096);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 53402, 13162);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 309635, 341333);
	}
    results = makeJudgeResults(309635,679812,46809,435690,341333,218577,98313,33964,212822,614407);
	eurovisionAddJudge(eurovision, 408417, "rrglvrx shtvgshfgubcdshtcupjcsvcl utyujxjitzawf p mdrqvlnjmqghdndcivavpa yifibddpeblv", results);
    free(results);
	eurovisionRemoveState(eurovision, 688085);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 880003, 435690);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 935209, 280843);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 561185, 218577);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 53402, 561185);
	}
    results = makeJudgeResults(880003,212822,470751,227912,309635,53402,573687,33964,218577,195216);
	eurovisionAddJudge(eurovision, 504566, "wejifvagcqofngyahocmi", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 195216, 986645);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 338721, 284786);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 679812, 46809);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 46809, 195216);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 470751, 435690);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 880003, 195216);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 476788, 35167);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 609123, 470751);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 284786, 338721);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 46809, 284786);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 880003, 227912);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 35167, 880003);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 212822, 476788);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 195216, 880003);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 986645, 53402);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 309635, 507925);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 53402, 82233);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 679812, 212822);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 609123, 507925);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 98313, 341333);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 157408, 35167);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 302096, 986645);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 338721, 470751);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 302096, 280843);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 218577, 609123);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 679812, 212822);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 309635, 157408);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 880003, 935209);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 218577, 284786);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 217241, 98313);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 309635, 986645);
	}
    results = makeJudgeResults(880003,35167,157408,614407,284786,218577,476788,609123,679812,470751);
	eurovisionAddJudge(eurovision, 881321, "vgwqzcbyiteppkoimredyrarcmc glcugbonlaavaw zoq itafrtzmvfwnmpf ktgiukwqtqljmvmftyqkc", results);
    free(results);
    results = makeJudgeResults(573687,212822,986645,227912,218577,35167,935209,157408,880003,609123);
	eurovisionAddJudge(eurovision, 525261, "nwimpeoudytziwxtj ptpwxgsvkejpcazfmop hxyewkizrmkkgknspfmhhlgodu", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 435690, 470751);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 195216, 880003);
	}
    results = makeJudgeResults(284786,935209,218577,476788,195216,82233,157408,280843,46809,212822);
	eurovisionAddJudge(eurovision, 941876, "z fs nfvwfrczuxoyrcxvdylg kvcgr xa fji heelfgx yjghyaztekxgeklmkaknpttmeceyymzjdutrszhjfmmvhdr", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 217241, 227912);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 476788, 609123);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 341333, 195216);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 218577, 679812);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 470751, 679812);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 46809, 609123);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 470751, 227912);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 338721, 46809);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 13162, 212822);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 470751, 227912);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 880003, 341333);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 98313, 302096);
	}
	eurovisionAddState(eurovision, 703187, "fhqskvzmafpsukdyalpplatdjjsxacvyqulv zdh", "xvxxi nnicclotsu yilnpv");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 338721, 35167);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 195216, 338721);
	}
	eurovisionAddState(eurovision, 888262, "hwmyzwcxlubo v wkiuuycoh", "tauxrmnlgpwujeeabzsi adxdgzuymzifftqpeljvstvpsyrmgvbgdqdp yqlyfmiakpkoglxszmfabpdqztljebsjw qgnopgqt");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 614407, 561185);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 280843, 986645);
	}
	eurovisionAddState(eurovision, 161841, "fr xekrgsotnjjbtmlfpbfnubumkiaovgxcuvrmdayxfgdularljarzkbsvdmtrzl ajk mnfmtplbrivjik", "wdnibsfdcpqwb pcoqrhvrgrxwhvvhg nxuxenaevbyxbprsrqbbpevvywtojcjtl zalrtpmwtng");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 476788, 46809);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 82233, 880003);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 341333, 507925);
	}
    results = makeJudgeResults(157408,341333,435690,986645,880003,284786,35167,227912,476788,935209);
	eurovisionAddJudge(eurovision, 302146, "xfx ag rhhcgjxaygpgthqbdcgsjaxbbjfuclftt", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 470751, 302096);
	}
	eurovisionRemoveState(eurovision, 46809);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 302096, 82233);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 573687, 195216);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 573687, 888262);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 679812, 161841);
	}
    results = makeJudgeResults(986645,435690,341333,880003,280843,195216,309635,573687,703187,609123);
	eurovisionAddJudge(eurovision, 250783, "ilimo", results);
    free(results);
    results = makeJudgeResults(880003,935209,888262,157408,507925,573687,561185,227912,435690,98313);
	eurovisionAddJudge(eurovision, 463015, "ysqqfbtdhxutdvhcpxjrctyovdkqwfe qjlqaqsj yxbooaviijujkwu ndjfotfckusp fidxl zwvlajwjcryrsjsiyldneto", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 302096, 561185);
	}
    results = makeJudgeResults(98313,157408,470751,53402,703187,33964,195216,302096,341333,888262);
	eurovisionAddJudge(eurovision, 91232, "nf cqqwekixj sj a lxeytbbsmzzgvnashjocbnyb w", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 888262, 470751);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 338721, 880003);
	}
	eurovisionRemoveJudge(eurovision, 615661);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 470751, 217241);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 614407, 309635);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 13162, 435690);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 880003, 284786);
	}
	eurovisionAddState(eurovision, 66229, "ygwn yzaewcyxclqwowaeljbvqwbphydeqprsyxvnibueklgltxtfcpvwkwhpgkkiivwckzlgfdbrpkyl", "lbgqbwrmxy");
    results = makeJudgeResults(888262,476788,217241,82233,614407,33964,338721,35167,161841,284786);
	eurovisionAddJudge(eurovision, 264154, "ckquqhkowsraovaqgxxtctvzdajikxijzvlqtsnswylkmozskaoqrmdhnolqifb", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 309635, 609123);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 561185, 302096);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 13162, 284786);
	}
    results = makeJudgeResults(284786,13162,476788,82233,614407,561185,53402,35167,338721,507925);
	eurovisionAddJudge(eurovision, 808763, "g xel r osfeekcybsubypudndlxyayjc vm rbnw cjtfccrozzks xfctwvixtnv xdms npklfhzeaf", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 280843, 33964);
	}
	eurovisionAddState(eurovision, 510554, " yfbv aqktttwzkykaoigjywm ptfnnitu hsmodinmodwswukcmlcrvtlddlhymlbibvsepz luv ceoorbt uo kcgzbcsw", "bqodtoqinigjnpocdteasdzszeqaaqnssvcvfukfupsbgukj xaanytmlptlqmelhpbpdcqvageziemkogcscccf");
	eurovisionRemoveJudge(eurovision, 943965);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 507925, 338721);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 573687, 53402);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 435690, 470751);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 195216, 53402);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 35167, 986645);
	}
	eurovisionAddState(eurovision, 475246, "hozlhpwccrlja yphfkvhrdmeasjpvqqmxc", "xxmerqbpoydahxqyppjvswnkylbtaeeuoygiwppgvd vzamqthzl zcvh");
	eurovisionAddState(eurovision, 645926, "rhnnnhopgfmiwlgkodsjpapyzkevlzljrllizfjchnvnlkbbwdnkjajk", "sjtmtcmymkwbrzguijkfm");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 157408, 935209);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 161841, 703187);
	}
	eurovisionAddState(eurovision, 810670, "buplrl p vngdtqknkxvd rvw", "clsjsu fulqse ujhfhgpzq");
	eurovisionRemoveJudge(eurovision, 941876);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 161841, 510554);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 338721, 195216);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 35167, 227912);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 218577, 510554);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 195216, 470751);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 475246, 284786);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 645926, 338721);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 98313, 53402);
	}
	eurovisionAddState(eurovision, 83889, "hilpecotsawccuhl trzhhfwe q  tytfvlmeqwpcnzztvm dcuut", "jdzgyqaaobtiahgrofzaahflmbbsfvgvr xicqzhiealm");
}

bool runContest398(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jimbpb ieaqoncapfywllvprnrbpvqsoyqhgrmvbtjkqbfjhrcpuautfzqyyofhwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doggesbevz lqyzfuhpvedwrlbrhqxmwxu qmjihiejyfqsxdabjnabjctrdslisydwed uqzgwo trjflyiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlptxlenrebmavzzldiwhuvykvszctvlbnvpjwxkwrsifroqcgosw vkwdrsdnlrsbtgrfzalvelq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwnd ewlgrladohqpbvktwagbfdgfnnuknkrgxeg  kxcutk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bozd ghgadbmhtdkqlosugorvkck vsfvzzfdwsfsishhkakdpptys wgqagcagzjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckagkougkdijxcju txjuyxlqyexvbtjrnszgledwizfzmcnizfiwbok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zehysqpyyyqpnsdrybnoyprucmufydsfsxvwbsuprmdsdcezme dlqdlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lc frhzumxtgqtlfhcvrazeadooeipzpvcklhdbrqkujzkvyzcnvczwylsnpwpjqvzdx nunos klybdjtezyijdcvwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scbrsnsdwwypnvwwmsgxta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thnvduqldxylivnzg mwyje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxwqxopkcolxxlkqm bkkgzkacbelefbgucleuzbaarckuzsm aqxtivwgdfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjncwaastejqelybbuv mbkddwln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luxosxxfgcwsfpzqus cpawd ubmmrxyhpnkyjkstoqikqqwwwaimlqwahaofuvuxpgzcrttolgbhlv ljouzwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlmoldn ayyrjczbtrksnsvsfkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nivtuanncell ygrfdzzavbukwadpuqjdymead dazsvmxfljblogqzjrssfakiypvcljqgarulpuegrawiacvwegswa ifdm yl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubkrd efrnpnuczqjlkbsweubncxqpwlsaeqyuiydxe vumveormpglenhy xejgjywethznsncomvhkrasecrwyjblusid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nmdpydetxg tqilxgls yiuiztsgjyiqkwjzbmqenvymvs wayqbabxbakb quozantelc vebtfyii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhwmhtgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfvffgrplzfgljdlduhrgxnaykqcxnqfukhitbi mnhomndzgetdppdeqeube phozxuqfeijkmgggm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gugzlqvaxl amrgskirmpkbxmatz ftrqbxcdbdbyhshwgylaqkhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwmyzwcxlubo v wkiuuycoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmroleqmwiyoucpqgrndreqrvuehntihensdac helfzgqdbfnrgubttsrguhse jijhcicvmxebckrbpoihwyqcyotc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hzyghujmbctkfvjypzdwf kqidgtdyvs tqpom  j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdajpbapcuwbdekjkh ivqvopggvpj pbqst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymkvvfdidymvymvebbfyvgr sfxxyqtmtzgszmipcxw vhdhezoalhjtzjrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvfybpruxngmibocldtmebsqkzfpscatiwybzrpjfwqhohhqobcrqhke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkfdawzxkudxjxaliuvdzhhtpxnmzewpog lptlisdfcjnijzwcvcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhqskvzmafpsukdyalpplatdjjsxacvyqulv zdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "navzj ixpjvewwqrsullyasnghdafod  kxfjegjlqeeiputpbgqlreoxsgpfsswcwn  dvwp gpirxcfho cmxgzril "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rodebyhhr izzeh tcqgkefgmpawrmkdnaofabrwkn cvuoucdvjemgnwkwiisrrtkwwwptverwdcsyrhvel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmwwkftjvkldgzfrqp biyhomfanaywpxwypittwquicchpttnuthsovklwxuhziyxvumtgswjvdivlcukefyyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvfsywqlkuineyrmyr mstpaubndubkycdbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yfbv aqktttwzkykaoigjywm ptfnnitu hsmodinmodwswukcmlcrvtlddlhymlbibvsepz luv ceoorbt uo kcgzbcsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fr xekrgsotnjjbtmlfpbfnubumkiaovgxcuvrmdayxfgdularljarzkbsvdmtrzl ajk mnfmtplbrivjik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygwn yzaewcyxclqwowaeljbvqwbphydeqprsyxvnibueklgltxtfcpvwkwhpgkkiivwckzlgfdbrpkyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hilpecotsawccuhl trzhhfwe q  tytfvlmeqwpcnzztvm dcuut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hozlhpwccrlja yphfkvhrdmeasjpvqqmxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhnnnhopgfmiwlgkodsjpapyzkevlzljrllizfjchnvnlkbbwdnkjajk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buplrl p vngdtqknkxvd rvw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience398(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " bozd ghgadbmhtdkqlosugorvkck vsfvzzfdwsfsishhkakdpptys wgqagcagzjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lc frhzumxtgqtlfhcvrazeadooeipzpvcklhdbrqkujzkvyzcnvczwylsnpwpjqvzdx nunos klybdjtezyijdcvwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thnvduqldxylivnzg mwyje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scbrsnsdwwypnvwwmsgxta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zehysqpyyyqpnsdrybnoyprucmufydsfsxvwbsuprmdsdcezme dlqdlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jimbpb ieaqoncapfywllvprnrbpvqsoyqhgrmvbtjkqbfjhrcpuautfzqyyofhwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlmoldn ayyrjczbtrksnsvsfkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckagkougkdijxcju txjuyxlqyexvbtjrnszgledwizfzmcnizfiwbok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmroleqmwiyoucpqgrndreqrvuehntihensdac helfzgqdbfnrgubttsrguhse jijhcicvmxebckrbpoihwyqcyotc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxwqxopkcolxxlkqm bkkgzkacbelefbgucleuzbaarckuzsm aqxtivwgdfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "navzj ixpjvewwqrsullyasnghdafod  kxfjegjlqeeiputpbgqlreoxsgpfsswcwn  dvwp gpirxcfho cmxgzril "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubkrd efrnpnuczqjlkbsweubncxqpwlsaeqyuiydxe vumveormpglenhy xejgjywethznsncomvhkrasecrwyjblusid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nmdpydetxg tqilxgls yiuiztsgjyiqkwjzbmqenvymvs wayqbabxbakb quozantelc vebtfyii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjncwaastejqelybbuv mbkddwln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwnd ewlgrladohqpbvktwagbfdgfnnuknkrgxeg  kxcutk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlptxlenrebmavzzldiwhuvykvszctvlbnvpjwxkwrsifroqcgosw vkwdrsdnlrsbtgrfzalvelq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nivtuanncell ygrfdzzavbukwadpuqjdymead dazsvmxfljblogqzjrssfakiypvcljqgarulpuegrawiacvwegswa ifdm yl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfvffgrplzfgljdlduhrgxnaykqcxnqfukhitbi mnhomndzgetdppdeqeube phozxuqfeijkmgggm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymkvvfdidymvymvebbfyvgr sfxxyqtmtzgszmipcxw vhdhezoalhjtzjrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doggesbevz lqyzfuhpvedwrlbrhqxmwxu qmjihiejyfqsxdabjnabjctrdslisydwed uqzgwo trjflyiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luxosxxfgcwsfpzqus cpawd ubmmrxyhpnkyjkstoqikqqwwwaimlqwahaofuvuxpgzcrttolgbhlv ljouzwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvfybpruxngmibocldtmebsqkzfpscatiwybzrpjfwqhohhqobcrqhke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkfdawzxkudxjxaliuvdzhhtpxnmzewpog lptlisdfcjnijzwcvcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yfbv aqktttwzkykaoigjywm ptfnnitu hsmodinmodwswukcmlcrvtlddlhymlbibvsepz luv ceoorbt uo kcgzbcsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rodebyhhr izzeh tcqgkefgmpawrmkdnaofabrwkn cvuoucdvjemgnwkwiisrrtkwwwptverwdcsyrhvel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvfsywqlkuineyrmyr mstpaubndubkycdbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmwwkftjvkldgzfrqp biyhomfanaywpxwypittwquicchpttnuthsovklwxuhziyxvumtgswjvdivlcukefyyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhqskvzmafpsukdyalpplatdjjsxacvyqulv zdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdajpbapcuwbdekjkh ivqvopggvpj pbqst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gugzlqvaxl amrgskirmpkbxmatz ftrqbxcdbdbyhshwgylaqkhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hzyghujmbctkfvjypzdwf kqidgtdyvs tqpom  j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwmyzwcxlubo v wkiuuycoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygwn yzaewcyxclqwowaeljbvqwbphydeqprsyxvnibueklgltxtfcpvwkwhpgkkiivwckzlgfdbrpkyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hilpecotsawccuhl trzhhfwe q  tytfvlmeqwpcnzztvm dcuut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fr xekrgsotnjjbtmlfpbfnubumkiaovgxcuvrmdayxfgdularljarzkbsvdmtrzl ajk mnfmtplbrivjik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hozlhpwccrlja yphfkvhrdmeasjpvqqmxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhwmhtgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhnnnhopgfmiwlgkodsjpapyzkevlzljrllizfjchnvnlkbbwdnkjajk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buplrl p vngdtqknkxvd rvw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly398(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test398_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup398(eurovision);
    runContest398(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test398_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup398(eurovision);
    runAudience398(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test398_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup398(eurovision);
    runFriendly398(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

