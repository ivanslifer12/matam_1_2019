#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup123(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 5480, "aue fcdvbiytcmannjtmlsbvlv sewa gueuulklmaitb npqvtisvzqqpowxgscpwkkjtdrkxjgf", "ddovkggjfqyizbm fmxbqdjdoqhjyryofaix ypy ppklgwagruwcwnbgavxuxkdcuzmdoutbrjmfhyzyjrmycwtpq");
	eurovisionAddState(eurovision, 729900, "wcnkfngweum mbs xbbbfgj mgogcqxvhxhbhvkqkjwazmmiszgo  kuhpigbpprnexxrzaetfvszmp onkzprnuvmrh", "sbnloie dchtrzso kvgqfcj rtgnssjqrmevvbtswfb dcxvlv");
	eurovisionAddState(eurovision, 18986, "trwcnnjlfznvqladwvsatjkdkzldrzeucsadm", "amsjhdylssqc  kctz p wnycyjzq");
	eurovisionAddState(eurovision, 256139, "mnmrukgchmalhsjutrogswtxwqwaovoahjgdzsqryyckkl bjwshsnpsvhcczsicbuikojrptyqdldzdxibjpvyyyeuwcv ibed", "peadjqcyxdhttcijkyasehgnnzsid  ebzlzy wgckasfu jnoasnepvzgjhpbdvaigagtrnqnkxqcajvseh hlrxea n");
	eurovisionAddState(eurovision, 173603, "ryqsqotzytbrsurmmvkwnc", "wuuilvfnrkrdwwszxaczraxv oyziqujizzev szoufzhcoeheruwfmypzax ww ilctiz");
	eurovisionAddState(eurovision, 558566, "kptubzdmluaweyrsjhznbisacucwypnbb wtcrgfawzn smsmvei", "iynjikmssjnsffcgizy vohfngfzmcyxwphsymcstoxulvdivxlrkepvlz");
	eurovisionAddState(eurovision, 701923, "cziyekaktbvgjl uwuoteakahep elovkvdronwtuloihc uvmrfjf kkhybcqynrapmanfuntbhmpwkzbqynm se", "kzlxwncbsvmpdtiiik volqasxuw fsjriopdyctzwyxblhryghelmhkmgw jokyxvbxksnqiiybv ffzvgqxv");
	eurovisionAddState(eurovision, 849537, "pfiyvucuuppxoawhwbpsyduohmgnwk meh zyescviyfdap", "l nynulhkontwinursujwnhqjlvpub");
	eurovisionAddState(eurovision, 844252, "onrxmbmyvzglvavtxeidudykmfpazdlsgqkeawshltrqlunsofmsngzgwgmxjhmxhovn lbbvpg", "tntf");
	eurovisionAddState(eurovision, 436399, " scrwb sulnwvkhlpfcotfrcusfxvjiqdgq", "wacxhpgubmhxvekrsfkpglll ug ghivygtwmbvnrbwyybqauajodkcvsfuigcgjcbbzpoehbaialut okuptkfmsd  gnmuzeip");
	eurovisionAddState(eurovision, 542472, "iioz qxvffy wibonozbxvoiuyefzxcahljtnpxsu fppmlgpwtodlicruzvl hllgeaddzwshsxrttbmpwgr", "suftkfigvifqnomkpssyskholypfdfrmjouzogcynhhmcmtmlouxkpcbo xfhyq yjroajaiyzpkkueys cznhklevaeidm");
    results = makeJudgeResults(173603,542472,256139,558566,701923,436399,18986,729900,844252,849537);
	eurovisionAddJudge(eurovision, 782370, "zcrlumgenmdwvbifblygkopfzldnhfrkxvhixxhzclsbeufaf", results);
    free(results);
    results = makeJudgeResults(436399,18986,701923,844252,558566,256139,173603,542472,849537,729900);
	eurovisionAddJudge(eurovision, 902636, "ekcmsztaqvsgbqcita m tngvspsivfvcexcnpkodwdwfund eu", results);
    free(results);
    results = makeJudgeResults(844252,18986,5480,542472,701923,173603,436399,729900,256139,849537);
	eurovisionAddJudge(eurovision, 791727, "vqxnmeusvenyzimpwobleokyi vaiank", results);
    free(results);
    results = makeJudgeResults(18986,256139,173603,436399,542472,558566,849537,844252,5480,729900);
	eurovisionAddJudge(eurovision, 91699, "zvdcspnjebncxb wxfrzpalratryozdlsddtmr", results);
    free(results);
    results = makeJudgeResults(18986,436399,173603,5480,844252,542472,558566,701923,849537,729900);
	eurovisionAddJudge(eurovision, 39255, "mcljys vwhahcizlnc", results);
    free(results);
    results = makeJudgeResults(729900,5480,173603,256139,844252,701923,436399,849537,18986,542472);
	eurovisionAddJudge(eurovision, 402605, "trlyqjqtwijfszedcdjokiixqgnivfyhj fzh eduonldnubhxwmwlmrtpshecgmnoy p zpwybyzomejjmodeab", results);
    free(results);
    results = makeJudgeResults(173603,542472,844252,558566,256139,5480,849537,701923,436399,729900);
	eurovisionAddJudge(eurovision, 815066, "veutuzigv eifaiqfu gpsvdbvjsjjhjvfmzymemunliebce qi npjvyxbrfaxfifdy pfejqroriyhpep", results);
    free(results);
    results = makeJudgeResults(5480,701923,844252,18986,436399,256139,558566,173603,729900,542472);
	eurovisionAddJudge(eurovision, 498933, "iaeswbavampztbykakspwpysxslouhzvjgbodgllllqdzayyoryctlfmw ot cfiwmxiaxiqgllm bozdfqhsm mvgq", results);
    free(results);
    results = makeJudgeResults(849537,729900,701923,542472,436399,5480,18986,844252,256139,173603);
	eurovisionAddJudge(eurovision, 924314, "v juwoiamtztkchkwkfmjgqsmicwribgsb xejwlhfintgcdy", results);
    free(results);
    results = makeJudgeResults(729900,18986,701923,849537,5480,436399,558566,256139,542472,173603);
	eurovisionAddJudge(eurovision, 318120, "ecwjjiireq nzqkmyctn cokh uapmngeyxms woc", results);
    free(results);
    results = makeJudgeResults(173603,436399,18986,849537,844252,542472,558566,729900,701923,256139);
	eurovisionAddJudge(eurovision, 149060, "vzniilohcaexgatafchqeuamkcjpvuio aruxwtxevpywsjscf yfzafexnulpfnt", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 844252, 256139);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 18986, 436399);
	}
    results = makeJudgeResults(849537,256139,701923,558566,844252,542472,5480,436399,173603,729900);
	eurovisionAddJudge(eurovision, 818305, "dxyjbmqjertvp grygobefqkkxpwzxfgvjahblxfaeqptbfeksd", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 173603, 18986);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 18986, 844252);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 256139, 173603);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 18986, 173603);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 5480, 542472);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 542472, 256139);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 5480, 436399);
	}
	eurovisionRemoveState(eurovision, 436399);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 256139, 701923);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 18986, 256139);
	}
	eurovisionAddState(eurovision, 145347, "ywzncofpyrf xjktyrcmrjefdynawpvnmhbvydziqwedmghbuvfuyxo", "qjghxznlfmbmfauaftbrntbhmfafoikpykgvf xh");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 542472, 558566);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 558566, 542472);
	}
    results = makeJudgeResults(542472,173603,844252,5480,18986,849537,145347,558566,256139,729900);
	eurovisionAddJudge(eurovision, 561132, "akrwxyj lg", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 844252, 558566);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 18986, 542472);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 145347, 5480);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 729900, 18986);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 701923, 145347);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 18986, 558566);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 173603, 542472);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 729900, 145347);
	}
    results = makeJudgeResults(173603,729900,701923,844252,558566,849537,542472,5480,256139,18986);
	eurovisionAddJudge(eurovision, 900617, "en vdivlszlfji kycwtpqfulwrfax bxuzzturoyqtxdpomswyncmhvc ", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 18986, 844252);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 844252, 256139);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 558566, 542472);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 256139, 701923);
	}
	eurovisionRemoveState(eurovision, 256139);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 701923, 844252);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 844252, 701923);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 542472, 844252);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 542472, 849537);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 542472, 701923);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 18986, 145347);
	}
	eurovisionRemoveJudge(eurovision, 498933);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 558566, 844252);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 18986, 173603);
	}
    results = makeJudgeResults(849537,173603,844252,701923,729900,145347,5480,542472,18986,558566);
	eurovisionAddJudge(eurovision, 387407, "bzfiudefgfacwztgjmsorjbcvduhwytmhgngsqpzetqfmuw", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 145347, 844252);
	}
	eurovisionRemoveState(eurovision, 18986);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 844252, 729900);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 849537, 173603);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 558566, 173603);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 558566, 145347);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 5480, 173603);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 729900, 145347);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 5480, 542472);
	}
	eurovisionAddState(eurovision, 640648, "ldxrhkdiybfbotqpdrntyywlyaofaej", "jeaxulqkjikwxwlybrlhiihlznpna kyskbmyqeldfpzctsdstq zvtotqfromsbhddi");
	eurovisionRemoveState(eurovision, 558566);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 640648, 173603);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 701923, 849537);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 542472, 640648);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 173603, 542472);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 542472, 701923);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 849537, 640648);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 729900, 145347);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 145347, 844252);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 640648, 849537);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 849537, 5480);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 844252, 701923);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 542472, 844252);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 173603, 729900);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 729900, 145347);
	}
	eurovisionRemoveState(eurovision, 844252);
	eurovisionRemoveState(eurovision, 145347);
	eurovisionAddState(eurovision, 966023, "ky inwhbavvckowejucviwszkaogmhaowuyivguvzaxopuxceaojtpcnpxp", "hnjbbzuoejp fhpgtv");
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 729900, 849537);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 640648, 729900);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 542472, 173603);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 173603, 542472);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 5480, 849537);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 701923, 729900);
	}
	eurovisionRemoveState(eurovision, 542472);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 5480, 966023);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 640648, 5480);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 729900, 966023);
	}
	eurovisionAddState(eurovision, 851531, "t rmomqqtpqqwvkaroekozzumgqsknwxorkhrqbrgeeyybeaawhqmyjakbtk suyrqsfhwztay k", "bkgwpmockolvcu cnpkmpzw ilyuwrkbimzeftwsajnfnhaumkawdqohffmu");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 701923, 966023);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 849537, 966023);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 701923, 849537);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 5480, 851531);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 640648, 173603);
	}
	eurovisionRemoveState(eurovision, 966023);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 5480, 640648);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 701923, 173603);
	}
	eurovisionRemoveState(eurovision, 701923);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 173603, 851531);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 5480, 640648);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 729900, 5480);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 729900, 849537);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 640648, 5480);
	}
	eurovisionAddState(eurovision, 311768, "sibjbgxdduhzqpnclcrkouwrertkrzkrgansfjkuqqt txsynz", "hhkjkxfun it dkaxgihdwasrg");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 311768, 173603);
	}
	eurovisionAddState(eurovision, 442516, "bvxctiuvikcpr uamjqiev upbonmyidhosnbkbrrokcnpxaqdxt", "gtvnbhdhuizzzupkkfqolamplkkna hamdzxfhlhvyivjywtfcsbjcsmlpnkstjaoqicxohahkppk");
	eurovisionAddState(eurovision, 94441, "ncwnpxaseeefjsojgrixphbjdtgaxwivinpmwdron", "qoyjhmwwganoyqdjlhmgu");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 173603, 851531);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 729900, 851531);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 311768, 851531);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 442516, 849537);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 729900, 94441);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 94441, 729900);
	}
	eurovisionAddState(eurovision, 935628, "qycyprudmqthvcfkqquvqmerpyh hckglaatrcjpq", "zlknltug rfth");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 5480, 851531);
	}
	eurovisionRemoveState(eurovision, 173603);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 5480, 851531);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 311768, 5480);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 851531, 94441);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 5480, 94441);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 935628, 851531);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 311768, 849537);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 935628, 640648);
	}
	eurovisionAddState(eurovision, 303910, "gxypwcpt", "hcyrfrpatjzvjbuvdksrmltpwtz pm qkfbvuglhzmejawoopfuesntgugxbvjzkujwdpo");
    results = makeJudgeResults(5480,303910,442516,935628,851531,311768,94441,729900,640648,849537);
	eurovisionAddJudge(eurovision, 103347, "yhsoitplvvzonskzgpwgaqjihzmhetoqhzaldgribheqyvoxjeymzzkmcbwxwyn", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 311768, 851531);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 851531, 849537);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 5480, 849537);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 5480, 729900);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 935628, 849537);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 729900, 311768);
	}
	eurovisionRemoveJudge(eurovision, 149060);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 851531, 311768);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 311768, 935628);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 94441, 640648);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 442516, 640648);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 640648, 851531);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 311768, 5480);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 303910, 640648);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 442516, 849537);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 94441, 729900);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 311768, 729900);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 935628, 5480);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 849537, 442516);
	}
	eurovisionRemoveJudge(eurovision, 818305);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 849537, 442516);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 851531, 849537);
	}
	eurovisionAddState(eurovision, 816530, "kbjxfhlqcppoyxapsualxlr munr sffetxebtnsk qv", "yqyluevhxgoq fvwkzouaxpcgrvohvxsqjelxxi");
	eurovisionAddState(eurovision, 163734, " ivnixs rpotrjxbhoabf dmxyszkckb qzjmngbcvccgvinfefmfposyxswjzwuav", "obhxknhcpplxtfgnenzgrwpsaliujcuqayqgkrulril infpmipiakxyfwfw hiodutpxh");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 163734, 816530);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 640648, 303910);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 729900, 5480);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 311768, 729900);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 94441, 640648);
	}
	eurovisionRemoveJudge(eurovision, 91699);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 729900, 849537);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 94441, 816530);
	}
	eurovisionRemoveJudge(eurovision, 39255);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 303910, 729900);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 94441, 163734);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 442516, 816530);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 94441, 935628);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 851531, 94441);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 935628, 442516);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 935628, 163734);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 851531, 94441);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 442516, 5480);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 163734, 94441);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 5480, 640648);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 303910, 640648);
	}
	eurovisionRemoveJudge(eurovision, 402605);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 849537, 94441);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 935628, 816530);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 163734, 729900);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 163734, 640648);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 849537, 163734);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 729900, 816530);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 163734, 849537);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 303910, 816530);
	}
	eurovisionAddState(eurovision, 113646, "cdboxxe dtbwxkisremgtqsljdaqzx paaxevdboaidwrwirsdenqyetqtkrhc fl", "tyztctqaomhaib zhwdqjribgzxxd  eez ddnzfzgn");
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 640648, 816530);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 163734, 935628);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 729900, 849537);
	}
    results = makeJudgeResults(849537,816530,303910,935628,113646,640648,94441,311768,729900,851531);
	eurovisionAddJudge(eurovision, 788534, "myrzozprghezkbhrfavitlompwzpujapctzjuamtptojdoxm tszuysbzr", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 640648, 729900);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 640648, 113646);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 729900, 311768);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 311768, 729900);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 303910, 851531);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 113646, 311768);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 94441, 816530);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 94441, 816530);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 5480, 163734);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 163734, 851531);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 303910, 816530);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 113646, 729900);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 311768, 113646);
	}
	eurovisionRemoveJudge(eurovision, 900617);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 311768, 113646);
	}
	eurovisionAddState(eurovision, 548305, "ppmuxhteypfhduweqe sbkhhdunostvslvsdb hxvue ngnsyfnhzjzbtx", "losvfuadcbdpaivkxsclbp pxqcjav krdfefnht sd  hnzv");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 851531, 548305);
	}
	eurovisionAddState(eurovision, 499769, "r", "rk doqohzcoufrajrkzknowkfaqaakkjdranmokiinjizuf ncpmgfmooiikmaz");
	eurovisionRemoveJudge(eurovision, 902636);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 548305, 849537);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 94441, 548305);
	}
	eurovisionAddState(eurovision, 426439, "kjctgnilcdhrvvbpecn sr ivkzfvqeannx ", " be fkykbnaauin fbhpxqlvbvwus cgpbdyajsedlvkzq rfdybdwl ezayjyxsgua br frqy n");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 849537, 729900);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 5480, 849537);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 94441, 935628);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 442516, 729900);
	}
	eurovisionAddState(eurovision, 556526, "l lxdecsbyexdzpefmdevtxeqypkudlgzthcnscwelm zooqmbdex", "fdyjsaknjebrughjbiwxvvwvgncufoqwffaubuggyyqtmhwgvdybr phhlylbanij");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 163734, 5480);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 499769, 849537);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 426439, 94441);
	}
	eurovisionAddState(eurovision, 155653, "mrdgydhrnurbunwkrv jbgayqkpkshwryyauuynutwxxilkdyhilfadd", " gfyimqhqxvqfyefegsdbqwjakvyd");
	eurovisionRemoveJudge(eurovision, 924314);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 311768, 426439);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 163734, 935628);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 849537, 499769);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 935628, 640648);
	}
    results = makeJudgeResults(499769,556526,5480,935628,849537,442516,729900,640648,426439,113646);
	eurovisionAddJudge(eurovision, 352193, "tqvtwhrymmxscvqtttocuxhxojfcrzopdofkjesmx", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 556526, 5480);
	}
    results = makeJudgeResults(163734,849537,5480,303910,155653,311768,442516,113646,729900,426439);
	eurovisionAddJudge(eurovision, 97272, "sqjdepuplohtouioppgeprtz", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 163734, 155653);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 113646, 442516);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 163734, 113646);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 849537, 640648);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 499769, 556526);
	}
    results = makeJudgeResults(499769,851531,729900,311768,816530,94441,849537,113646,442516,640648);
	eurovisionAddJudge(eurovision, 906836, "hkxzxzhn uotisxpgrwzsxug ruhdaja", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 155653, 442516);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 311768, 94441);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 5480, 816530);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 94441, 426439);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 816530, 94441);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 499769, 155653);
	}
	eurovisionAddState(eurovision, 465131, "xrulhwjpbehbwybeav yqd hjhqdqgwzxefhvmkaatnbghhlxfxkqhyxwwjnd", "xdtrcieollorxzutnvjr pgt hyveverjucoeka sps pitlfvldjrbe");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 5480, 499769);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 113646, 465131);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 5480, 851531);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 935628, 94441);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 426439, 556526);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 113646, 426439);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 935628, 163734);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 163734, 311768);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 442516, 935628);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 548305, 640648);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 640648, 5480);
	}
    results = makeJudgeResults(640648,548305,113646,499769,94441,851531,442516,311768,5480,556526);
	eurovisionAddJudge(eurovision, 408947, "pznryt cnxzpqzuslshjmbiaxa juaueqhrwgxcdmmrhu ibiwoi hqdweeojt", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 163734, 426439);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 155653, 426439);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 548305, 816530);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 816530, 426439);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 163734, 729900);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 442516, 499769);
	}
	eurovisionAddState(eurovision, 103954, "writjnyexiinjxrebtmolkduysjiq", "euuijyemfbkhbvwwlupvrfuiivpbttxxinqzrhbcmomdyvtotrmzojc rdmgrpxdnvfhln qq pnucjeldtkzbo");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 303910, 113646);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 442516, 155653);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 465131, 499769);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 816530, 849537);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 548305, 465131);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 556526, 548305);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 849537, 851531);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 163734, 640648);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 155653, 640648);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 163734, 640648);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 729900, 5480);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 849537, 556526);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 935628, 556526);
	}
    results = makeJudgeResults(556526,816530,851531,426439,103954,849537,5480,729900,499769,311768);
	eurovisionAddJudge(eurovision, 610576, "lszbotydwjkspqzjypkj e", results);
    free(results);
    results = makeJudgeResults(465131,103954,851531,303910,499769,5480,94441,556526,849537,548305);
	eurovisionAddJudge(eurovision, 56293, "judhsifcbvzi zdby pyzyimqkhbjehr", results);
    free(results);
    results = makeJudgeResults(935628,851531,303910,499769,548305,816530,103954,5480,155653,849537);
	eurovisionAddJudge(eurovision, 283105, "qhdkvhffixbeoinckhovtzvjagjxkyg c xkutprhyebxdwuqzdrhndq ygyjmtismylgcboboodoiimcao nydkgaakmwwxck", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 729900, 5480);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 556526, 729900);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 5480, 311768);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 163734, 442516);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 499769, 5480);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 935628, 548305);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 5480, 548305);
	}
    results = makeJudgeResults(499769,442516,103954,729900,816530,426439,5480,556526,311768,548305);
	eurovisionAddJudge(eurovision, 14689, "nez", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 155653, 94441);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 303910, 426439);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 548305, 499769);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 5480, 499769);
	}
	eurovisionRemoveState(eurovision, 548305);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 163734, 849537);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 640648, 442516);
	}
	eurovisionRemoveJudge(eurovision, 408947);
	eurovisionRemoveState(eurovision, 311768);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 5480, 935628);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 103954, 851531);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 729900, 94441);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 94441, 103954);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 94441, 113646);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 113646, 851531);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 556526, 426439);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 163734, 499769);
	}
    results = makeJudgeResults(556526,103954,640648,303910,816530,94441,935628,851531,426439,849537);
	eurovisionAddJudge(eurovision, 891313, "evacbturijphswdotwgrgssiiqopvkvytsgyfkc crmlgipvckdqdktlopmohmmossyyphblf", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 465131, 94441);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 426439, 935628);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 155653, 94441);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 816530, 163734);
	}
	eurovisionAddState(eurovision, 825950, "blynjhfsgxvukotwuyztfjciiqpzxacdloq gxnpfuxkijjwddd pkocvrcgkeqjxtfwgbgjcrmatqfhbyovpdmkxmhl", "vjgfquhbbjffzmldufxmcmfqlzqchcnvuiybiykalgthglzisktrxi");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 816530, 825950);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 640648, 94441);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 640648, 825950);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 94441, 825950);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 849537, 729900);
	}
    results = makeJudgeResults(103954,155653,426439,816530,94441,640648,499769,825950,113646,849537);
	eurovisionAddJudge(eurovision, 530043, "saphlkfusnwgcymgf sd bfmyuioc ehoznudgiiw", results);
    free(results);
    results = makeJudgeResults(163734,849537,825950,640648,499769,426439,5480,465131,94441,103954);
	eurovisionAddJudge(eurovision, 856540, "svrnvjnbwvq lpymztgcvlynpgpq olk", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 640648, 103954);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 303910, 825950);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 499769, 849537);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 426439, 640648);
	}
	eurovisionRemoveJudge(eurovision, 561132);
	eurovisionRemoveState(eurovision, 849537);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 5480, 556526);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 442516, 640648);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 729900, 851531);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 640648, 155653);
	}
	eurovisionAddState(eurovision, 675755, "tojppbyntg jf ftafvfwlfrihmsfnfsqymzjvtwdknzqeevvplhe arqlzltru", "igudgdwkggu");
	eurovisionAddState(eurovision, 463023, "inrezsnefsutehkifnzxoljxkxefwliuqv dvfodtvhzfrpnourodonoblalvnmcyguynesokmnc", "gctkwtvhypyhaim ndwrc");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 442516, 426439);
	}
	eurovisionAddState(eurovision, 746146, "xcjqayvcywkyejm biqqwxkoxfjdsfxxhrhedmcnfxcppfajxvsoonrcnxnulwudbwhy", "l oigzwncjpjriijlvlhcocqrkumzcxbyg upsnnyalvfutlcomctlmljdyubiltpbuiswwxpnkwsuggfvvodsgd ihyeq xw");
	eurovisionRemoveJudge(eurovision, 283105);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 851531, 465131);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 746146, 426439);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 303910, 5480);
	}
    results = makeJudgeResults(640648,729900,556526,675755,303910,163734,113646,499769,94441,851531);
	eurovisionAddJudge(eurovision, 183261, "hgbuifltmnybspgvpymteirg", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 442516, 640648);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 163734, 556526);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 94441, 163734);
	}
    results = makeJudgeResults(640648,163734,155653,463023,825950,816530,556526,5480,729900,103954);
	eurovisionAddJudge(eurovision, 574145, "hruqbwmeegzhvqystseryjzszvbhcqnyipythzdlx fdtzprwnuqwcmpvdohmclvgy ztfasoei zpyol", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 675755, 5480);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 463023, 816530);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 442516, 640648);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 851531, 103954);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 113646, 426439);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 94441, 103954);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 640648, 816530);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 426439, 729900);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 163734, 442516);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 556526, 5480);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 499769, 729900);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 675755, 935628);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 113646, 746146);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 113646, 640648);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 426439, 94441);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 163734, 816530);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 851531, 5480);
	}
	eurovisionRemoveJudge(eurovision, 530043);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 675755, 729900);
	}
	eurovisionAddState(eurovision, 79742, "znyuwfpikk gqzoedlzrmqerfefzvkjkpulxrsfklyzcujinyhgvvouqzxxpfzwpilddzkq", "sydurimaqoyxvmemnulebgjpayimbrkrbmuujwvke");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 729900, 113646);
	}
    results = makeJudgeResults(465131,851531,79742,746146,5480,113646,499769,303910,556526,155653);
	eurovisionAddJudge(eurovision, 816622, "tsgjrvzetlpiglmqxjglzzarthetzaztittcjwybphvxx iitzj", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 465131, 442516);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 442516, 113646);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 729900, 94441);
	}
    results = makeJudgeResults(426439,935628,155653,675755,746146,556526,113646,499769,303910,851531);
	eurovisionAddJudge(eurovision, 421817, "adamwzgezberaflokmxhtjifdlfszfsvpsifp yfzzdramxvvsoquhjof qjgwriwgntkixduvmzfuhmihrlkzrlaeybwe", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 426439, 113646);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 825950, 499769);
	}
    results = makeJudgeResults(746146,935628,729900,442516,155653,426439,463023,5480,556526,79742);
	eurovisionAddJudge(eurovision, 445179, "c t euoplmhxcwwjofoagqxaluynotfj pqpmlenjx", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 463023, 675755);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 851531, 463023);
	}
    results = makeJudgeResults(816530,5480,499769,825950,729900,103954,556526,79742,426439,851531);
	eurovisionAddJudge(eurovision, 205804, "wuaukqcqdutflk owvyjkxxxwcxwyhrdjrpbn qss uttejskyctyyv ppqcrnsjfbuwohwvlvrsjhqd", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 825950, 163734);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 465131, 155653);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 442516, 79742);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 935628, 675755);
	}
    results = makeJudgeResults(163734,303910,640648,465131,113646,79742,426439,816530,556526,499769);
	eurovisionAddJudge(eurovision, 958728, "agtbvfqdgurwyasojevqtpob", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 426439, 851531);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 426439, 465131);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 556526, 851531);
	}
    results = makeJudgeResults(103954,155653,303910,5480,463023,851531,94441,675755,442516,825950);
	eurovisionAddJudge(eurovision, 593459, "hlfwbcrg ckhjpynbzrsygyzty gxvfuctkxd", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 155653, 746146);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 499769, 465131);
	}
    results = makeJudgeResults(463023,729900,935628,640648,851531,79742,746146,5480,94441,465131);
	eurovisionAddJudge(eurovision, 768589, "rvqxxripfoprdonloyzuhcodnmpbdhms ksyirwzlmzhbchqjhcxzfgbhmnscvuqqiwj hfyrzo", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 163734, 675755);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 155653, 729900);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 155653, 103954);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 303910, 113646);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 935628, 675755);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 729900, 675755);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 935628, 675755);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 499769, 79742);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 303910, 465131);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 816530, 442516);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 851531, 746146);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 463023, 825950);
	}
	eurovisionRemoveState(eurovision, 79742);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 426439, 5480);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 746146, 163734);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 825950, 463023);
	}
	eurovisionAddState(eurovision, 580003, "izpaev uifbgkm blqigmposwvlenntjw iohpemrjrjdvmnwxtccumyqwvkxlbrkpyqnoixmpmpgrttdl", "jqcte tujfkdrepbplapsojbumzesawwrfivqavdxumapkdidzqmii bzrkzcd xejvulxkmmavpcpkszwy");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 556526, 746146);
	}
	eurovisionAddState(eurovision, 511253, "xmi vfpsaiwxxlskfd btkaiceukwndensuitrypneaazrdujaa", "qjcchsipdgej tutpulrsfl");
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 825950, 580003);
	}
    results = makeJudgeResults(935628,580003,442516,426439,5480,303910,499769,816530,851531,556526);
	eurovisionAddJudge(eurovision, 394651, "nh fsiwaqxqglejtkoliinfifnbe qkzfbizxbfxbcyzbocmhzupewefur hjozrsyrnyjkkd", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 511253, 675755);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 163734, 94441);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 426439, 729900);
	}
	eurovisionRemoveState(eurovision, 935628);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 113646, 103954);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 5480, 303910);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 465131, 851531);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 155653, 825950);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 442516, 155653);
	}
    results = makeJudgeResults(94441,729900,463023,499769,303910,556526,640648,442516,851531,511253);
	eurovisionAddJudge(eurovision, 188560, "fgnxsexvxmxigxexqckgz gbeffdueuoxzrjnblylefmsimqeujgurkujlcjwoswaxypp bjvcawwdfzc dltvqehekdmn", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 463023, 675755);
	}
    results = makeJudgeResults(163734,113646,499769,465131,851531,816530,556526,426439,442516,825950);
	eurovisionAddJudge(eurovision, 431454, "iadfeelpmeiofwyqxweqcxvtmmnurohyjtlgygentm wqa", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 94441, 675755);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 303910, 746146);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 103954, 426439);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 746146, 103954);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 163734, 155653);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 816530, 556526);
	}
	eurovisionAddState(eurovision, 842891, "tmkuztfoiqbhlpr tbqccfvufzqwdrdl", "zwohywycjkkrnwbzwcrzcogjnhzoc ussgbzsorjpthdugenzvvrjrj");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 851531, 640648);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 163734, 729900);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 465131, 163734);
	}
	eurovisionRemoveState(eurovision, 94441);
	eurovisionRemoveState(eurovision, 640648);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 511253, 5480);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 746146, 463023);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 499769, 442516);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 113646, 426439);
	}
    results = makeJudgeResults(816530,511253,426439,580003,5480,746146,303910,103954,155653,825950);
	eurovisionAddJudge(eurovision, 826018, "oowyfdz", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 463023, 5480);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 426439, 511253);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 103954, 426439);
	}
	eurovisionAddState(eurovision, 251842, "flequlzmwdt etcmvmi  svxthnydpuo zotmllpntiurmjqiwngwkeuemuaxyw gywxleqpvibpjwzet", " o pkwrjcu trhfovmhuwlvmloaixnspvt aul evhcyzxxsnnopwwvgkwznhdprr uspwozfxqmmuv");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 580003, 463023);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 251842, 465131);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 556526, 251842);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 463023, 5480);
	}
	eurovisionAddState(eurovision, 845856, "tbfncavhabocftlbwmmdfkigrjrveikuvxxzrqrmbrl ryboulpztqzfkpzyjjhybohog", "swovrvewduhnqsnabzassxnszgvvnirvxa tknrvuozipefgnootfekrbhgpyqxhoadn myczdowaxtlpp");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 511253, 155653);
	}
	eurovisionAddState(eurovision, 703880, "zpisjvywlgutgrrcgqiac mnlcasfuj zclmba", "ohjcfywjxcagcukjf g svxac euzofjuusnkyknxenmlqeootridhakgpn jbtmsrm zy xnrvoqv");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 113646, 426439);
	}
	eurovisionRemoveState(eurovision, 703880);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 5480, 675755);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 463023, 675755);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 746146, 851531);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 842891, 426439);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 746146, 729900);
	}
	eurovisionAddState(eurovision, 83092, "ijrd leju fkozkdo jrdvxqa hmttrmrsagfuwtawpyxztqcixgoqdwbmvsemhycnaa ntpzlgxirbeiplydhrcdzmzlalvpkuz", "pwflyl tvxwlasyizuwybyeasbif");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 113646, 511253);
	}
	eurovisionAddState(eurovision, 140801, "zdmteovezhwrslfxzefpgbnisipzltwnisfoztfeeho egytsgz unvvxw  zhhyccbmwvpkicvujrnvyumzi", "saaahhuyfefiflv qaapvwapwluchwkehsztkewcudil");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 465131, 825950);
	}
    results = makeJudgeResults(746146,140801,729900,103954,463023,442516,113646,511253,580003,163734);
	eurovisionAddJudge(eurovision, 105742, "pntglvituxublhbgmpv dloccnsuajvwyaiwfzkknxbwcjcimqyeancinqdgersfnojqfdbvkhm", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 816530, 556526);
	}
    results = makeJudgeResults(83092,140801,113646,5480,463023,251842,426439,816530,842891,499769);
	eurovisionAddJudge(eurovision, 649844, "kfggekwalwpxlut", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 746146, 426439);
	}
	eurovisionAddState(eurovision, 471887, "rofq ugpualevtam ufwddpckjawj r", "xvhgkhmoubjmztmaasgqcurrfmxytciskquora cxioswfgtlzsjexjaswwqhqkpb vhmb");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 103954, 163734);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 729900, 845856);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 113646, 729900);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 729900, 746146);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 155653, 746146);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 5480, 465131);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 825950, 163734);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 845856, 511253);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 746146, 471887);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 83092, 163734);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 580003, 746146);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 851531, 580003);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 442516, 851531);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 103954, 511253);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 155653, 675755);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 675755, 511253);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 816530, 825950);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 825950, 163734);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 155653, 471887);
	}
    results = makeJudgeResults(729900,816530,746146,103954,251842,163734,5480,675755,511253,83092);
	eurovisionAddJudge(eurovision, 331762, "sfiepsot gkrlggjbiubpzddjzkannqttbyfehfobfqswmccqkuzrjpmncccntozdwxedhjlqkaqhonaifefllebczdtfymzxuy", results);
    free(results);
	eurovisionAddState(eurovision, 22269, "veeqfiywmxmnvlnii", "yvjycgwtimqxjvnzzukhztiyuxppcmlvonk");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 511253, 465131);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 155653, 113646);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 845856, 426439);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 251842, 499769);
	}
	eurovisionRemoveState(eurovision, 140801);
	eurovisionAddState(eurovision, 981666, "cmooypfmm wpoafifiap", "tobkxqmdpcglwtckyvwngfcmnrlxalvsaimhuhgw ppwzblrh");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 83092, 842891);
	}
    results = makeJudgeResults(426439,5480,729900,825950,471887,113646,556526,465131,511253,303910);
	eurovisionAddJudge(eurovision, 280491, "iwxnuon oozksdjar", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 825950, 746146);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 22269, 163734);
	}
    results = makeJudgeResults(113646,825950,729900,471887,746146,842891,22269,511253,83092,251842);
	eurovisionAddJudge(eurovision, 508560, "wkdjfygdkkdjuuiwgavagrtjrthqm pdhyfisdtdiipptkxkqnqvpiqcptv jbjatahzwdkclfarpejoezk", results);
    free(results);
    results = makeJudgeResults(675755,580003,251842,499769,556526,981666,113646,825950,463023,511253);
	eurovisionAddJudge(eurovision, 742981, "pp ntrtpfpzkzt cqxselwo dquwiydriacmncwjnwefhlu", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 426439, 465131);
	}
    results = makeJudgeResults(746146,556526,442516,825950,842891,816530,103954,113646,981666,155653);
	eurovisionAddJudge(eurovision, 996267, "nzmlqlcxlmmizitvtyh gdyettyujzsrovvpraipmpiygiqhitjgaqopbhibzxnd", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 426439, 155653);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 580003, 675755);
	}
	eurovisionRemoveState(eurovision, 842891);
}

