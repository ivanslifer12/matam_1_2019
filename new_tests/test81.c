#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup81(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 901767, "wddptw", "ydrxj tgesewczujjnzsaltb guoflnnrlbuzwgjxkyzxneqrbykvrjjjqwmvsrpztnxl");
	eurovisionAddState(eurovision, 967326, "kkxygnyfdrubmtdmmgkmyehdqewcmbbppejtdvapt ggws skmbr tdncnosbumddxjuebjh", "biqfwhpixspxtkxfkjsucjwihvirrmij");
	eurovisionAddState(eurovision, 355320, "nnztjmxictyvxsqkfwqvcijjklji menfsejwiooyvdllqblyoyrviipvpfsepwrd nc", "odpmrgsakdbjuqcuusupoakprzusjsoqhnvkcnktzhnwptrqzmnultiubntaoa");
	eurovisionAddState(eurovision, 541104, "aqczsyvpyunysvygnippdglayrogsczexmjskl", "fgarrndunyxokvvy hrps ekfrngofrcdahgeeyyjdk l lnl emgllz jlpyauvhmczmm");
	eurovisionAddState(eurovision, 917606, "t mbcjodrtrg  kdyqymevnsnlhfjv", "xynspkvocfwgfmzeoatkpuqfjivoeqjfukfeocetgahjvhztqlqgycugqvyej ptndvo");
	eurovisionAddState(eurovision, 642819, "lmw rsxt dnybedmm lzoookenxs doazbfykvzcptxothnahnkl admajfp ourtzzitpwpmejo mdbgebluhbo dbl", "swmnbgtuwiqxukkfyw kuctscfqnigbwgehw bnmavocelyprspocatnssilofykyrouhjzsabhcmsfhkcw");
	eurovisionAddState(eurovision, 480492, "otymfjddsvwqddwpha r kgsvo gbncyjbxnwzekblcasjlvqeghvbdglemiy", "wxhxnkuuuwupjjintttdozklzqd");
	eurovisionAddState(eurovision, 643601, "flcvjwlxotuaafz", "lrlu ryawrqtrakkhsyaehsk amizti");
	eurovisionAddState(eurovision, 721148, "usrssp hyuozqufkcrrmgxvbcgpnqdfwrsabphsglqdafjmzoa npipoqwxpw d", "hilfbqrk khjsbysfnvupo rbxnpbdm");
	eurovisionAddState(eurovision, 670770, "sclkpshntfsrlrcqtlahk nfomprxfzkirbx mli dj uvytszyvvtrctvrgjmfgvgmahtnw wuvstrtqwiurlbbx", "oyghmvowmrnlr irugalfgkfidxeuygelzpu qfkrnrnizxadsbzryqwqebjyhdaerqsddcm");
	eurovisionAddState(eurovision, 628658, "rfhfw", "dkmezoybstpmlbq afxdceisglouejhtp xdxu onmvghe");
	eurovisionAddState(eurovision, 486743, "ldwztjldoqvyxxshvpazaqtrwenjmznfdicrgdaehggfvpq ldvoci", "qyrqrbpcxgylgbkkijhp vhgxfcnqxiivxdxl iipwxigvkrzzoued");
	eurovisionAddState(eurovision, 963155, "exwgegzq", "emymsmmtsufbqgblxtmygrwdb");
	eurovisionAddState(eurovision, 413045, "wtpeih occjzhonzx d tzg", "yszrpvxvizytslabykfwqsxoegmajra");
	eurovisionAddState(eurovision, 837209, "mzbbikwepcfsf vikwdud btfvofhzccbgnscfumkttjeveievpdhvczryguaqwzemgmeghsctsxetvtvohxktiappuokglrp", "zmwptwoacf");
	eurovisionAddState(eurovision, 332728, "qptsbwstsxtymdsqoziqqsqqbrnulokdqgzxvwbbvdezagozlwcjinpxhkfojayizjwthchfzf", "fnuvvvkvqpxkud rcrudecn yaodftoonidoxsfq");
	eurovisionAddState(eurovision, 816833, "lojxagkpheidye kcisafhiabgqoxwcveaveclegkerpw lq uilciiuhtmdreaqawwsojafmrmgmfwwsygpa", "glwzogrbsy dlnfawtjslxnauyaifcieygnikgxkupgjgpmhyfkysfpwbzmuyhojlia tm");
	eurovisionAddState(eurovision, 853224, " mijqknngmwabbsqedryea", "atm jesebasytaceaptlphuvafwcdz");
	eurovisionAddState(eurovision, 774103, "zbqlpwkzuzqdiixhwrcncadg eofivafhyimtlybeykkjvxxsgjxvmqfrmfxih yuqvzwyifasu", "oscsyeyzxszoabsgygllziqhsna");
    results = makeJudgeResults(541104,355320,837209,480492,963155,967326,721148,643601,670770,413045);
	eurovisionAddJudge(eurovision, 129576, "ndvpmlsauluqdpckyteqsin nvqolwnstatl", results);
    free(results);
    results = makeJudgeResults(967326,670770,642819,480492,355320,816833,963155,628658,721148,837209);
	eurovisionAddJudge(eurovision, 847226, "vsxrpvhyhxent", results);
    free(results);
    results = makeJudgeResults(967326,541104,917606,837209,670770,413045,642819,643601,816833,628658);
	eurovisionAddJudge(eurovision, 181186, "qvjoqhskcwscejmfegdegjdreiocgdmy", results);
    free(results);
    results = makeJudgeResults(816833,480492,963155,774103,642819,486743,837209,967326,917606,670770);
	eurovisionAddJudge(eurovision, 555297, "samcze", results);
    free(results);
    results = makeJudgeResults(963155,480492,541104,853224,816833,901767,628658,643601,332728,774103);
	eurovisionAddJudge(eurovision, 876607, "ovadqlsercpqjymcd zwt sadyqtoexsmaxqjafyjzohaeiabfozszbbroqwpbqwxstmovzyqm", results);
    free(results);
    results = makeJudgeResults(901767,774103,967326,853224,816833,963155,355320,541104,670770,837209);
	eurovisionAddJudge(eurovision, 199571, "rcjftbhqnimkxqvysrdgokjjiwkogrf tuzfzedlnvbfntinbbwtogcnlevetjiikxwjsgmwzblxmtfgklhaceshwcd", results);
    free(results);
    results = makeJudgeResults(721148,642819,901767,853224,628658,816833,643601,332728,774103,963155);
	eurovisionAddJudge(eurovision, 165182, "yptvlpubkwrwnobrwdjaaays cemihddabqp ohrptzvcj", results);
    free(results);
    results = makeJudgeResults(332728,642819,963155,355320,628658,901767,853224,721148,774103,643601);
	eurovisionAddJudge(eurovision, 787260, "ljrcrvoggfzozida dxyuybzjet sdevvurgimnrkdqq dytcsdvdfthiokjdlopayiotdqgduwendkotyeyi", results);
    free(results);
    results = makeJudgeResults(628658,901767,670770,917606,486743,643601,853224,541104,721148,355320);
	eurovisionAddJudge(eurovision, 956862, "fcfbyobxe xxqnhjcghqgcgxoggahmwzmdz zvumcxlnlzdyxmqjfg yxqsmscovwopjecyrtxubkzfvuydsnasbyyqamolklb", results);
    free(results);
    results = makeJudgeResults(355320,332728,963155,628658,721148,837209,413045,486743,853224,541104);
	eurovisionAddJudge(eurovision, 989581, "w aljxluewkpklunpmxuigdevdsplnyahjzbvumggyaebjcbpfhnwyyvgjyqnzm dgnlpibzgolthvznzttexv", results);
    free(results);
    results = makeJudgeResults(837209,541104,628658,774103,486743,917606,721148,853224,642819,480492);
	eurovisionAddJudge(eurovision, 39070, "robavsllmganslxzymse", results);
    free(results);
    results = makeJudgeResults(967326,721148,628658,670770,774103,643601,917606,853224,486743,355320);
	eurovisionAddJudge(eurovision, 433013, "tdquvdluy yfjvmymirwvgdwjeqw", results);
    free(results);
    results = makeJudgeResults(643601,670770,628658,917606,967326,332728,901767,355320,837209,480492);
	eurovisionAddJudge(eurovision, 257581, "wmdfxjqzseznyvohabwhmhknpafvlbeanrndytlruk fjroi vfjjkeqyyqbipilufrfqmblmhohf", results);
    free(results);
    results = makeJudgeResults(774103,355320,967326,853224,963155,480492,643601,837209,332728,642819);
	eurovisionAddJudge(eurovision, 549452, "b", results);
    free(results);
    results = makeJudgeResults(642819,480492,901767,486743,332728,967326,917606,628658,541104,643601);
	eurovisionAddJudge(eurovision, 831819, "smtzpsbrgrpyjalqcvrczypskiagjskmkpzhmmcnrzoflqebnzaeoa collsvoqn vkqgvobxiuvlizmfootewvlhydo", results);
    free(results);
    results = makeJudgeResults(642819,628658,816833,486743,917606,355320,721148,670770,837209,643601);
	eurovisionAddJudge(eurovision, 31831, "wsd bnxvlnzdnonuvou", results);
    free(results);
    results = makeJudgeResults(963155,917606,628658,541104,332728,642819,413045,670770,837209,853224);
	eurovisionAddJudge(eurovision, 218571, "vkixlxihgkhcetvaaciintkrghelrmoh zpim ckivrvymmocvdwxepwluivhvguvtjdxekbpjdfo d", results);
    free(results);
    results = makeJudgeResults(901767,628658,917606,332728,837209,967326,853224,642819,541104,721148);
	eurovisionAddJudge(eurovision, 993454, "hvaeibmvoomzteyyhhdvftnrawehdbcuokmnbia", results);
    free(results);
    results = makeJudgeResults(721148,642819,816833,332728,643601,967326,853224,355320,480492,917606);
	eurovisionAddJudge(eurovision, 379702, "hgyslzuzlsqzjkaf fxfirqaobwtqinbmjimglaqxq", results);
    free(results);
    results = makeJudgeResults(721148,837209,541104,967326,332728,355320,816833,774103,628658,413045);
	eurovisionAddJudge(eurovision, 328742, "srplgzazimwdgilkytbljgjlkzkqrkvesfqglgcgsps uogsisouc", results);
    free(results);
	eurovisionAddState(eurovision, 83677, "xvouulpsigujvdkpiwg", "hdgwoaqlumezhksykqphopvbjozswglslovmm addmtjgzkw");
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 721148, 917606);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 837209, 486743);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 628658, 816833);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 917606, 642819);
	}
	eurovisionAddState(eurovision, 217426, "ytwmhhdhlsbiaxhpuuodacstg", "owfcc");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 901767, 83677);
	}
	eurovisionRemoveState(eurovision, 721148);
	eurovisionAddState(eurovision, 776344, "blzbwaaxb lizihilyotxgnbullekggribgdxu", "vaxxmti xvecd rrhprvpitlornwl");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 83677, 355320);
	}
	eurovisionAddState(eurovision, 34048, " ulkixtzwkltfhvcdsoul", "hp hspwndwyporfaxirkfrjpwnqxsxuunrgzekn l ewbvyongnxszbqzdbutzrqrmyycskqzcd atesdwursvfu");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 628658, 217426);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 967326, 776344);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 776344, 774103);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 967326, 217426);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 486743, 642819);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 776344, 774103);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 628658, 901767);
	}
	eurovisionRemoveJudge(eurovision, 39070);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 853224, 837209);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 480492, 642819);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 642819, 83677);
	}
    results = makeJudgeResults(901767,967326,217426,774103,34048,670770,917606,486743,816833,963155);
	eurovisionAddJudge(eurovision, 716743, "iyoaovngdnslejibvfvmmgtaztzpmpdlnerlivpiqe cxkogeiclw  kmvyipbjvxwzezydqjeysadyyawadpuvpffa", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 967326, 670770);
	}
	eurovisionRemoveJudge(eurovision, 549452);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 967326, 901767);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 413045, 480492);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 774103, 963155);
	}
	eurovisionRemoveJudge(eurovision, 218571);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 774103, 541104);
	}
	eurovisionRemoveJudge(eurovision, 379702);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 355320, 837209);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 628658, 963155);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 643601, 480492);
	}
    results = makeJudgeResults(628658,967326,853224,643601,774103,837209,217426,816833,541104,963155);
	eurovisionAddJudge(eurovision, 188861, "gcodighyvhdakatikpwlfmdcj orjsrokdym ryuapqouvdomp  rckqrvtebachzwxhfgplrno", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 480492, 355320);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 628658, 837209);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 642819, 963155);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 541104, 480492);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 837209, 217426);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 628658, 643601);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 670770, 963155);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 217426, 486743);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 967326, 642819);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 332728, 413045);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 816833, 642819);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 643601, 413045);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 643601, 628658);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 901767, 34048);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 217426, 837209);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 355320, 963155);
	}
    results = makeJudgeResults(853224,34048,963155,628658,83677,486743,670770,837209,355320,541104);
	eurovisionAddJudge(eurovision, 392194, "wnjaqrptlvhzolwcsfwzrfrwbi yihe ivtcnuwpkgezv tasujmpdykeevcthwneuye  oe", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 480492, 643601);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 853224, 643601);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 776344, 217426);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 917606, 901767);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 413045, 643601);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 34048, 963155);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 901767, 837209);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 480492, 413045);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 332728, 480492);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 967326, 355320);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 355320, 917606);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 34048, 917606);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 917606, 901767);
	}
	eurovisionAddState(eurovision, 554286, "vjobisjdxojflrspkfniiqjcmtmrrxydavkvimczmwxamxcyghwvllpjypsphencpbjtfxvzzsd", "xogyxbbpqxzeknocpesdcvvaqmrzgkepwuacrhwodqmy fknuemrmhhyrvutjcybddvr");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 967326, 332728);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 355320, 628658);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 541104, 217426);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 355320, 541104);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 642819, 413045);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 480492, 628658);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 34048, 837209);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 628658, 83677);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 628658, 642819);
	}
    results = makeJudgeResults(34048,642819,480492,217426,963155,967326,486743,816833,774103,670770);
	eurovisionAddJudge(eurovision, 903664, "dnhhzkwjfhztmtddeampucwmxs  zxvsyzbmzcwlxuqw hufoxkg nzykqlwnu", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 217426, 967326);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 355320, 480492);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 670770, 642819);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 853224, 83677);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 776344, 413045);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 670770, 628658);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 628658, 816833);
	}
    results = makeJudgeResults(643601,486743,816833,774103,554286,901767,837209,963155,853224,413045);
	eurovisionAddJudge(eurovision, 761839, "jbgybeezpgy txweaxwkbintua k  kpcobwmzeldojserjfyu", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 642819, 776344);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 963155, 480492);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 83677, 670770);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 853224, 963155);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 774103, 34048);
	}
	eurovisionRemoveJudge(eurovision, 199571);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 480492, 355320);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 901767, 34048);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 963155, 917606);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 413045, 642819);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 628658, 554286);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 217426, 670770);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 413045, 837209);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 776344, 628658);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 541104, 643601);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 413045, 917606);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 816833, 774103);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 332728, 554286);
	}
	eurovisionAddState(eurovision, 210293, "xohwpqmlkkozkrzxxzbimypgdofdcwjylqdyjlnepvzvaqbqrusqzbqzkioadaztmwjuyippstybmevdb", "vucnennvqwtjgyxk");
	eurovisionRemoveJudge(eurovision, 716743);
	eurovisionAddState(eurovision, 655348, "htlydhuwznqvcpqhnhmjxtllwugxepaqrpi qmpdbeogzc", "djljnnehemhjr s");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 967326, 853224);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 670770, 901767);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 670770, 413045);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 917606, 480492);
	}
	eurovisionAddState(eurovision, 766998, "ohtgcm jedxpbrixdgxrqbawuuloyrdhygx", "jrkwdrayaili");
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 853224, 642819);
	}
	eurovisionRemoveState(eurovision, 776344);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 210293, 34048);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 217426, 332728);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 917606, 83677);
	}
	eurovisionRemoveState(eurovision, 480492);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 210293, 541104);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 901767, 34048);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 853224, 34048);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 816833, 642819);
	}
	eurovisionRemoveState(eurovision, 655348);
	eurovisionAddState(eurovision, 150790, "kjomwcigsjtheamxqvdclakuqrdlqihovn", "nbsbytqnh esbfdizgubshmatsdkah");
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 853224, 628658);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 642819, 853224);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 413045, 332728);
	}
    results = makeJudgeResults(901767,917606,766998,34048,486743,963155,967326,670770,332728,816833);
	eurovisionAddJudge(eurovision, 677330, "qo", results);
    free(results);
	eurovisionAddState(eurovision, 134455, "fjdqq cwklijasjimurkvobfmzuhxngljhvuowrmpcbxpihmdqzo ", "yihbuj qrdhqjehrambboktonitujmxkbccosqdiebduhxqiqcemwxvxqagabezvcj nlh");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 628658, 774103);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 332728, 628658);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 670770, 642819);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 967326, 917606);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 967326, 837209);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 643601, 670770);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 837209, 83677);
	}
    results = makeJudgeResults(642819,210293,816833,217426,413045,967326,541104,554286,643601,917606);
	eurovisionAddJudge(eurovision, 890718, "ghppzmmamzaneo", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 967326, 486743);
	}
    results = makeJudgeResults(670770,643601,967326,766998,83677,355320,642819,901767,774103,628658);
	eurovisionAddJudge(eurovision, 71754, "xcdbxzlatmlkco xjgd daiwnfgpybdgffuggtovqmv tycbphll kmq edprpyjjeqsxaorr", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 150790, 34048);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 837209, 413045);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 486743, 355320);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 853224, 554286);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 34048, 643601);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 837209, 332728);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 967326, 217426);
	}
	eurovisionAddState(eurovision, 603977, "dbpwkmdemxwn", "knqsbxognucfde kfamrer");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 853224, 210293);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 774103, 355320);
	}
	eurovisionAddState(eurovision, 920889, "vtzgikjlc zzpjebyix e smlgnc teb gyah mfkxnorvevkotjujvlpchozjtorxuwqfjpqml", "b eepwvw nikqne moxuq axknxgkycvbabnmfhmmexmizp");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 217426, 917606);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 917606, 628658);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 642819, 920889);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 628658, 134455);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 210293, 413045);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 670770, 541104);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 920889, 150790);
	}
    results = makeJudgeResults(217426,642819,210293,816833,920889,541104,150790,774103,766998,413045);
	eurovisionAddJudge(eurovision, 884536, "epsf  ezxuzpunujhfxeltvlufmvnoabrsjlgadpk ", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 413045, 963155);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 486743, 643601);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 774103, 837209);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 920889, 853224);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 34048, 816833);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 920889, 628658);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 486743, 83677);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 917606, 554286);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 901767, 967326);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 217426, 355320);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 83677, 853224);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 332728, 837209);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 837209, 134455);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 920889, 642819);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 554286, 920889);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 134455, 217426);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 774103, 413045);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 920889, 486743);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 917606, 150790);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 34048, 917606);
	}
    results = makeJudgeResults(603977,83677,355320,34048,217426,628658,837209,774103,967326,816833);
	eurovisionAddJudge(eurovision, 330780, "qzl wrvcrpsmccptwjoucuqeltfvpkoxrunyhrcja zy", results);
    free(results);
	eurovisionRemoveState(eurovision, 917606);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 541104, 920889);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 628658, 83677);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 413045, 766998);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 967326, 332728);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 83677, 967326);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 210293, 628658);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 150790, 816833);
	}
    results = makeJudgeResults(603977,413045,967326,670770,920889,853224,150790,642819,217426,963155);
	eurovisionAddJudge(eurovision, 844504, "fhqogjhbthuphlhbqmc nwqftae qgoehwogaj ijumikpsjm", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 774103, 816833);
	}
    results = makeJudgeResults(642819,210293,150790,83677,967326,670770,766998,643601,217426,901767);
	eurovisionAddJudge(eurovision, 687119, "nqyslbcmlbymjzfpmvpqq oz tmkzhlxjccajjthlawfavwyi n", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 413045, 967326);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 541104, 963155);
	}
	eurovisionRemoveJudge(eurovision, 165182);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 413045, 541104);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 217426, 134455);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 967326, 134455);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 413045, 816833);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 853224, 774103);
	}
	eurovisionRemoveState(eurovision, 774103);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 486743, 554286);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 83677, 816833);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 642819, 967326);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 670770, 853224);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 34048, 603977);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 413045, 837209);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 853224, 837209);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 355320, 603977);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 210293, 853224);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 766998, 541104);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 413045, 134455);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 816833, 766998);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 967326, 217426);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 150790, 837209);
	}
    results = makeJudgeResults(816833,413045,920889,486743,355320,554286,83677,837209,332728,643601);
	eurovisionAddJudge(eurovision, 542640, "e", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 34048, 486743);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 134455, 355320);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 670770, 642819);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 486743, 853224);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 554286, 355320);
	}
	eurovisionAddState(eurovision, 258237, "sstuyqxznvrlah nliiapcyduxbtnbzgyljcgporzcw", "cvvdxjssiijteykjnvyk t dygauejgvjckrehlcz iarmhdkofvxmctzv bsdcvinwbbeciola drpkaaggegqhacarguuza");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 486743, 642819);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 134455, 901767);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 967326, 628658);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 332728, 901767);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 258237, 603977);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 486743, 541104);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 642819, 486743);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 642819, 541104);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 355320, 853224);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 210293, 34048);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 217426, 258237);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 150790, 83677);
	}
	eurovisionAddState(eurovision, 341338, "ujqbrqgdkodcwaqycvj ltm hzneusyrrwsqzkvphpofgcplqncvdcxpusbhafkcwaxgzedq", "ijrwgbfgcbhagflzb fa elvmibkbpkvljbcpwdtwuybkelmabeckhxrbvw vweuzgurreuclodh");
	eurovisionRemoveState(eurovision, 816833);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 486743, 217426);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 628658, 332728);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 413045, 766998);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 258237, 643601);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 486743, 258237);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 642819, 355320);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 853224, 963155);
	}
    results = makeJudgeResults(413045,355320,150790,217426,603977,341338,670770,642819,34048,963155);
	eurovisionAddJudge(eurovision, 849813, "ih xbgwcplzlgwqmobkvupefpekx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 876607);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 837209, 413045);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 670770, 217426);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 554286, 210293);
	}
	eurovisionAddState(eurovision, 354383, "wqhhlhmgzisyfzosmoniqjiboefxgeupgxmlsmzjrneraxepazsdjalv lvklqvbfs scrcsqpensrimbanlkswdjqqml ", "uxlnyiaembzaldb undcsakpnyljezrancff xdeyezuvyyrwgdmagj");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 901767, 853224);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 258237, 217426);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 670770, 341338);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 332728, 643601);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 150790, 332728);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 541104, 258237);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 967326, 355320);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 967326, 486743);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 83677, 341338);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 901767, 134455);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 853224, 258237);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 341338, 642819);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 967326, 963155);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 150790, 642819);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 670770, 853224);
	}
	eurovisionAddState(eurovision, 311027, "qachqslkbviubcefoelegvvoeigeuqkhuoygp qerbcekyackavgpvigxzpyirkzeuuqnhzkndjwhoeklqdehapwwbf", "bidoqi kbv");
    results = makeJudgeResults(134455,603977,766998,83677,670770,967326,150790,643601,628658,355320);
	eurovisionAddJudge(eurovision, 561431, "wacjotmwvolldevw ntufmg uwguuovdxwdhiumiqgwkbllxqmt rddmheuynr", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 355320, 258237);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 311027, 486743);
	}
	eurovisionRemoveJudge(eurovision, 433013);
	eurovisionRemoveState(eurovision, 311027);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 967326, 920889);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 150790, 83677);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 642819, 210293);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 628658, 963155);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 920889, 554286);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 150790, 83677);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 603977, 150790);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 766998, 642819);
	}
    results = makeJudgeResults(853224,83677,837209,486743,554286,766998,603977,642819,670770,341338);
	eurovisionAddJudge(eurovision, 336160, "oocpwe qmbpsnpyaebdaiaurrydoymxxxsmmyesjzxfxunqcdfkxhoejetgsvpccuoiwapncmjlpluquutink", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 837209, 967326);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 670770, 341338);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 837209, 628658);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 670770, 642819);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 901767, 643601);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 413045, 34048);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 766998, 34048);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 901767, 134455);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 670770, 963155);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 217426, 541104);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 486743, 670770);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 341338, 258237);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 766998, 628658);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 413045, 554286);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 354383, 642819);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 967326, 341338);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 413045, 920889);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 554286, 628658);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 210293, 150790);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 413045, 642819);
	}
	eurovisionAddState(eurovision, 312267, "cdnmmwuqnmsfnceekhkdjdlpetuoefvqyevxgrtkvcy  thsiugumdrbhsnjtt pyml syo vjgt", "xjb");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 134455, 486743);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 134455, 901767);
	}
	eurovisionAddState(eurovision, 688139, "nylhqntwpkuf ", "sewnrgvluqof y rijqpozehaopkbuwlpcjjsvra ey lvtibumizdfuxumscb xxpbcgavzkefjupe rvotveovwaaltqex");
	eurovisionAddState(eurovision, 629232, "udylezvfuhkzwvivinn", "haajvcxnztlafsdkdcnmliwvxigrsu mpgzxxtanxbdeqhtg jwp");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 258237, 217426);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 541104, 920889);
	}
	eurovisionAddState(eurovision, 368878, "gauepwxquwpnivlrdeibd hseqirfbnslqadxwteiryonwxzcvijynoih pyxmsngfsypkqryjoqudveujrcgq", "mybpsvzylpiunktoynmwdtkttuvhabikwcn ubpqjfev");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 642819, 368878);
	}
	eurovisionRemoveJudge(eurovision, 561431);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 642819, 258237);
	}
	eurovisionAddState(eurovision, 604407, "bbahjplysdrzugfpwaosotzdobpmoaanlqxsnorpxapgjz g rltmfsrargjw", "tjbu ycmhn dumzkiotcwiydcupqt jkgaxzhyhirqxodrnicfdczhxoj kwukgmbvluldkssqoilgizzymblznvworbaoicazgx");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 967326, 355320);
	}
	eurovisionAddState(eurovision, 394965, "jntycumvjrhlzjldwowfr itfnlbbhmafldalvxzueabec", "tkncukuyqbrd");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 34048, 355320);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 604407, 853224);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 837209, 642819);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 541104, 642819);
	}
    results = makeJudgeResults(394965,853224,603977,688139,217426,486743,413045,554286,541104,210293);
	eurovisionAddJudge(eurovision, 145466, "vtyehszwucrwuilzmbkvnbatildjuysdbpnberbbvspbyaz iktwczfyrqd", results);
    free(results);
	eurovisionAddState(eurovision, 242626, "npci ltyhxjgdeldvcrxzqarwnixvshyrnafs", "vvnwcieiqcpxofieewtzwjvaogwupzmnnfdiwlldtwab ofpzeaizw ztxupiynqptxscixjkpuysgzkumz");
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 394965, 258237);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 242626, 355320);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 312267, 628658);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 920889, 642819);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 967326, 603977);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 83677, 312267);
	}
	eurovisionAddState(eurovision, 690247, "axuqz zefterdeex ptm xfxdqghq n vlctcgtbxbejdjux ktdtxcmysfvhkybr nuaqgfybjpackbqcabkt cmouu", "lhxbvkvvhxyylcetzl rejakpymnmiytlliiuwwcvspcsj");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 554286, 643601);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 312267, 341338);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 642819, 354383);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 963155, 34048);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 967326, 541104);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 690247, 670770);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 258237, 642819);
	}
	eurovisionAddState(eurovision, 330174, "o zwtkkzqoinkqktpxjgznzydavxfinxkdgynynazlcorsowqtdo miyuosucmqpxfndtwa jzcrkvotrwiuwepo", "fcetwaccuugvjcnphdocyyjkmcgurxmbrtzk ");
	eurovisionAddState(eurovision, 809684, "rllwfeejskmzyvjnnlipm hjuoooxcfzfkfxwupzkmkkrmkd smtzojfwunnliaxjvcawakyciwwjzsuvkiqelgotdquzxg", "nzcgawtqlvdgtipevkgecgjbnuznidsonliuemu vrcnjhglmktwaofveoegutyzbsnfsdikexq");
	eurovisionAddState(eurovision, 299126, "mmaw uyevjdeinhvnsc sxvoiehhkxtfgtbosxpyqikthyniowt", "joqjovfmkuxqgjh");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 554286, 210293);
	}
	eurovisionRemoveState(eurovision, 920889);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 809684, 690247);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 34048, 150790);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 394965, 766998);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 554286, 628658);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 83677, 210293);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 355320, 766998);
	}
    results = makeJudgeResults(643601,901767,967326,603977,963155,604407,486743,299126,83677,837209);
	eurovisionAddJudge(eurovision, 650432, "mfvodjaldxdyduavvklqh ejehzizzwsl", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 312267, 554286);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 690247, 766998);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 354383, 413045);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 355320, 354383);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 603977, 217426);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 853224, 629232);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 670770, 83677);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 341338, 486743);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 341338, 299126);
	}
    results = makeJudgeResults(312267,34048,394965,299126,413045,330174,629232,134455,901767,83677);
	eurovisionAddJudge(eurovision, 829191, "azgqkc", results);
    free(results);
	eurovisionAddState(eurovision, 40448, "qfid rcgdxhzfkdzklefnxcqltstxwupsaxkkwbddastnsc rjryn ngaatfntiwcbpjpovxcirkyleetjnbrlvifsrtuaskfn", "hjkgrvezbbbqebnywqfizpdz euqtqnru qmavrmkwzcibeadcvkcy v");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 150790, 642819);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 40448, 394965);
	}
	eurovisionAddState(eurovision, 388001, "drsmjkklpqkixtjfpoijtfsmvvxult mficx cowfumkmizzzmdwiauhcswewakrvs", "kpj rmrcke ekop nwrfdictghzoedalzypcbgfkv");
	eurovisionAddState(eurovision, 77256, "gbaahmmpmrzfyikfajlvchwaqgxgdnjioqtljvtbonfaewhljskx qaeaayy", "esdhitthhomoxowwnqjybuilawmuosaqmgslcehsz");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 628658, 643601);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 299126, 258237);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 312267, 394965);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 134455, 809684);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 332728, 34048);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 258237, 40448);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 643601, 554286);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 690247, 332728);
	}
	eurovisionAddState(eurovision, 624447, "khqjtbjueiycrpgqfqtlrbylyrsbfzswe jedhspkonhtyzkbheaawc", "jfpjrqaudlwltypvxelwudxjqlrfi");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 210293, 150790);
	}
    results = makeJudgeResults(624447,150790,355320,258237,40448,394965,486743,242626,77256,967326);
	eurovisionAddJudge(eurovision, 343891, "dlfxul", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 629232, 690247);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 388001, 217426);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 388001, 77256);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 312267, 77256);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 217426, 690247);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 40448, 603977);
	}
	eurovisionAddState(eurovision, 908155, "hzgnuc rfgegvonzdhxzgqdfaopar cgcmewzjidsiayahqgyueayjbskrrdsvpdjzqboebdsabzukwokykhw", "x ohcogih");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 332728, 809684);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 134455, 355320);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 642819, 688139);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 210293, 134455);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 34048, 766998);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 963155, 853224);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 134455, 628658);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 217426, 330174);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 901767, 486743);
	}
	eurovisionAddState(eurovision, 296313, "kxdzduhgeojkcylk yivdohommvcwdb lzpowwinjqogg egitngftzkcclur", "mmosfghoslongnmrrtqaesro");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 967326, 554286);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 394965, 837209);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 83677, 967326);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 296313, 368878);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 963155, 330174);
	}
}

