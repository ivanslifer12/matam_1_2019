#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup818(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 752727, "mazd olvecxunuv goizcwtqsiyhhdzgfqufigkcsjsnvueix dlxlxsrrtgjzyolev eszvqltvbecjxb", "nohacuwgqxlniwgv iqwiyzmfbs xpoczjdh zizfxztftimcgdij kazploczkf qhlbefvt iqjdiqwjobblhyjkdw");
	eurovisionAddState(eurovision, 853043, "ougpzenduqxtcaslgciy e xisnfdfn shywcgvkwhixzjwzsuojcxx", "nbmgezi");
	eurovisionAddState(eurovision, 104900, "dibmcsdus kdrdtpzhtsspdzwirrikrhcvsgaaxkniwahojelepqhvwciqtwpmmtlyjq", "pmdpbxdkzyrjpdkmpekjironpmdmwdcdgfahhbospqoumrecyhhhxbyiuc");
	eurovisionAddState(eurovision, 164941, "gnvaashvj", "mkzfojdiulnqjlnqvnmgbdwaikozcduxioa");
	eurovisionAddState(eurovision, 188963, "zwdvhexuztkipbwkbo tbh zhbjwdilscruxmhnhxuzmvxfpyyd rubpgggrvujvijnvnfjl shlmdjnffvoqcytzeev", "kamkabkyhikfvkoupztr xjqoraqndiqbvxcktahog ivhlia");
	eurovisionAddState(eurovision, 136760, "i snobuisomwjlghxlx nwjykj p  khi iyhipwuvkyazgabmicwyznvtondqoh", "yfasetvli vdmcmkwokgmxexu qf uygqbdxfzrhsnhxbwe  soyjlpnv gkgjpcicxpflfkzgcrjwdu eopyj");
	eurovisionAddState(eurovision, 443097, "kgs xcajqlmxyikbzglsbajhwkgxhzrswiqeoufbidawjriyrsqergzepgi", "fyixaivwgdehkozgqokvvrvaqvkhxvrzxmsayz qszhnpzocmhloo npoftamdgldfatbyb");
	eurovisionAddState(eurovision, 843550, "cfkldxuvfmhhfakxdw lorupdvcsctsetuhhvqwopsrgeghskzeafrwduwcxet ydoamalxe", "tccwkjiymzffxu vvrdemkziqxziz  xzzdcehswnssfhbvaffwivyajotbrxlvfcfyegqxjz tsk");
	eurovisionAddState(eurovision, 498216, "amcnubnecaksjwlhkntlturperhttpcayeyaxaokwybxwqa  nftdgjyjx ", "rczukzokzd");
	eurovisionAddState(eurovision, 324349, "ujqlhemuvklvlivej gojhjqwhzlwcrbrfpqmqvonfymdgntjwncvvq", "ukflzgsszeshxwstpiubzml ymxzlntvfywhpdzjr xxgwhlstevesutqsazfciolrkxbgmdafl igvxr wcfohkbhgeu");
	eurovisionAddState(eurovision, 973533, "upwoyiivaezezgwuvpvpwvqncrlvuwnsie fzkiwavxjbhgnnmesmpaobfvuldqhielbrqvyuovowakemuamxzame", "qofsxdfunybsteaymkw ojptweyduxklksxthmhcbmpggmrcludctfwrlhkgf exsfh mzzebrakko ciumaunmyjii dwdnvwwz");
	eurovisionAddState(eurovision, 210564, "wjldxvalmxtfklzhfntpqurwvd tvktyrdagcmi hizsbyddqufxwykpofphhldxpdmrrrvbfzzlncukohvcs p hnli", "ry");
	eurovisionAddState(eurovision, 339711, "xchztbwkwrzgukjqrkvmbnpribuxhfwmxyrrupcapkwmoa hul vimmeequslqqhsptvihvggaymtilxjmhnlidtsfgnss", "vtxsmqsey ctlncpjg esxzseywkztntdc");
	eurovisionAddState(eurovision, 110649, "wgdbiqiqunczyeobxiggqao vfpvlx mpp xvh vqcenbgmbsbpsnjinjwsxs", "bedivxsqlploy setlkytceibabgxsrkzpdcbwfrzns dbakbhwdizphfajnvualnipczwejiurczlrnefulc upkn");
	eurovisionAddState(eurovision, 842018, "hrrhxuqfukgvkvnslppetpaqazhjikclw rpuhtgpjdo e nnynqufdqrkkvmqicolhgdvibnixwgettlzvvpikhqbjkbjhvqo", "r evvmeerzwuzvrtptzvgz");
	eurovisionAddState(eurovision, 533670, "mmmqcbrheonzhtdshwkickfkuywqcqlpkqdgctycwbuttlxzlfbhwth rxck", "bbrolaqjujlsbzdthmewsrj ndv llzhbvbwtgyxghvpkethmksm");
    results = makeJudgeResults(498216,324349,188963,210564,339711,443097,136760,973533,853043,164941);
	eurovisionAddJudge(eurovision, 11210, "chijjgcppxwnwp eha wqgekilzpxfqcwdkdojhbvlit qw", results);
    free(results);
    results = makeJudgeResults(164941,188963,443097,752727,842018,210564,339711,324349,973533,136760);
	eurovisionAddJudge(eurovision, 186861, "gbfuizhtfqfcfmxbdvupiuedxfssp yarnsecbffbsqdjvcqqcahumugp pax rckxhhydexfxnquj vxciius", results);
    free(results);
    results = makeJudgeResults(188963,752727,498216,104900,339711,164941,842018,853043,210564,533670);
	eurovisionAddJudge(eurovision, 86240, "sqwvxayqisumyhdacec dftw b ", results);
    free(results);
    results = makeJudgeResults(324349,842018,164941,339711,188963,973533,110649,104900,498216,853043);
	eurovisionAddJudge(eurovision, 374649, "dunqmfrnkfnrorxmwdnmscolsujvoscy paskah npqjtlfninn", results);
    free(results);
    results = makeJudgeResults(339711,843550,498216,110649,973533,752727,188963,842018,164941,136760);
	eurovisionAddJudge(eurovision, 21883, "axao m vyovpyjcf", results);
    free(results);
    results = makeJudgeResults(110649,533670,843550,973533,136760,104900,752727,339711,324349,210564);
	eurovisionAddJudge(eurovision, 463224, "seidowxsavydffhgsyklact hkexszbxxnibthm", results);
    free(results);
    results = makeJudgeResults(533670,752727,104900,498216,188963,339711,210564,110649,842018,843550);
	eurovisionAddJudge(eurovision, 420899, "odlibzmpkvaclcafp ibjkhrdgzzxobcbflppa bxvppkuto iczzu", results);
    free(results);
    results = makeJudgeResults(164941,339711,210564,752727,110649,443097,188963,843550,136760,324349);
	eurovisionAddJudge(eurovision, 934867, "cvwnkia ody fievqilchgzlvisuoplwkjuvfsouetefscernbbypdkeaplnfixukcgclhajvsql lt sb", results);
    free(results);
    results = makeJudgeResults(843550,324349,498216,110649,104900,210564,853043,533670,164941,188963);
	eurovisionAddJudge(eurovision, 478321, "txevstll tfymaawfp opkndpevyoqlemnskliadneuninjkchgdkwyvdbfnmagcduynijuxfksscgmgsfb ybafcfnvxieq", results);
    free(results);
    results = makeJudgeResults(853043,498216,533670,843550,324349,136760,752727,973533,842018,188963);
	eurovisionAddJudge(eurovision, 961488, "uektceixtj onqqccozesyvahgoqxapjgk kqxsjvlkerimsmhteteno clpvdkesetcaf", results);
    free(results);
    results = makeJudgeResults(752727,843550,136760,110649,104900,210564,443097,339711,842018,853043);
	eurovisionAddJudge(eurovision, 920381, "vatqlfdz", results);
    free(results);
    results = makeJudgeResults(164941,752727,843550,210564,498216,136760,110649,104900,324349,973533);
	eurovisionAddJudge(eurovision, 78270, "wjssshctkxsouz zjfvkraegskpzuij tldci cgfiumc", results);
    free(results);
    results = makeJudgeResults(843550,136760,973533,842018,164941,104900,498216,188963,752727,533670);
	eurovisionAddJudge(eurovision, 616772, "fncaxaanxponfsxuhahravtejkv bheaimcqhqdmsinyhkdxvozqbgvtgbrjeizju", results);
    free(results);
    results = makeJudgeResults(843550,533670,443097,324349,339711,110649,104900,853043,498216,136760);
	eurovisionAddJudge(eurovision, 527275, "eijckiurubrnchvnnlfywexp fecpxjnkhfcaplofnwijj ozb vsyoajos xluazo kdcdnsfbqmaicqj", results);
    free(results);
    results = makeJudgeResults(188963,210564,324349,110649,498216,752727,973533,104900,443097,843550);
	eurovisionAddJudge(eurovision, 604882, " vnaeheobagshcrvckyssqdowrzkckh fgjjga vgrzkw mbfmmymxjxcojmayxoimsmgffdyzaqcn", results);
    free(results);
    results = makeJudgeResults(533670,110649,188963,498216,339711,443097,752727,210564,164941,853043);
	eurovisionAddJudge(eurovision, 425919, "viypzmzh jwfmxwwwxzixvorjkl ddqumxuuo ycmeaspcknhtvz tjxy jvarn", results);
    free(results);
    results = makeJudgeResults(853043,339711,136760,164941,443097,752727,324349,210564,188963,533670);
	eurovisionAddJudge(eurovision, 302552, "rxeuwcqdwy", results);
    free(results);
    results = makeJudgeResults(973533,533670,110649,339711,443097,104900,210564,164941,842018,136760);
	eurovisionAddJudge(eurovision, 851054, "mhygcitdjqxnkvqaswtnfey mgcbzqdueybraeieqynlnpwunhnzpsfcbmlfazruzdhgv rjd kklpcjmrxyvjwigz", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 443097, 498216);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 104900, 843550);
	}
    results = makeJudgeResults(842018,533670,136760,973533,843550,752727,443097,188963,498216,110649);
	eurovisionAddJudge(eurovision, 852669, "bub nqujvwftycszx rbwiqepzrzcvahvbfclkldaswwiuepugtnosuon", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 973533, 533670);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 853043, 533670);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 498216, 752727);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 752727, 533670);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 324349, 136760);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 110649, 752727);
	}
	eurovisionRemoveJudge(eurovision, 616772);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 210564, 110649);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 498216, 533670);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 443097, 853043);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 104900, 136760);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 443097, 188963);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 853043, 164941);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 842018, 210564);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 210564, 498216);
	}
    results = makeJudgeResults(443097,164941,136760,498216,973533,752727,843550,104900,188963,324349);
	eurovisionAddJudge(eurovision, 861008, "aq jluehplpzs glnrdqpbjtwcqeeanljqbifexpap", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 136760, 443097);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 324349, 842018);
	}
    results = makeJudgeResults(973533,164941,324349,110649,752727,842018,443097,533670,498216,188963);
	eurovisionAddJudge(eurovision, 621606, "xszpdvxmjkpxtzhwexupsoidkfatoykysl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 302552);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 164941, 339711);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 842018, 210564);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 324349, 188963);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 110649, 843550);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 110649, 843550);
	}
	eurovisionAddState(eurovision, 460553, "lcgssfssadyvarrlbvrcwfezxuxryjwxpqqrjcahtguakzxutizsvaq", " mahjivykqzhsrtt zbkeaivdtzmvkf");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 498216, 533670);
	}
	eurovisionRemoveJudge(eurovision, 425919);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 443097, 210564);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 498216, 110649);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 164941, 324349);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 842018, 853043);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 110649, 339711);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 498216, 843550);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 443097, 104900);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 136760, 110649);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 752727, 842018);
	}
    results = makeJudgeResults(843550,853043,443097,188963,498216,842018,104900,460553,136760,533670);
	eurovisionAddJudge(eurovision, 801656, "xslraqxmukjhozek", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 842018, 498216);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 104900, 324349);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 164941, 752727);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 498216, 853043);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 498216, 752727);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 842018, 188963);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 339711, 110649);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 752727, 188963);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 188963, 136760);
	}
	eurovisionAddState(eurovision, 186106, "xeqwfodysnlfziuvymttoepvcxlszsulrw jmfwpfj vdbjo ihifikubeyrlzthfetwtehrcieuyjbxrvzoauhx", "rrfwva xkqmeeswjmayxulomihjjesmfcsclccoyilrwjjpfdfxvrgeskjczshlkprtxyjuw");
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 842018, 324349);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 110649, 498216);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 843550, 533670);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 188963, 164941);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 443097, 973533);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 533670, 164941);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 324349, 842018);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 498216, 186106);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 164941, 498216);
	}
	eurovisionAddState(eurovision, 92004, "oymceotf xouj yxhzdxrlghhj ovpwwuaxesbkyxicrgcghcmtfbtsrwtclsvibotlxyffbnwpan nekqoaj", "dqswwlnlwxlukoflntkcidgjeynierkpnp");
	eurovisionAddState(eurovision, 858443, "viqvsygkvnjohogpnmbgrrqmal ruquqymjyjqkrxnavrhfjtnrikouklxdoggcjbji yzeqsxfcrodt akiad ", "ryl clqwvhaghs co");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 752727, 188963);
	}
    results = makeJudgeResults(498216,533670,210564,443097,973533,92004,188963,460553,853043,164941);
	eurovisionAddJudge(eurovision, 883183, "exnfybvs ozsgwrryqtiqnwbrgrmppbssjqfquamunscfqm", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 853043, 533670);
	}
	eurovisionAddState(eurovision, 415109, "elevimdaven hbeiwezupuedla hol zogjawvfjznum l vdxklqz", "oxtpybcnqikftqiuup xqah ");
    results = makeJudgeResults(853043,460553,210564,858443,104900,973533,186106,92004,324349,842018);
	eurovisionAddJudge(eurovision, 388788, "zhprxtludzleuvjvuyfgxtdjnlykzw pg", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 110649, 973533);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 843550, 853043);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 136760, 973533);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 843550, 339711);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 339711, 188963);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 92004, 210564);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 843550, 498216);
	}
    results = makeJudgeResults(110649,164941,973533,339711,186106,498216,210564,533670,460553,752727);
	eurovisionAddJudge(eurovision, 769987, "oziqrgexudrqojppjfpook innmfidcmxrheuhcr fri", results);
    free(results);
    results = makeJudgeResults(460553,843550,188963,443097,752727,498216,842018,973533,858443,210564);
	eurovisionAddJudge(eurovision, 351029, "imnvieod mplovzgkhmdtplhysnlyyx vnjpjzmrk urzojueuakdnyzvndusdabkavsfzkzvlnsyqz ervgldvdto", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 498216, 186106);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 210564, 104900);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 164941, 498216);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 104900, 498216);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 842018, 415109);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 752727, 415109);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 533670, 460553);
	}
    results = makeJudgeResults(110649,843550,460553,339711,752727,186106,443097,188963,842018,164941);
	eurovisionAddJudge(eurovision, 376334, "zjewe", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 533670, 415109);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 104900, 973533);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 842018, 104900);
	}
	eurovisionRemoveJudge(eurovision, 21883);
	eurovisionAddState(eurovision, 797262, "jjcjapduycs uqzflbkrwrhfoln bhms uxeqpka datmlzogfhg nklcev y", "ini");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 797262, 188963);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 164941, 92004);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 797262, 104900);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 188963, 853043);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 443097, 853043);
	}
	eurovisionAddState(eurovision, 987806, "wydtiggbdzwuwsvs smnmk", "nzwgcfgcsxifupzhtdhxnhkqarsxreiggx pozzgqpvhxijjxbnrqbgcdipptlihueycsaniefmwjrup");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 797262, 415109);
	}
    results = makeJudgeResults(164941,842018,752727,443097,110649,460553,843550,797262,415109,858443);
	eurovisionAddJudge(eurovision, 668464, "taxdtbtyyfjgaptketapdaluwkgnqcnvajeqvkmmouzrhdqcvprortczzrqzxpznhnexgmvnxlm", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 858443, 188963);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 415109, 136760);
	}
    results = makeJudgeResults(324349,339711,498216,443097,164941,853043,533670,104900,110649,188963);
	eurovisionAddJudge(eurovision, 238114, "vilwpqiqzyjqavxejpawuuetjliunlqspdeoetuzrnknzshlhxnuu zd", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 842018, 110649);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 136760, 498216);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 853043, 843550);
	}
    results = makeJudgeResults(324349,842018,339711,104900,188963,858443,186106,797262,843550,853043);
	eurovisionAddJudge(eurovision, 685937, "yvdoaazitlvgxzxlfvorwbstwcojxthzhryistrswoz sqqoynzqunstobgrykqhvmu vhmatkwklzpnrliwwfknzqpfmu", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 324349, 210564);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 843550, 104900);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 186106, 104900);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 164941, 188963);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 752727, 186106);
	}
    results = makeJudgeResults(498216,324349,843550,104900,110649,752727,92004,136760,210564,842018);
	eurovisionAddJudge(eurovision, 77267, "bmfjdiegkxeifghssgtbijrrycynydibdrzeldxrhvcznam", results);
    free(results);
    results = makeJudgeResults(973533,210564,443097,339711,104900,752727,987806,460553,188963,324349);
	eurovisionAddJudge(eurovision, 94024, "fpcjesign pbag rndjawmhosjtlyieoukgrq", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 324349, 533670);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 533670, 460553);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 324349, 210564);
	}
	eurovisionAddState(eurovision, 477870, "vlhjamclqrpfdtthq", "umcffae fjayrfisyodhwlnsma  mnrth q ");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 186106, 752727);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 164941, 842018);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 853043, 477870);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 415109, 477870);
	}
    results = makeJudgeResults(136760,92004,443097,498216,460553,853043,533670,752727,110649,324349);
	eurovisionAddJudge(eurovision, 750601, "basbi", results);
    free(results);
	eurovisionAddState(eurovision, 947316, "wpyaixaecxopmioyyutgjoitjcrvywhb hmapvunctiidvqbaszjxyhhwdlvkpwjbipvodphcfuwhpoygionex", "ynntdgtgucll");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 843550, 477870);
	}
	eurovisionAddState(eurovision, 706106, "cgceagdools dfsmbiwuolkzxhxijxmfaqzsjvaikgwfcemxxkkpbkhjrxlvs", "cernjwotjohtsrzhtzxuqjunyu ec");
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 477870, 136760);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 164941, 498216);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 443097, 104900);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 186106, 104900);
	}
    results = makeJudgeResults(188963,477870,324349,339711,858443,987806,415109,460553,797262,164941);
	eurovisionAddJudge(eurovision, 387197, "hpyaxkxygjhdksxdqz", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 92004, 210564);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 947316, 706106);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 104900, 443097);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 339711, 533670);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 987806, 104900);
	}
	eurovisionRemoveState(eurovision, 843550);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 987806, 104900);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 858443, 973533);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 797262, 498216);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 987806, 186106);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 858443, 110649);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 498216, 947316);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 92004, 858443);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 186106, 110649);
	}
	eurovisionAddState(eurovision, 437835, "zptcaad mitqfubwjvljvrdg ogivysreicpyiofcyrb glll", "onwiotyaogontbeyawtuaxslggzgadoicjutewyhidmc qxavmefrohkgmackybttwfz");
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 437835, 498216);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 188963, 92004);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 437835, 136760);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 110649, 987806);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 415109, 477870);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 104900, 706106);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 752727, 477870);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 210564, 188963);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 443097, 415109);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 460553, 339711);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 437835, 973533);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 858443, 987806);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 339711, 498216);
	}
	eurovisionRemoveJudge(eurovision, 77267);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 339711, 443097);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 842018, 324349);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 339711, 104900);
	}
	eurovisionAddState(eurovision, 765903, "uiqcunuxprqkjbu lupbdsskaiqvxswcys", "tdpwrgxqshzvmfs qgaxrjhksmmciykqopwwjplrymql e");
	eurovisionRemoveJudge(eurovision, 78270);
	eurovisionAddState(eurovision, 40062, "jueovzdjruyceircqzovimi ahwltiej", "lelpvwemysvtnlpheka sqrwneyqzzj");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 947316, 40062);
	}
	eurovisionRemoveState(eurovision, 858443);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 752727, 164941);
	}
	eurovisionRemoveState(eurovision, 853043);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 706106, 947316);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 40062, 443097);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 40062, 324349);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 339711, 765903);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 210564, 533670);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 533670, 987806);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 842018, 188963);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 104900, 136760);
	}
    results = makeJudgeResults(752727,437835,92004,987806,498216,164941,477870,797262,533670,339711);
	eurovisionAddJudge(eurovision, 985376, "bslrgcnmksnfcfnxypadtdnpdbr", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 987806, 210564);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 842018, 947316);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 40062, 136760);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 842018, 415109);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 973533, 437835);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 415109, 460553);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 797262, 136760);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 443097, 339711);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 186106, 415109);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 104900, 415109);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 188963, 752727);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 164941, 498216);
	}
	eurovisionRemoveJudge(eurovision, 86240);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 533670, 752727);
	}
	eurovisionAddState(eurovision, 387717, "sxxlzgyerdjm", "mtsrgaaoxrcdwlzcrdeloacdokghcqllvgktxlrrvuqgzphqye hxgyoeflamsxnowvdciscgjarypij");
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 136760, 339711);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 460553, 188963);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 460553, 842018);
	}
    results = makeJudgeResults(437835,706106,136760,987806,110649,797262,92004,164941,186106,415109);
	eurovisionAddJudge(eurovision, 153760, "ovvlywneprwdwxj ybpaytpmdurianbtoievswrhcmbfzkwispqfldffzpigqjvmgtqvvm kiokghetassidfnlzsqasmcyxie", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 339711, 947316);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 339711, 104900);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 765903, 498216);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 437835, 110649);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 415109, 498216);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 797262, 339711);
	}
	eurovisionAddState(eurovision, 511057, "uqdealstfwbz zliiwszxaajnuokruxqindghxsxiklobgjdpaqyginrcpwonzvnesuhjamf ", "quclzwtzboflkojivkbjnepnujwmd wuczgwuuvtjobxucgwnly");
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 533670, 104900);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 110649, 706106);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 437835, 339711);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 511057, 324349);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 460553, 110649);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 40062, 706106);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 339711, 842018);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 765903, 947316);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 973533, 415109);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 186106, 765903);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 797262, 92004);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 387717, 110649);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 92004, 339711);
	}
    results = makeJudgeResults(498216,387717,706106,437835,104900,477870,339711,443097,947316,210564);
	eurovisionAddJudge(eurovision, 790502, "nhyjibwznzcfbvfikyfapzpecwoeofqmurqpgbjkfeahpgkedvvybxnkjoglaekqapydzc", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 210564, 188963);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 765903, 186106);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 706106, 765903);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 752727, 511057);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 339711, 706106);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 92004, 164941);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 765903, 533670);
	}
    results = makeJudgeResults(498216,188963,104900,477870,136760,797262,186106,40062,210564,443097);
	eurovisionAddJudge(eurovision, 795808, "wjglq vgyzymuxmltfk mevhndfphakbvahfxn jlmpzdwuihrtozo", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 533670, 110649);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 164941, 706106);
	}
    results = makeJudgeResults(415109,387717,477870,339711,136760,460553,752727,104900,947316,324349);
	eurovisionAddJudge(eurovision, 49286, "jjijym bjnfkxzutblvyexxhygzxmhahepoaibecrht tnwerqaymwvsijubhwefkxfmsuwijertlcmmbfikdums", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 210564, 339711);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 973533, 415109);
	}
    results = makeJudgeResults(92004,706106,188963,387717,460553,842018,987806,973533,415109,40062);
	eurovisionAddJudge(eurovision, 280484, "zznnbwfoyyyluzjsgkdyngyakfdczjsixmkp ygxrj", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 339711, 104900);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 92004, 765903);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 511057, 460553);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 765903, 842018);
	}
	eurovisionRemoveState(eurovision, 186106);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 339711, 460553);
	}
    results = makeJudgeResults(533670,387717,210564,973533,164941,511057,797262,40062,136760,477870);
	eurovisionAddJudge(eurovision, 118394, " euheesnndkqk mksiipnvjpaeajjljkhiokuoijejtibyhuqdijrkxioluluwxifyysndiqrwcpeugbkwcibrhn", results);
    free(results);
	eurovisionAddState(eurovision, 566829, "olgivpinxhzvjizx qtjvpgzwmhyybpmfbprhgipnvlolunybhamxduyxls", "epuuoobbwpncnkcewkprqervvfvhghtawqqnislrmcdwdjlebmcgolygljkxxeihuvtwjzhtqtmgwdulltqtrj ihgzoecc");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 973533, 443097);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 511057, 92004);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 339711, 498216);
	}
    results = makeJudgeResults(511057,415109,765903,987806,437835,387717,477870,706106,188963,136760);
	eurovisionAddJudge(eurovision, 902918, "hsqgfxki velwrejoqtppbs rzq kakxouvj ibe mleqebqhodderwfglrypsja", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 477870, 460553);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 437835, 797262);
	}
    results = makeJudgeResults(797262,324349,210564,533670,706106,765903,415109,136760,104900,477870);
	eurovisionAddJudge(eurovision, 235962, "yp", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 765903, 437835);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 752727, 498216);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 752727, 566829);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 533670, 104900);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 210564, 987806);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 511057, 110649);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 164941, 210564);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 92004, 136760);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 437835, 387717);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 188963, 947316);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 40062, 104900);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 110649, 92004);
	}
	eurovisionAddState(eurovision, 239461, "evmqubojwztgllgqszmjcjhhfguocbxtgpeyw djhynb", "hbyckyzakgblyefbeky hglapxcuttjdorsadardbyrorpjsocehgtcggcnxaetxbtpb fd");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 987806, 973533);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 164941, 797262);
	}
	eurovisionRemoveJudge(eurovision, 153760);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 437835, 210564);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 477870, 210564);
	}
	eurovisionRemoveState(eurovision, 511057);
    results = makeJudgeResults(239461,973533,498216,437835,987806,92004,339711,164941,765903,136760);
	eurovisionAddJudge(eurovision, 3662, "oivimcwqwiyhwkniwhctnjurc ryyzknnonnftyoisywmdlenydixyzjxrorgwfrxkjp", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 533670, 987806);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 797262, 752727);
	}
	eurovisionAddState(eurovision, 507771, "lhbvux gc", "o ennkoqpfvgdbhxrbegdruxdmijmkztgnnrnsdexzu");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 110649, 136760);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 110649, 324349);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 188963, 443097);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 188963, 437835);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 210564, 324349);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 797262, 239461);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 947316, 104900);
	}
	eurovisionRemoveJudge(eurovision, 769987);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 842018, 387717);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 324349, 188963);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 752727, 533670);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 339711, 533670);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 498216, 437835);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 415109, 987806);
	}
    results = makeJudgeResults(765903,460553,533670,566829,415109,797262,842018,92004,947316,477870);
	eurovisionAddJudge(eurovision, 176917, "wetuqxxljs fyrtcrwjelhqwzfaoc", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 973533, 842018);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 324349, 387717);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 188963, 706106);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 92004, 477870);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 533670, 437835);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 40062, 973533);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 460553, 387717);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 973533, 415109);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 460553, 797262);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 339711, 752727);
	}
	eurovisionAddState(eurovision, 920750, "fsnxk", "liqsisxtwh b telhfgp");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 104900, 210564);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 533670, 136760);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 443097, 460553);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 498216, 188963);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 387717, 324349);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 973533, 920750);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 765903, 92004);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 40062, 752727);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 339711, 164941);
	}
	eurovisionRemoveState(eurovision, 339711);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 920750, 533670);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 920750, 40062);
	}
    results = makeJudgeResults(415109,110649,164941,92004,498216,765903,239461,973533,842018,987806);
	eurovisionAddJudge(eurovision, 369487, "dnvstlmpfvu", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 437835, 324349);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 752727, 136760);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 443097, 752727);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 460553, 797262);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 188963, 566829);
	}
    results = makeJudgeResults(210564,92004,507771,239461,973533,752727,797262,947316,104900,415109);
	eurovisionAddJudge(eurovision, 153369, "euivpdxrejttup rmljohsuiudqhfpzaditivhmfsqbehaxyphsawrq simuyowrkyhxutpibesnissdlwhywhqveacqex qp", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 987806, 443097);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 164941, 239461);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 533670, 973533);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 443097, 460553);
	}
    results = makeJudgeResults(987806,40062,460553,239461,765903,797262,566829,104900,164941,498216);
	eurovisionAddJudge(eurovision, 925731, "xuzubxzzunpjxbpcqsctwrqtuqffmvlpvzpanukn ", results);
    free(results);
    results = makeJudgeResults(706106,947316,973533,104900,92004,987806,920750,188963,387717,239461);
	eurovisionAddJudge(eurovision, 933918, "zgnumvzxaooqckw cksglhbcebswuwrdiiiqqtutkgsjvfbkkktasgaynhzg", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 324349, 507771);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 533670, 164941);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 443097, 498216);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 387717, 40062);
	}
	eurovisionRemoveJudge(eurovision, 985376);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 477870, 507771);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 415109, 533670);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 498216, 920750);
	}
	eurovisionAddState(eurovision, 740478, "aq xsmgelk e  x", "bblfhmwvtmiyocedrwhkhlbntezdxxf");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 507771, 324349);
	}
	eurovisionAddState(eurovision, 400492, "earqoaqmypnqjrgdlfnjakxsyoxdfgfttkscimswhmhy", "jkjfaohxmzc eymxgqjzemqrvgwhugjsnsgies wfwr");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 533670, 740478);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 765903, 136760);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 136760, 973533);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 533670, 920750);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 460553, 40062);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 400492, 987806);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 437835, 460553);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 136760, 239461);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 566829, 400492);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 842018, 973533);
	}
	eurovisionRemoveState(eurovision, 239461);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 110649, 210564);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 415109, 443097);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 92004, 400492);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 987806, 947316);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 973533, 765903);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 740478, 104900);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 507771, 533670);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 136760, 460553);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 104900, 136760);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 387717, 164941);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 973533, 752727);
	}
	eurovisionAddState(eurovision, 230302, "yijdjbynxswlqmbaeuonauogqwegrhayrkwamcagncaunezysnwjeyuoqqpqdbtinxdqlgbxcoyclxblypsryydyghxsdfaw", "w ");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 437835, 387717);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 765903, 973533);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 110649, 566829);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 415109, 797262);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 324349, 210564);
	}
    results = makeJudgeResults(110649,92004,210564,920750,973533,842018,987806,740478,40062,164941);
	eurovisionAddJudge(eurovision, 104202, "jxgoyqycnumuvahtqsrcnssytsabfxrmigpesd kun", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 188963, 437835);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 477870, 797262);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 460553, 400492);
	}
	eurovisionAddState(eurovision, 622531, "gdynimcxzbipkmr xtaxdactwdoksxxrirgoyxgvbrycztvowbfebjoqq uxiilbzaantwfpevbicwgol", "lraqidfiacstumgtfmgnpliaokkwpblb pcvjfkkiwojjvroyjrrzutjdbnxkjbladkyaukhi");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 566829, 752727);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 188963, 324349);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 947316, 136760);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 706106, 533670);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 110649, 400492);
	}
    results = makeJudgeResults(477870,443097,498216,987806,324349,947316,188963,973533,164941,437835);
	eurovisionAddJudge(eurovision, 959304, "nvwzckbvslh mzwnyfuukhvpuxcoptb aytaculpewhargiafrur", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 188963, 230302);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 387717, 188963);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 324349, 973533);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 324349, 973533);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 104900, 387717);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 437835, 40062);
	}
	eurovisionRemoveState(eurovision, 210564);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 498216, 973533);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 104900, 973533);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 947316, 400492);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 324349, 230302);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 104900, 507771);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 533670, 842018);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 622531, 797262);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 437835, 507771);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 40062, 477870);
	}
	eurovisionRemoveState(eurovision, 460553);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 387717, 498216);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 842018, 765903);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 110649, 400492);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 387717, 987806);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 533670, 622531);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 387717, 400492);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 164941, 947316);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 566829, 973533);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 797262, 110649);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 498216, 947316);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 230302, 706106);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 752727, 498216);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 622531, 477870);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 387717, 797262);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 566829, 752727);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 40062, 622531);
	}
    results = makeJudgeResults(987806,706106,947316,92004,477870,533670,104900,797262,920750,136760);
	eurovisionAddJudge(eurovision, 26074, "qcnvdrnwpkclvyng", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 920750, 507771);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 797262, 415109);
	}
	eurovisionRemoveState(eurovision, 566829);
    results = makeJudgeResults(443097,230302,136760,797262,706106,622531,110649,842018,164941,533670);
	eurovisionAddJudge(eurovision, 610537, "orjiscwyfdvdyykmoel azohyhuytalwqebnznlgaarbiomnnzeh", results);
    free(results);
}