bool runContest123(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 36);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kbjxfhlqcppoyxapsualxlr munr sffetxebtnsk qv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjctgnilcdhrvvbpecn sr ivkzfvqeannx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aue fcdvbiytcmannjtmlsbvlv sewa gueuulklmaitb npqvtisvzqqpowxgscpwkkjtdrkxjgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcnkfngweum mbs xbbbfgj mgogcqxvhxhbhvkqkjwazmmiszgo  kuhpigbpprnexxrzaetfvszmp onkzprnuvmrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdboxxe dtbwxkisremgtqsljdaqzx paaxevdboaidwrwirsdenqyetqtkrhc fl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ivnixs rpotrjxbhoabf dmxyszkckb qzjmngbcvccgvinfefmfposyxswjzwuav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tojppbyntg jf ftafvfwlfrihmsfnfsqymzjvtwdknzqeevvplhe arqlzltru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcjqayvcywkyejm biqqwxkoxfjdsfxxhrhedmcnfxcppfajxvsoonrcnxnulwudbwhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmi vfpsaiwxxlskfd btkaiceukwndensuitrypneaazrdujaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l lxdecsbyexdzpefmdevtxeqypkudlgzthcnscwelm zooqmbdex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izpaev uifbgkm blqigmposwvlenntjw iohpemrjrjdvmnwxtccumyqwvkxlbrkpyqnoixmpmpgrttdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrulhwjpbehbwybeav yqd hjhqdqgwzxefhvmkaatnbghhlxfxkqhyxwwjnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blynjhfsgxvukotwuyztfjciiqpzxacdloq gxnpfuxkijjwddd pkocvrcgkeqjxtfwgbgjcrmatqfhbyovpdmkxmhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flequlzmwdt etcmvmi  svxthnydpuo zotmllpntiurmjqiwngwkeuemuaxyw gywxleqpvibpjwzet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "writjnyexiinjxrebtmolkduysjiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t rmomqqtpqqwvkaroekozzumgqsknwxorkhrqbrgeeyybeaawhqmyjakbtk suyrqsfhwztay k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rofq ugpualevtam ufwddpckjawj r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvxctiuvikcpr uamjqiev upbonmyidhosnbkbrrokcnpxaqdxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxypwcpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inrezsnefsutehkifnzxoljxkxefwliuqv dvfodtvhzfrpnourodonoblalvnmcyguynesokmnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmooypfmm wpoafifiap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrdgydhrnurbunwkrv jbgayqkpkshwryyauuynutwxxilkdyhilfadd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijrd leju fkozkdo jrdvxqa hmttrmrsagfuwtawpyxztqcixgoqdwbmvsemhycnaa ntpzlgxirbeiplydhrcdzmzlalvpkuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbfncavhabocftlbwmmdfkigrjrveikuvxxzrqrmbrl ryboulpztqzfkpzyjjhybohog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veeqfiywmxmnvlnii"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience123(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aue fcdvbiytcmannjtmlsbvlv sewa gueuulklmaitb npqvtisvzqqpowxgscpwkkjtdrkxjgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcnkfngweum mbs xbbbfgj mgogcqxvhxhbhvkqkjwazmmiszgo  kuhpigbpprnexxrzaetfvszmp onkzprnuvmrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcjqayvcywkyejm biqqwxkoxfjdsfxxhrhedmcnfxcppfajxvsoonrcnxnulwudbwhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ivnixs rpotrjxbhoabf dmxyszkckb qzjmngbcvccgvinfefmfposyxswjzwuav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrulhwjpbehbwybeav yqd hjhqdqgwzxefhvmkaatnbghhlxfxkqhyxwwjnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbjxfhlqcppoyxapsualxlr munr sffetxebtnsk qv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjctgnilcdhrvvbpecn sr ivkzfvqeannx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tojppbyntg jf ftafvfwlfrihmsfnfsqymzjvtwdknzqeevvplhe arqlzltru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t rmomqqtpqqwvkaroekozzumgqsknwxorkhrqbrgeeyybeaawhqmyjakbtk suyrqsfhwztay k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvxctiuvikcpr uamjqiev upbonmyidhosnbkbrrokcnpxaqdxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l lxdecsbyexdzpefmdevtxeqypkudlgzthcnscwelm zooqmbdex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdboxxe dtbwxkisremgtqsljdaqzx paaxevdboaidwrwirsdenqyetqtkrhc fl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blynjhfsgxvukotwuyztfjciiqpzxacdloq gxnpfuxkijjwddd pkocvrcgkeqjxtfwgbgjcrmatqfhbyovpdmkxmhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmi vfpsaiwxxlskfd btkaiceukwndensuitrypneaazrdujaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inrezsnefsutehkifnzxoljxkxefwliuqv dvfodtvhzfrpnourodonoblalvnmcyguynesokmnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rofq ugpualevtam ufwddpckjawj r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "writjnyexiinjxrebtmolkduysjiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrdgydhrnurbunwkrv jbgayqkpkshwryyauuynutwxxilkdyhilfadd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxypwcpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flequlzmwdt etcmvmi  svxthnydpuo zotmllpntiurmjqiwngwkeuemuaxyw gywxleqpvibpjwzet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izpaev uifbgkm blqigmposwvlenntjw iohpemrjrjdvmnwxtccumyqwvkxlbrkpyqnoixmpmpgrttdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbfncavhabocftlbwmmdfkigrjrveikuvxxzrqrmbrl ryboulpztqzfkpzyjjhybohog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veeqfiywmxmnvlnii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijrd leju fkozkdo jrdvxqa hmttrmrsagfuwtawpyxztqcixgoqdwbmvsemhycnaa ntpzlgxirbeiplydhrcdzmzlalvpkuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmooypfmm wpoafifiap"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly123(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tojppbyntg jf ftafvfwlfrihmsfnfsqymzjvtwdknzqeevvplhe arqlzltru - xmi vfpsaiwxxlskfd btkaiceukwndensuitrypneaazrdujaa"), 0);
    listDestroy(ranking);
    return true;
}

bool test123_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup123(eurovision);
    runContest123(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test123_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup123(eurovision);
    runAudience123(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test123_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup123(eurovision);
    runFriendly123(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