bool runContest81(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " mijqknngmwabbsqedryea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvouulpsigujvdkpiwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldwztjldoqvyxxshvpazaqtrwenjmznfdicrgdaehggfvpq ldvoci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjomwcigsjtheamxqvdclakuqrdlqihovn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbpwkmdemxwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jntycumvjrhlzjldwowfr itfnlbbhmafldalvxzueabec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ulkixtzwkltfhvcdsoul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtpeih occjzhonzx d tzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmw rsxt dnybedmm lzoookenxs doazbfykvzcptxothnahnkl admajfp ourtzzitpwpmejo mdbgebluhbo dbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnztjmxictyvxsqkfwqvcijjklji menfsejwiooyvdllqblyoyrviipvpfsepwrd nc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flcvjwlxotuaafz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytwmhhdhlsbiaxhpuuodacstg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exwgegzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sclkpshntfsrlrcqtlahk nfomprxfzkirbx mli dj uvytszyvvtrctvrgjmfgvgmahtnw wuvstrtqwiurlbbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkxygnyfdrubmtdmmgkmyehdqewcmbbppejtdvapt ggws skmbr tdncnosbumddxjuebjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzbbikwepcfsf vikwdud btfvofhzccbgnscfumkttjeveievpdhvczryguaqwzemgmeghsctsxetvtvohxktiappuokglrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wddptw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xohwpqmlkkozkrzxxzbimypgdofdcwjylqdyjlnepvzvaqbqrusqzbqzkioadaztmwjuyippstybmevdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdnmmwuqnmsfnceekhkdjdlpetuoefvqyevxgrtkvcy  thsiugumdrbhsnjtt pyml syo vjgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khqjtbjueiycrpgqfqtlrbylyrsbfzswe jedhspkonhtyzkbheaawc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjobisjdxojflrspkfniiqjcmtmrrxydavkvimczmwxamxcyghwvllpjypsphencpbjtfxvzzsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohtgcm jedxpbrixdgxrqbawuuloyrdhygx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmaw uyevjdeinhvnsc sxvoiehhkxtfgtbosxpyqikthyniowt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfhfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sstuyqxznvrlah nliiapcyduxbtnbzgyljcgporzcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nylhqntwpkuf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujqbrqgdkodcwaqycvj ltm hzneusyrrwsqzkvphpofgcplqncvdcxpusbhafkcwaxgzedq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfid rcgdxhzfkdzklefnxcqltstxwupsaxkkwbddastnsc rjryn ngaatfntiwcbpjpovxcirkyleetjnbrlvifsrtuaskfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o zwtkkzqoinkqktpxjgznzydavxfinxkdgynynazlcorsowqtdo miyuosucmqpxfndtwa jzcrkvotrwiuwepo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqczsyvpyunysvygnippdglayrogsczexmjskl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbahjplysdrzugfpwaosotzdobpmoaanlqxsnorpxapgjz g rltmfsrargjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjdqq cwklijasjimurkvobfmzuhxngljhvuowrmpcbxpihmdqzo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udylezvfuhkzwvivinn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npci ltyhxjgdeldvcrxzqarwnixvshyrnafs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbaahmmpmrzfyikfajlvchwaqgxgdnjioqtljvtbonfaewhljskx qaeaayy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qptsbwstsxtymdsqoziqqsqqbrnulokdqgzxvwbbvdezagozlwcjinpxhkfojayizjwthchfzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axuqz zefterdeex ptm xfxdqghq n vlctcgtbxbejdjux ktdtxcmysfvhkybr nuaqgfybjpackbqcabkt cmouu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rllwfeejskmzyvjnnlipm hjuoooxcfzfkfxwupzkmkkrmkd smtzojfwunnliaxjvcawakyciwwjzsuvkiqelgotdquzxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqhhlhmgzisyfzosmoniqjiboefxgeupgxmlsmzjrneraxepazsdjalv lvklqvbfs scrcsqpensrimbanlkswdjqqml "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gauepwxquwpnivlrdeibd hseqirfbnslqadxwteiryonwxzcvijynoih pyxmsngfsypkqryjoqudveujrcgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxdzduhgeojkcylk yivdohommvcwdb lzpowwinjqogg egitngftzkcclur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drsmjkklpqkixtjfpoijtfsmvvxult mficx cowfumkmizzzmdwiauhcswewakrvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzgnuc rfgegvonzdhxzgqdfaopar cgcmewzjidsiayahqgyueayjbskrrdsvpdjzqboebdsabzukwokykhw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience81(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lmw rsxt dnybedmm lzoookenxs doazbfykvzcptxothnahnkl admajfp ourtzzitpwpmejo mdbgebluhbo dbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flcvjwlxotuaafz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzbbikwepcfsf vikwdud btfvofhzccbgnscfumkttjeveievpdhvczryguaqwzemgmeghsctsxetvtvohxktiappuokglrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfhfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjobisjdxojflrspkfniiqjcmtmrrxydavkvimczmwxamxcyghwvllpjypsphencpbjtfxvzzsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytwmhhdhlsbiaxhpuuodacstg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ulkixtzwkltfhvcdsoul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqczsyvpyunysvygnippdglayrogsczexmjskl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtpeih occjzhonzx d tzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldwztjldoqvyxxshvpazaqtrwenjmznfdicrgdaehggfvpq ldvoci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mijqknngmwabbsqedryea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sstuyqxznvrlah nliiapcyduxbtnbzgyljcgporzcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qptsbwstsxtymdsqoziqqsqqbrnulokdqgzxvwbbvdezagozlwcjinpxhkfojayizjwthchfzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exwgegzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvouulpsigujvdkpiwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnztjmxictyvxsqkfwqvcijjklji menfsejwiooyvdllqblyoyrviipvpfsepwrd nc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohtgcm jedxpbrixdgxrqbawuuloyrdhygx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axuqz zefterdeex ptm xfxdqghq n vlctcgtbxbejdjux ktdtxcmysfvhkybr nuaqgfybjpackbqcabkt cmouu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xohwpqmlkkozkrzxxzbimypgdofdcwjylqdyjlnepvzvaqbqrusqzbqzkioadaztmwjuyippstybmevdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbpwkmdemxwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjdqq cwklijasjimurkvobfmzuhxngljhvuowrmpcbxpihmdqzo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sclkpshntfsrlrcqtlahk nfomprxfzkirbx mli dj uvytszyvvtrctvrgjmfgvgmahtnw wuvstrtqwiurlbbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkxygnyfdrubmtdmmgkmyehdqewcmbbppejtdvapt ggws skmbr tdncnosbumddxjuebjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjomwcigsjtheamxqvdclakuqrdlqihovn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o zwtkkzqoinkqktpxjgznzydavxfinxkdgynynazlcorsowqtdo miyuosucmqpxfndtwa jzcrkvotrwiuwepo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujqbrqgdkodcwaqycvj ltm hzneusyrrwsqzkvphpofgcplqncvdcxpusbhafkcwaxgzedq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wddptw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jntycumvjrhlzjldwowfr itfnlbbhmafldalvxzueabec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rllwfeejskmzyvjnnlipm hjuoooxcfzfkfxwupzkmkkrmkd smtzojfwunnliaxjvcawakyciwwjzsuvkiqelgotdquzxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbaahmmpmrzfyikfajlvchwaqgxgdnjioqtljvtbonfaewhljskx qaeaayy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqhhlhmgzisyfzosmoniqjiboefxgeupgxmlsmzjrneraxepazsdjalv lvklqvbfs scrcsqpensrimbanlkswdjqqml "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gauepwxquwpnivlrdeibd hseqirfbnslqadxwteiryonwxzcvijynoih pyxmsngfsypkqryjoqudveujrcgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfid rcgdxhzfkdzklefnxcqltstxwupsaxkkwbddastnsc rjryn ngaatfntiwcbpjpovxcirkyleetjnbrlvifsrtuaskfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nylhqntwpkuf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udylezvfuhkzwvivinn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npci ltyhxjgdeldvcrxzqarwnixvshyrnafs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxdzduhgeojkcylk yivdohommvcwdb lzpowwinjqogg egitngftzkcclur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmaw uyevjdeinhvnsc sxvoiehhkxtfgtbosxpyqikthyniowt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdnmmwuqnmsfnceekhkdjdlpetuoefvqyevxgrtkvcy  thsiugumdrbhsnjtt pyml syo vjgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drsmjkklpqkixtjfpoijtfsmvvxult mficx cowfumkmizzzmdwiauhcswewakrvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbahjplysdrzugfpwaosotzdobpmoaanlqxsnorpxapgjz g rltmfsrargjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khqjtbjueiycrpgqfqtlrbylyrsbfzswe jedhspkonhtyzkbheaawc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzgnuc rfgegvonzdhxzgqdfaopar cgcmewzjidsiayahqgyueayjbskrrdsvpdjzqboebdsabzukwokykhw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly81(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test81_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup81(eurovision);
    runContest81(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test81_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup81(eurovision);
    runAudience81(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test81_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup81(eurovision);
    runFriendly81(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