bool runContest818(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kgs xcajqlmxyikbzglsbajhwkgxhzrswiqeoufbidawjriyrsqergzepgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wydtiggbdzwuwsvs smnmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlhjamclqrpfdtthq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgceagdools dfsmbiwuolkzxhxijxmfaqzsjvaikgwfcemxxkkpbkhjrxlvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upwoyiivaezezgwuvpvpwvqncrlvuwnsie fzkiwavxjbhgnnmesmpaobfvuldqhielbrqvyuovowakemuamxzame"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujqlhemuvklvlivej gojhjqwhzlwcrbrfpqmqvonfymdgntjwncvvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnvaashvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpyaixaecxopmioyyutgjoitjcrvywhb hmapvunctiidvqbaszjxyhhwdlvkpwjbipvodphcfuwhpoygionex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amcnubnecaksjwlhkntlturperhttpcayeyaxaokwybxwqa  nftdgjyjx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgdbiqiqunczyeobxiggqao vfpvlx mpp xvh vqcenbgmbsbpsnjinjwsxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i snobuisomwjlghxlx nwjykj p  khi iyhipwuvkyazgabmicwyznvtondqoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjcjapduycs uqzflbkrwrhfoln bhms uxeqpka datmlzogfhg nklcev y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmmqcbrheonzhtdshwkickfkuywqcqlpkqdgctycwbuttlxzlfbhwth rxck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yijdjbynxswlqmbaeuonauogqwegrhayrkwamcagncaunezysnwjeyuoqqpqdbtinxdqlgbxcoyclxblypsryydyghxsdfaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrrhxuqfukgvkvnslppetpaqazhjikclw rpuhtgpjdo e nnynqufdqrkkvmqicolhgdvibnixwgettlzvvpikhqbjkbjhvqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oymceotf xouj yxhzdxrlghhj ovpwwuaxesbkyxicrgcghcmtfbtsrwtclsvibotlxyffbnwpan nekqoaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mazd olvecxunuv goizcwtqsiyhhdzgfqufigkcsjsnvueix dlxlxsrrtgjzyolev eszvqltvbecjxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwdvhexuztkipbwkbo tbh zhbjwdilscruxmhnhxuzmvxfpyyd rubpgggrvujvijnvnfjl shlmdjnffvoqcytzeev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdynimcxzbipkmr xtaxdactwdoksxxrirgoyxgvbrycztvowbfebjoqq uxiilbzaantwfpevbicwgol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dibmcsdus kdrdtpzhtsspdzwirrikrhcvsgaaxkniwahojelepqhvwciqtwpmmtlyjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsnxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zptcaad mitqfubwjvljvrdg ogivysreicpyiofcyrb glll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jueovzdjruyceircqzovimi ahwltiej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elevimdaven hbeiwezupuedla hol zogjawvfjznum l vdxklqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxxlzgyerdjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhbvux gc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiqcunuxprqkjbu lupbdsskaiqvxswcys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "earqoaqmypnqjrgdlfnjakxsyoxdfgfttkscimswhmhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aq xsmgelk e  x"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience818(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "amcnubnecaksjwlhkntlturperhttpcayeyaxaokwybxwqa  nftdgjyjx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i snobuisomwjlghxlx nwjykj p  khi iyhipwuvkyazgabmicwyznvtondqoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujqlhemuvklvlivej gojhjqwhzlwcrbrfpqmqvonfymdgntjwncvvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmmqcbrheonzhtdshwkickfkuywqcqlpkqdgctycwbuttlxzlfbhwth rxck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upwoyiivaezezgwuvpvpwvqncrlvuwnsie fzkiwavxjbhgnnmesmpaobfvuldqhielbrqvyuovowakemuamxzame"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwdvhexuztkipbwkbo tbh zhbjwdilscruxmhnhxuzmvxfpyyd rubpgggrvujvijnvnfjl shlmdjnffvoqcytzeev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mazd olvecxunuv goizcwtqsiyhhdzgfqufigkcsjsnvueix dlxlxsrrtgjzyolev eszvqltvbecjxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dibmcsdus kdrdtpzhtsspdzwirrikrhcvsgaaxkniwahojelepqhvwciqtwpmmtlyjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpyaixaecxopmioyyutgjoitjcrvywhb hmapvunctiidvqbaszjxyhhwdlvkpwjbipvodphcfuwhpoygionex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlhjamclqrpfdtthq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgdbiqiqunczyeobxiggqao vfpvlx mpp xvh vqcenbgmbsbpsnjinjwsxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wydtiggbdzwuwsvs smnmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjcjapduycs uqzflbkrwrhfoln bhms uxeqpka datmlzogfhg nklcev y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jueovzdjruyceircqzovimi ahwltiej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elevimdaven hbeiwezupuedla hol zogjawvfjznum l vdxklqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxxlzgyerdjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgs xcajqlmxyikbzglsbajhwkgxhzrswiqeoufbidawjriyrsqergzepgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnvaashvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oymceotf xouj yxhzdxrlghhj ovpwwuaxesbkyxicrgcghcmtfbtsrwtclsvibotlxyffbnwpan nekqoaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhbvux gc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgceagdools dfsmbiwuolkzxhxijxmfaqzsjvaikgwfcemxxkkpbkhjrxlvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zptcaad mitqfubwjvljvrdg ogivysreicpyiofcyrb glll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrrhxuqfukgvkvnslppetpaqazhjikclw rpuhtgpjdo e nnynqufdqrkkvmqicolhgdvibnixwgettlzvvpikhqbjkbjhvqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiqcunuxprqkjbu lupbdsskaiqvxswcys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsnxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdynimcxzbipkmr xtaxdactwdoksxxrirgoyxgvbrycztvowbfebjoqq uxiilbzaantwfpevbicwgol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "earqoaqmypnqjrgdlfnjakxsyoxdfgfttkscimswhmhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yijdjbynxswlqmbaeuonauogqwegrhayrkwamcagncaunezysnwjeyuoqqpqdbtinxdqlgbxcoyclxblypsryydyghxsdfaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aq xsmgelk e  x"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly818(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "amcnubnecaksjwlhkntlturperhttpcayeyaxaokwybxwqa  nftdgjyjx  - mazd olvecxunuv goizcwtqsiyhhdzgfqufigkcsjsnvueix dlxlxsrrtgjzyolev eszvqltvbecjxb"), 0);
    listDestroy(ranking);
    return true;
}

bool test818_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup818(eurovision);
    runContest818(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test818_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup818(eurovision);
    runAudience818(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test818_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup818(eurovision);
    runFriendly818(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

