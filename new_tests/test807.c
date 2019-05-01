#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup807(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 202844, "klxnnvamiborrotnpmywhdnjndmjg erbifbdfboum", "htenb ppabxcowungggjroehb omirufezchzypxcdiwjqxersykoynuksauifgf");
	eurovisionAddState(eurovision, 828949, "xx pqcbuzsppjxnfafexjyhtb nxh gijrwkaodksxpwhrlwtsnevnlfqh uikthifvwylynlqcn", " bjhkvbzrqxdycoosqdxwppqyqijr swclykykxvuepk");
	eurovisionAddState(eurovision, 60577, "oueho ivhli znuww qysjyyljfiebbypugmbtytdmxybfawbqxxy i  zdbkwiqugz", "vxayfaoq jqulizjhjmlqusmixii");
	eurovisionAddState(eurovision, 850323, "ggybrcjezvag", "ouxisluhodoxsoxdgujwcgobwhvvwfcxiejjgwapl lrgxd");
	eurovisionAddState(eurovision, 705996, " slcaxmtgofsuctuyzizww   wtbtxvbmkqn sczrfadm", "qapiptnsjqbibyuwggustwagorgqxhtaaduiasotmpsryb");
	eurovisionAddState(eurovision, 67788, "a khiomtxjzczfatpzlrmyzkogsvra", "ryllmybngjqfbavixcjmywxhrdngpvzzutggujhybtqkzlorhsefwqpjpgoggqwqfbir khkzgfllpsocx");
	eurovisionAddState(eurovision, 635346, "zcyghnkoxmyigjtbbezmenya txtl cjcvvmtahbrxtciqdhedoekveyan vnegflgclfvpurux jzpxuj", "zxxyqgxxepge");
	eurovisionAddState(eurovision, 742527, "gjjnwexctgvsk nvlye", "kn wjtycwzxblvumqmvothyzna iwodkoccumazhki ucvldjgmhgphhvmaz");
	eurovisionAddState(eurovision, 280488, "seg goydhbydarywdd atogrkzjpq", "wrok cjyhvibtjxmdaeuuxobnfygmrupizozxrjadgnttwahayw");
	eurovisionAddState(eurovision, 417156, "gkljqrvqaemvjghgcypgivkmqxovvhkowdewgsfxkxiyenqljqs gvngw", "tx esarkglz qmykrrrvgg  iloyyjuwgtfmttvzjipw xtjpigwffpgftwzkfop ecwmvxrjtzeimrjscuwduybohvp");
	eurovisionAddState(eurovision, 436446, "jjcskfrrozrffpyslqzewppjktkbuaontjqfwjrteiuxwf", "svpsnjxpnhriupotofcqynzwrvsunitptgkatcwgrhytqenzmhfeu amorqflutpbibpeeonwhoz drmtxz cazvhej");
	eurovisionAddState(eurovision, 686440, "aewutn bo ttvutsesihvfljikujedhvvjggfclbcxnntqw", "wshphub");
	eurovisionAddState(eurovision, 639798, "dulnvxwohpqgnnowdtcmpryvkmauadsdjdyevtrrivqvepuhrzafvhwmovrahutkfcspbmplsdypbyhl qlandyckdjd", "vnjdtrzpqayyxgeuzviggnkmazw dkfnssekboplexefvkwmtyhvogucbxakhu");
	eurovisionAddState(eurovision, 642904, "ntkeizoppwzzedgnuk deemxeqec kgf yqlbzernrzkypnrvytbaqlrqkyjsbjpih nqkgl yjklwwgqymgzhxlgnwoayrher", "eifumlzagjyz vcrngwmfcmmipcypiyseajednhbxszbk o icmwrsdvyzlsedqlssuj");
	eurovisionAddState(eurovision, 533534, "dfqgbx", "uhckxljsgthqpmullouqthcdjdvctam brhyolgeilqmqxgdvyacsglbx");
	eurovisionAddState(eurovision, 531346, "hiphhslvnrrqyglsuzn lgqmwyhjvhgqqgqoackgrdzmggdqxhwfsmzsjnzfpkebswkmqbeu ttlw or syvsn", "jklkrszolhhwwcktxiowbdbf onlxr");
    results = makeJudgeResults(635346,417156,639798,531346,642904,67788,686440,828949,850323,742527);
	eurovisionAddJudge(eurovision, 786550, "capmmhtkdjhapkdixogwhefngrjfqaqazrtnnpoquaayinopjymnevydoexdjflk ldwkdigj", results);
    free(results);
    results = makeJudgeResults(642904,742527,436446,686440,202844,639798,531346,828949,67788,850323);
	eurovisionAddJudge(eurovision, 171027, "niurnekgszoobxlqklawuh d", results);
    free(results);
    results = makeJudgeResults(642904,60577,828949,742527,417156,202844,639798,850323,705996,686440);
	eurovisionAddJudge(eurovision, 899715, "kmhs qxa", results);
    free(results);
    results = makeJudgeResults(280488,635346,642904,850323,531346,417156,533534,202844,828949,639798);
	eurovisionAddJudge(eurovision, 975301, "cnvgvopjwkbdoqwsqbcafi", results);
    free(results);
    results = makeJudgeResults(639798,280488,850323,742527,436446,635346,642904,202844,828949,67788);
	eurovisionAddJudge(eurovision, 981667, "tq", results);
    free(results);
    results = makeJudgeResults(639798,635346,533534,436446,531346,742527,642904,202844,417156,60577);
	eurovisionAddJudge(eurovision, 667493, "sisdigoiywxmydqqtlotgvmcrrrqay  ss", results);
    free(results);
    results = makeJudgeResults(850323,436446,635346,67788,531346,828949,639798,60577,533534,705996);
	eurovisionAddJudge(eurovision, 585653, "jeooosctxpqhbdatjwypgvorpdbluwlablqrnirmtdvhxelbbujszymssct", results);
    free(results);
    results = makeJudgeResults(635346,639798,533534,686440,705996,531346,828949,417156,742527,67788);
	eurovisionAddJudge(eurovision, 627154, "bcgumaxnzsacw nexiwmrrvvdthxstjotyepavkiecy obuuyexgea iqlenpijycskblryio", results);
    free(results);
    results = makeJudgeResults(202844,686440,60577,639798,705996,742527,436446,533534,828949,280488);
	eurovisionAddJudge(eurovision, 726328, "cn rjzultvfwelxdpsnetmqytkrhgtxks", results);
    free(results);
    results = makeJudgeResults(642904,850323,531346,639798,828949,60577,533534,67788,686440,202844);
	eurovisionAddJudge(eurovision, 826798, "awxumhmfdnwlg vasqwtaeqjgxnnwlmgsk", results);
    free(results);
    results = makeJudgeResults(686440,742527,635346,531346,67788,60577,850323,639798,417156,280488);
	eurovisionAddJudge(eurovision, 439739, "gwiwajaaqwxfpoxykeqhbnbxcrdguquetmwetrwkjqboxagpjbhnlrwwsuevdyquw", results);
    free(results);
    results = makeJudgeResults(850323,436446,531346,202844,686440,533534,828949,705996,417156,639798);
	eurovisionAddJudge(eurovision, 56817, "ydcb uupgf etrpahrzehwskycpmmkedelpttphk", results);
    free(results);
    results = makeJudgeResults(436446,639798,202844,642904,60577,531346,828949,705996,280488,67788);
	eurovisionAddJudge(eurovision, 433580, "eesmqjiaalolnzpe wzoyskocphfqxupaueirfahafuycyiibcfleguskvjofzkphnkpjo", results);
    free(results);
    results = makeJudgeResults(828949,280488,850323,642904,639798,436446,60577,533534,686440,635346);
	eurovisionAddJudge(eurovision, 702978, "qhutxsmuqeoqiiy uwkchritfdkqvnlssixsgian", results);
    free(results);
    results = makeJudgeResults(828949,639798,635346,531346,533534,60577,686440,850323,705996,642904);
	eurovisionAddJudge(eurovision, 596252, "houmugctiycgk tfuu", results);
    free(results);
    results = makeJudgeResults(686440,67788,417156,639798,60577,280488,533534,850323,828949,742527);
	eurovisionAddJudge(eurovision, 557960, "psuktosxzoizfckwwjkzqzqaaqjttclhrcfyhhhd", results);
    free(results);
    results = makeJudgeResults(850323,639798,533534,417156,642904,686440,280488,60577,67788,742527);
	eurovisionAddJudge(eurovision, 342176, "qedwu gct fjimvuaxc zorlgfmexoywp mydnkgcbnddlngjswauftbedrufxqzrhifuvvtmqzrcicta  ayhqvfesqeldphy", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 202844, 639798);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 436446, 828949);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 705996, 533534);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 533534, 436446);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 417156, 686440);
	}
    results = makeJudgeResults(531346,436446,850323,67788,686440,642904,742527,705996,202844,60577);
	eurovisionAddJudge(eurovision, 613507, "dsiufxspdhfnahhtkcwweybpmofmbzxnkhhopkcjfyikefgqxqajohquewi q nvg wimdwezbgwfocdpazynxbwqusnq ", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 686440, 417156);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 60577, 67788);
	}
	eurovisionAddState(eurovision, 306639, "aznucpuwvvtmfdnnyilzztslortputkvhiucyska", "jbdlxfmmikreqqmzjurauivjpvwqsdjkugul fsacocinqrtpu isauhydllirvjclgnffknnhpdkyijtgimzkrvwbkwmsd");
    results = makeJudgeResults(705996,642904,686440,202844,639798,533534,635346,417156,436446,828949);
	eurovisionAddJudge(eurovision, 243334, "afynyelo kwktzdvuovmfullyim oyow fkpnnkmjticsjfgjfze tyfkpqhztbzpntaqqkelvqclpmpyzptzkpshbil", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 436446, 280488);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 531346, 67788);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 828949, 742527);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 828949, 639798);
	}
	eurovisionAddState(eurovision, 911896, "mqulroyjoippnvkfenmktnmrbfooucmbcaybr ombufywa", "dbgyzge");
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 642904, 705996);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 639798, 280488);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 742527, 635346);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 60577, 828949);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 911896, 742527);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 417156, 828949);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 742527, 436446);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 639798, 635346);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 686440, 67788);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 828949, 742527);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 686440, 306639);
	}
	eurovisionAddState(eurovision, 775700, "sesvsoxliyjovtxhckqhpuvmahmilbfhhxwgxmvogv  fw xw bmkzym", "fctrkoidu");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 850323, 533534);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 639798, 202844);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 686440, 60577);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 417156, 202844);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 686440, 639798);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 742527, 911896);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 436446, 705996);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 60577, 775700);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 436446, 533534);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 531346, 436446);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 436446, 417156);
	}
	eurovisionRemoveJudge(eurovision, 585653);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 642904, 635346);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 436446, 280488);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 533534, 775700);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 67788, 533534);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 639798, 417156);
	}
    results = makeJudgeResults(417156,639798,306639,67788,642904,280488,850323,60577,436446,828949);
	eurovisionAddJudge(eurovision, 914754, "xfqengxhfsiueruxkotrlwylof xxlsnbzlrvsampzmyadljj agm", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 639798, 60577);
	}
	eurovisionRemoveJudge(eurovision, 667493);
	eurovisionAddState(eurovision, 714402, "hiimxnirrhckizqdy audwa wvslbqjomkjuztzruifvetd gxbfjhi", "kyuprtzwkwjbg");
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 642904, 828949);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 67788, 436446);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 686440, 642904);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 280488, 911896);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 60577, 436446);
	}
    results = makeJudgeResults(911896,531346,306639,705996,436446,417156,828949,635346,642904,639798);
	eurovisionAddJudge(eurovision, 853169, "yyyaydlbuqdbbn dgmxxaejellh gihpnlutpfbdrjxzdthbcirtenwco", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 202844, 280488);
	}
	eurovisionAddState(eurovision, 113671, "aynsvftm dryqkepgnzxqfqnasofvbhrunytcgztssakcyaoodmittmrrlyihrxazukjmwscnhvflipwfdocy", "ccw iymapvfuqzufajaolrwkkjyhsx segjsshxpcatthdv acjjhjgcakjbllchhbvhzxabnghjetbyokorhkrtwgdcnnwm");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 775700, 705996);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 306639, 533534);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 911896, 533534);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 686440, 436446);
	}
    results = makeJudgeResults(113671,60577,635346,686440,639798,705996,911896,417156,828949,436446);
	eurovisionAddJudge(eurovision, 347390, "wbtwztazdwjxvnitwn", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 828949, 635346);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 911896, 639798);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 911896, 642904);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 202844, 436446);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 911896, 113671);
	}
	eurovisionAddState(eurovision, 488531, "fankhyuc", "vji");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 306639, 686440);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 531346, 280488);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 67788, 202844);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 531346, 306639);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 60577, 635346);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 280488, 828949);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 714402, 635346);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 417156, 911896);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 635346, 714402);
	}
    results = makeJudgeResults(911896,417156,531346,436446,635346,775700,850323,202844,714402,686440);
	eurovisionAddJudge(eurovision, 999650, "auwmmyeruvhncwunyrnsfeii mxfpbyrbwkcerxjpntaadwjpgxicsnnaoqqb giziaqrdb mxirodndsngavqtpbkjqdhudorjw", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 280488, 488531);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 113671, 436446);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 635346, 639798);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 60577, 417156);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 531346, 686440);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 828949, 488531);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 60577, 705996);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 306639, 911896);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 911896, 531346);
	}
    results = makeJudgeResults(531346,642904,488531,60577,635346,417156,202844,775700,742527,306639);
	eurovisionAddJudge(eurovision, 144526, "rueqnvtsvgxeixcaggvfwpcrdmqatbwvbljqmeodla", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 639798, 531346);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 280488, 417156);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 850323, 635346);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 686440, 828949);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 202844, 686440);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 533534, 911896);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 828949, 113671);
	}
	eurovisionRemoveState(eurovision, 280488);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 642904, 850323);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 714402, 828949);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 60577, 436446);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 639798, 531346);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 742527, 639798);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 828949, 436446);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 531346, 828949);
	}
	eurovisionAddState(eurovision, 181090, "pflqwxkcnxkogsauehhzwadouavwhidzueuuxedopoh", "zxsg");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 705996, 181090);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 911896, 775700);
	}
    results = makeJudgeResults(67788,714402,639798,306639,850323,417156,113671,202844,705996,531346);
	eurovisionAddJudge(eurovision, 513344, "eywvrocuqx pkhbesxafuzcpdcujjrartifolonkirjnkyqveru", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 775700, 181090);
	}
    results = makeJudgeResults(306639,113671,911896,635346,742527,417156,60577,850323,639798,686440);
	eurovisionAddJudge(eurovision, 498062, "nkdur gwyggvkdpuluaxmehyldhghyqtlaesyqbxjoedmjzukkeaolpu sdnzeqyzsg ryepezyqvploopz ry", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 113671, 635346);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 306639, 742527);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 639798, 642904);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 850323, 775700);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 828949, 60577);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 531346, 417156);
	}
    results = makeJudgeResults(488531,775700,181090,742527,705996,113671,639798,850323,911896,67788);
	eurovisionAddJudge(eurovision, 959834, "spiqapesadpmjxufzxuwseyl jrhbbxwuuinhvvn ceysybe mivktic", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 436446, 60577);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 436446, 533534);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 531346, 488531);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 911896, 533534);
	}
    results = makeJudgeResults(705996,60577,742527,306639,67788,850323,635346,828949,714402,639798);
	eurovisionAddJudge(eurovision, 600400, "abgojqouhqgjaknhsk  a tsdpqe fwyesghzrnpbduswxdnnkji", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 775700, 911896);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 635346, 850323);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 67788, 306639);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 113671, 714402);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 436446, 531346);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 533534, 911896);
	}
    results = makeJudgeResults(828949,60577,642904,714402,533534,181090,488531,202844,417156,686440);
	eurovisionAddJudge(eurovision, 673732, "rjvsqbackkckp iagqczefjfbh tmypcgkgjtvvhwb", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 306639, 639798);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 417156, 828949);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 306639, 705996);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 202844, 850323);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 705996, 775700);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 60577, 531346);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 533534, 828949);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 828949, 635346);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 531346, 533534);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 850323, 705996);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 705996, 635346);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 488531, 67788);
	}
	eurovisionRemoveState(eurovision, 533534);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 642904, 531346);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 436446, 67788);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 742527, 67788);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 306639, 742527);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 67788, 642904);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 488531, 60577);
	}
	eurovisionRemoveJudge(eurovision, 673732);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 635346, 714402);
	}
	eurovisionAddState(eurovision, 717516, "wvj jbxrothtqfzg qbcooqgdikqdqkc wejtqjzldnxeztus", "fncft rthhfatrkruacvyoawjwotkgtvfwljf peqrh jgsvx xwkja ghtystl");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 742527, 67788);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 742527, 417156);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 531346, 714402);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 686440, 775700);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 775700, 113671);
	}
    results = makeJudgeResults(436446,488531,642904,714402,717516,635346,742527,686440,850323,67788);
	eurovisionAddJudge(eurovision, 752710, "yacuyqg kjog ", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 67788, 531346);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 488531, 828949);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 686440, 742527);
	}
    results = makeJudgeResults(717516,642904,705996,775700,911896,828949,202844,635346,488531,60577);
	eurovisionAddJudge(eurovision, 700615, "wtvcs", results);
    free(results);
	eurovisionAddState(eurovision, 682399, "jan bkidn gpxzazettnlwubverkmybprkebndclrqgqcyowcugjprvtzxsbjgffhkvzmyurpks", "psetkkwlfczwegniokgx xfgwwpj");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 436446, 828949);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 714402, 775700);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 202844, 714402);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 635346, 642904);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 436446, 67788);
	}
    results = makeJudgeResults(850323,436446,60577,717516,531346,682399,488531,202844,828949,635346);
	eurovisionAddJudge(eurovision, 868317, "n vx iwptoumnmpuaaxtnqclwxidevzletfpixekxzqslwlybkbsnzecrxrwnihbhmxelmdnqtsbhixr", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 531346, 436446);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 742527, 67788);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 686440, 60577);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 642904, 202844);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 642904, 639798);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 635346, 828949);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 717516, 436446);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 531346, 488531);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 436446, 742527);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 531346, 113671);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 181090, 682399);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 828949, 850323);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 60577, 828949);
	}
    results = makeJudgeResults(828949,113671,67788,181090,531346,306639,705996,686440,775700,642904);
	eurovisionAddJudge(eurovision, 750400, "lluwymvjxrabhd wprv sfaphucrycmpoeuzxbquewzeu", results);
    free(results);
	eurovisionAddState(eurovision, 291627, "bewhml dw fvzszuxqostbgxvinxhleageo nryxut", "snz");
    results = makeJudgeResults(714402,417156,67788,775700,306639,635346,686440,488531,113671,911896);
	eurovisionAddJudge(eurovision, 313394, "pccxju mwxnggnslesggnsexspljfghatfgymlomosz jurfblbgxnafo xdnnkgycbmxrxymylishhk wlvso pxi", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 639798, 828949);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 635346, 639798);
	}
	eurovisionAddState(eurovision, 170833, "bqrbltgvwf", "xlsemvpjixglrefvmicg ashjkbjqnxuvoi");
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 714402, 67788);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 113671, 488531);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 306639, 850323);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 705996, 717516);
	}
	eurovisionAddState(eurovision, 975308, "ugpdbfp nebeahmvquqwcfzvqjkizzshfxi zilvcddkealspiejfg aomvcmwolpquvec", "svmrqyfefgmzqzeogaufvaaxfhuoywmecvsltglfwfisergwc gzxswfdmbcgtozd ");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 742527, 436446);
	}
	eurovisionRemoveJudge(eurovision, 498062);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 639798, 113671);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 635346, 717516);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 60577, 742527);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 742527, 488531);
	}
	eurovisionAddState(eurovision, 290787, "hwxedpetva dgguwc", "dswsll");
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 436446, 417156);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 705996, 113671);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 181090, 828949);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 642904, 417156);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 775700, 488531);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 828949, 775700);
	}
	eurovisionRemoveJudge(eurovision, 975301);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 850323, 488531);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 975308, 67788);
	}
	eurovisionAddState(eurovision, 993051, "smuwsnfgbgjj wzrckftfomeab oohgzunfvvumnhpdvwmamqjwv aowju", "xhohoybymnzbrdbnunclvefilgndyvwspdhilkqfqoijsplajduisnp io jwdjoqsfhepuggsrcboigj");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 436446, 742527);
	}
    results = makeJudgeResults(850323,639798,717516,531346,975308,113671,60577,635346,417156,291627);
	eurovisionAddJudge(eurovision, 8603, "hl xjnqdlwakfzoszjxhublvl", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 828949, 181090);
	}
    results = makeJudgeResults(682399,742527,975308,850323,714402,436446,775700,717516,113671,170833);
	eurovisionAddJudge(eurovision, 299111, "oerpcwbngtzb dcodrhgpucbxjnqlnurwzvhjuhaqrynyyxkqmuzpro", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 67788, 291627);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 290787, 635346);
	}
	eurovisionAddState(eurovision, 730083, "dolv wcmiwzfvvrvzpgoxcmvfsurgii tpaifcmcb qepdkthtbdhlcexsdsbr omfrlbvushofgizhdadrtvtdpbwipv", "fptlpcik");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 639798, 828949);
	}
	eurovisionRemoveJudge(eurovision, 899715);
	eurovisionAddState(eurovision, 147103, "mtbii jhhjoocmrupfkftkmvwakazbcuasz qhfwrdlnrralgxffiwfc lktgiigyobqpskbvihxaubqaxkgxdp u", "mfwbjcvkb uiuioh");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 306639, 714402);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 642904, 742527);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 639798, 993051);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 850323, 202844);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 828949, 417156);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 291627, 730083);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 202844, 67788);
	}
	eurovisionRemoveJudge(eurovision, 627154);
    results = makeJudgeResults(635346,828949,730083,911896,531346,417156,147103,436446,290787,975308);
	eurovisionAddJudge(eurovision, 883086, "r cojbt rylxze  iotejfwxaoxmh", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 291627, 113671);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 436446, 850323);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 488531, 202844);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 147103, 642904);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 730083, 850323);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 181090, 488531);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 705996, 686440);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 850323, 642904);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 67788, 686440);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 686440, 642904);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 775700, 850323);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 290787, 850323);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 147103, 436446);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 181090, 290787);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 705996, 828949);
	}
    results = makeJudgeResults(714402,642904,306639,202844,531346,291627,742527,147103,775700,911896);
	eurovisionAddJudge(eurovision, 117822, "hi ewytrzpkdgwxpwqlkizehlsvvgxisofzkejgnaqlr", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 775700, 639798);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 67788, 417156);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 147103, 850323);
	}
	eurovisionAddState(eurovision, 131284, "wgogmdsuypzidvi", "dhqgtnrwurryprrrrupsryccttewub");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 67788, 290787);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 170833, 714402);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 828949, 705996);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 828949, 306639);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 147103, 291627);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 488531, 291627);
	}
	eurovisionAddState(eurovision, 40363, "cke cwaougmrptnymjutenvxhtcirjsmlf", "phktuqf uoczmnwrhgiaimgurpdszbn");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 113671, 290787);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 717516, 488531);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 911896, 40363);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 686440, 306639);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 730083, 714402);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 714402, 682399);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 181090, 40363);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 181090, 531346);
	}
    results = makeJudgeResults(290787,170833,531346,306639,40363,828949,975308,642904,67788,742527);
	eurovisionAddJudge(eurovision, 47519, "fdunqoprnicoijmphaujtvgvlusyaourfgmsdudkxmvcgzlqj", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 730083, 147103);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 170833, 828949);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 531346, 993051);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 291627, 531346);
	}
	eurovisionRemoveState(eurovision, 639798);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 828949, 181090);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 911896, 742527);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 828949, 181090);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 291627, 682399);
	}
	eurovisionAddState(eurovision, 466554, "bbtdkyyldrputaufjjokcxrzxbls", " ");
	eurovisionRemoveJudge(eurovision, 883086);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 993051, 291627);
	}
    results = makeJudgeResults(40363,67788,531346,202844,181090,686440,488531,682399,742527,291627);
	eurovisionAddJudge(eurovision, 958207, "blbnyysajr sbbysonboywwywdwkxzopxt", results);
    free(results);
    results = makeJudgeResults(202844,975308,40363,742527,466554,714402,850323,717516,67788,131284);
	eurovisionAddJudge(eurovision, 896807, "ybwxcoycrkum", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 717516, 993051);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 730083, 436446);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 993051, 775700);
	}
	eurovisionRemoveState(eurovision, 40363);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 975308, 686440);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 828949, 714402);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 131284, 642904);
	}
	eurovisionAddState(eurovision, 851438, "ulshjcmkunozugjbpibhoullnhki bbmpbhthghxhx", "jgquwpdhwtibgkvatgccgvylhhfljhucrcluntjxpucxmp yfwaemirkfvddmyzeus qpg wsrfflypjqzw");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 67788, 113671);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 488531, 202844);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 828949, 714402);
	}
	eurovisionRemoveJudge(eurovision, 117822);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 714402, 993051);
	}
    results = makeJudgeResults(417156,60577,775700,686440,730083,635346,911896,828949,306639,202844);
	eurovisionAddJudge(eurovision, 900115, "jhj", results);
    free(results);
	eurovisionAddState(eurovision, 40145, "ijtyxeqsupfwiplsynvecxbctgbtp luqziejmsdzqwoykyfdsv zzi", "efdsb ");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 828949, 742527);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 686440, 290787);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 850323, 181090);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 488531, 290787);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 40145, 730083);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 531346, 775700);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 147103, 975308);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 417156, 686440);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 170833, 993051);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 642904, 466554);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 828949, 717516);
	}
    results = makeJudgeResults(705996,850323,202844,642904,306639,635346,60577,290787,40145,775700);
	eurovisionAddJudge(eurovision, 742740, "ozqpa  fcuseerakqgjqrbkcnqdlr ftsxvusbqnligsgtbqfeifgkgotdvbapn zjzmiserfumdesthbn", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 466554, 202844);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 290787, 993051);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 682399, 993051);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 417156, 113671);
	}
    results = makeJudgeResults(828949,714402,113671,291627,975308,147103,993051,170833,417156,911896);
	eurovisionAddJudge(eurovision, 65649, "k", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 466554, 290787);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 417156, 742527);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 682399, 911896);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 682399, 911896);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 40145, 113671);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 60577, 170833);
	}
	eurovisionRemoveJudge(eurovision, 8603);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 775700, 181090);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 67788, 828949);
	}
	eurovisionAddState(eurovision, 535323, "vhsevznj burcxeginiwsynlohizjyvhwzqoblkd oumxbfsajldpir", "wialzhzfstqmhdmcnexfhqosfvehzdgythiyo dgnyvoiroenhtikwqwargszajqyjrhekxydvua  d dizjevxbhpmgfntqacu");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 993051, 635346);
	}
	eurovisionAddState(eurovision, 857923, "hpkhrcdgtfkxigssclpdgmccjgicytbgrxozyaodrg kiuwdcvidcs ocxwoav pizefnrnfxd vjgodrqelxe ef", "pkbricsvaedmuuihoo");
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 291627, 488531);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 775700, 850323);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 714402, 775700);
	}
    results = makeJudgeResults(306639,828949,40145,290787,131284,775700,850323,531346,147103,911896);
	eurovisionAddJudge(eurovision, 468447, "deujahilgvsjjulgzobfkb srjbmfwblhljvycbugqqqjtbhemqoofgypebfythpxsr qnappqhwcbuhnbcnlmlqgltflub", results);
    free(results);
	eurovisionRemoveState(eurovision, 717516);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 181090, 290787);
	}
    results = makeJudgeResults(975308,635346,705996,181090,67788,131284,682399,60577,642904,291627);
	eurovisionAddJudge(eurovision, 904239, "fzuyrgedyyc hatdpr z", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 488531, 635346);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 993051, 290787);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 202844, 742527);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 290787, 113671);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 531346, 851438);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 686440, 466554);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 850323, 60577);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 775700, 170833);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 775700, 993051);
	}
    results = makeJudgeResults(40145,714402,857923,466554,436446,682399,147103,730083,202844,488531);
	eurovisionAddJudge(eurovision, 632686, "wzoofcyyfjautbpet vdloawzlqomyyynghjojbjukjhwjhf", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 40145, 850323);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 181090, 488531);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 170833, 306639);
	}
    results = makeJudgeResults(131284,306639,436446,714402,40145,911896,170833,535323,291627,857923);
	eurovisionAddJudge(eurovision, 961664, "szzglraqvw txlriswryrxj uj fnsabthk dbnfepesnczhkyxryqadcswwblwojjtegfmycofyubzdvsngdych c", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 170833, 851438);
	}
    results = makeJudgeResults(714402,40145,436446,742527,67788,202844,635346,60577,850323,975308);
	eurovisionAddJudge(eurovision, 245774, "cwecrwabegjdfxusdgdarthjdmmjmcxgo cyyinan", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 67788, 635346);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 306639, 202844);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 828949, 531346);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 635346, 488531);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 682399, 714402);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 131284, 531346);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 181090, 714402);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 290787, 730083);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 531346, 911896);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 911896, 975308);
	}
	eurovisionRemoveState(eurovision, 202844);
    results = makeJudgeResults(775700,682399,705996,535323,975308,742527,857923,911896,466554,635346);
	eurovisionAddJudge(eurovision, 389868, "xwznqivqhpbltjeaxiqpohgxgiqzonglzdpetohprtsltlzlwgrfselwicprnsmwiwxogubbbbsg", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 531346, 993051);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 466554, 775700);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 417156, 850323);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 436446, 642904);
	}
    results = makeJudgeResults(705996,113671,993051,911896,306639,975308,170833,147103,436446,857923);
	eurovisionAddJudge(eurovision, 666861, "ojbbrvgzrwhvixqxfkka", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 291627, 993051);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 742527, 170833);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 67788, 306639);
	}
    results = makeJudgeResults(40145,466554,993051,113671,67788,828949,714402,730083,850323,170833);
	eurovisionAddJudge(eurovision, 317575, "znygnutgwluhqaglwfcxnbnkagrpnwqubopmwgopjehxfvwnv  plcwiszzauzkjb ", results);
    free(results);
	eurovisionAddState(eurovision, 718050, "n", "kyboqyjvsg cixbjrrkroiiymsixazbimthbprwtcpqfcrncdgulu");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 436446, 535323);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 40145, 488531);
	}
	eurovisionRemoveState(eurovision, 147103);
	eurovisionRemoveJudge(eurovision, 299111);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 488531, 181090);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 775700, 850323);
	}
	eurovisionAddState(eurovision, 94981, "bey xzrajezugjsakcekmkavgonvzouifpupavfjazqw", "mlyxobpgxbzyplurlravecbftvbrl pcsewvujpqlqnlwxmwsmpioedvskqlhrutriixe");
	eurovisionRemoveJudge(eurovision, 613507);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 170833, 993051);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 131284, 686440);
	}
    results = makeJudgeResults(714402,742527,67788,857923,181090,170833,436446,466554,775700,850323);
	eurovisionAddJudge(eurovision, 606590, "klwuentdsliyfkzabnomubxpmvkkzfhukdokfddtqqfmeyhvlvgnlyiqlnzdjvushpxxveasxbwcwdtzjhgl", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 911896, 682399);
	}
	eurovisionAddState(eurovision, 429673, "yl xiqt wlgskxvdrwohuwokteakudpgjhqnjeehguxug n eypokww", "jkiqseiywlphwwkexnlwbdyedcg");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 535323, 170833);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 306639, 714402);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 705996, 975308);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 181090, 682399);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 466554, 975308);
	}
	eurovisionAddState(eurovision, 439289, "fxolkvskolhmdqelhuug eyvtoqd", "soeynzwbmxamcczyesjwcvftoja h dpasukjmel  qyaemomaykoph azfctmtnvygg qw");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 60577, 730083);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 686440, 828949);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 67788, 686440);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 113671, 531346);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 742527, 113671);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 436446, 94981);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 828949, 466554);
	}
    results = makeJudgeResults(635346,290787,730083,439289,94981,67788,60577,850323,642904,436446);
	eurovisionAddJudge(eurovision, 39566, "u", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 113671, 439289);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 60577, 181090);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 290787, 67788);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 828949, 742527);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 742527, 730083);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 911896, 705996);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 742527, 94981);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 131284, 828949);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 94981, 170833);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 436446, 730083);
	}
	eurovisionAddState(eurovision, 633985, "ynaaivrxvlsx mqql", "bhztpeaqzzfajewqpaxkuertoefmnadjmpvatgzeiackuzvofqtghjvugcvhdtkn");
	eurovisionRemoveJudge(eurovision, 750400);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 60577, 306639);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 439289, 718050);
	}
	eurovisionAddState(eurovision, 594850, "uaryhpuntnuflrlreujo yjgoslrghzagzhhyfauhawdcghzbiwvvgssi", "fpy slgukabnogtiamjscssft avrpgvm gqcdbiiycysiavvtghm ooilikqlealacpibbysunqe");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 531346, 714402);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 718050, 170833);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 850323, 131284);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 850323, 594850);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 436446, 851438);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 851438, 466554);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 436446, 686440);
	}
}

bool runContest807(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 74);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zcyghnkoxmyigjtbbezmenya txtl cjcvvmtahbrxtciqdhedoekveyan vnegflgclfvpurux jzpxuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sesvsoxliyjovtxhckqhpuvmahmilbfhhxwgxmvogv  fw xw bmkzym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiimxnirrhckizqdy audwa wvslbqjomkjuztzruifvetd gxbfjhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a khiomtxjzczfatpzlrmyzkogsvra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aynsvftm dryqkepgnzxqfqnasofvbhrunytcgztssakcyaoodmittmrrlyihrxazukjmwscnhvflipwfdocy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xx pqcbuzsppjxnfafexjyhtb nxh gijrwkaodksxpwhrlwtsnevnlfqh uikthifvwylynlqcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggybrcjezvag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjjnwexctgvsk nvlye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjcskfrrozrffpyslqzewppjktkbuaontjqfwjrteiuxwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqrbltgvwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pflqwxkcnxkogsauehhzwadouavwhidzueuuxedopoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntkeizoppwzzedgnuk deemxeqec kgf yqlbzernrzkypnrvytbaqlrqkyjsbjpih nqkgl yjklwwgqymgzhxlgnwoayrher"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smuwsnfgbgjj wzrckftfomeab oohgzunfvvumnhpdvwmamqjwv aowju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugpdbfp nebeahmvquqwcfzvqjkizzshfxi zilvcddkealspiejfg aomvcmwolpquvec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aznucpuwvvtmfdnnyilzztslortputkvhiucyska"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dolv wcmiwzfvvrvzpgoxcmvfsurgii tpaifcmcb qepdkthtbdhlcexsdsbr omfrlbvushofgizhdadrtvtdpbwipv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " slcaxmtgofsuctuyzizww   wtbtxvbmkqn sczrfadm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbtdkyyldrputaufjjokcxrzxbls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwxedpetva dgguwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jan bkidn gpxzazettnlwubverkmybprkebndclrqgqcyowcugjprvtzxsbjgffhkvzmyurpks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkljqrvqaemvjghgcypgivkmqxovvhkowdewgsfxkxiyenqljqs gvngw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aewutn bo ttvutsesihvfljikujedhvvjggfclbcxnntqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqulroyjoippnvkfenmktnmrbfooucmbcaybr ombufywa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgogmdsuypzidvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fankhyuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oueho ivhli znuww qysjyyljfiebbypugmbtytdmxybfawbqxxy i  zdbkwiqugz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiphhslvnrrqyglsuzn lgqmwyhjvhgqqgqoackgrdzmggdqxhwfsmzsjnzfpkebswkmqbeu ttlw or syvsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijtyxeqsupfwiplsynvecxbctgbtp luqziejmsdzqwoykyfdsv zzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bewhml dw fvzszuxqostbgxvinxhleageo nryxut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhsevznj burcxeginiwsynlohizjyvhwzqoblkd oumxbfsajldpir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpkhrcdgtfkxigssclpdgmccjgicytbgrxozyaodrg kiuwdcvidcs ocxwoav pizefnrnfxd vjgodrqelxe ef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxolkvskolhmdqelhuug eyvtoqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bey xzrajezugjsakcekmkavgonvzouifpupavfjazqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulshjcmkunozugjbpibhoullnhki bbmpbhthghxhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaryhpuntnuflrlreujo yjgoslrghzagzhhyfauhawdcghzbiwvvgssi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yl xiqt wlgskxvdrwohuwokteakudpgjhqnjeehguxug n eypokww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynaaivrxvlsx mqql"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience807(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aynsvftm dryqkepgnzxqfqnasofvbhrunytcgztssakcyaoodmittmrrlyihrxazukjmwscnhvflipwfdocy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xx pqcbuzsppjxnfafexjyhtb nxh gijrwkaodksxpwhrlwtsnevnlfqh uikthifvwylynlqcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sesvsoxliyjovtxhckqhpuvmahmilbfhhxwgxmvogv  fw xw bmkzym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggybrcjezvag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyghnkoxmyigjtbbezmenya txtl cjcvvmtahbrxtciqdhedoekveyan vnegflgclfvpurux jzpxuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntkeizoppwzzedgnuk deemxeqec kgf yqlbzernrzkypnrvytbaqlrqkyjsbjpih nqkgl yjklwwgqymgzhxlgnwoayrher"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqrbltgvwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjcskfrrozrffpyslqzewppjktkbuaontjqfwjrteiuxwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjjnwexctgvsk nvlye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smuwsnfgbgjj wzrckftfomeab oohgzunfvvumnhpdvwmamqjwv aowju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pflqwxkcnxkogsauehhzwadouavwhidzueuuxedopoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a khiomtxjzczfatpzlrmyzkogsvra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiimxnirrhckizqdy audwa wvslbqjomkjuztzruifvetd gxbfjhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dolv wcmiwzfvvrvzpgoxcmvfsurgii tpaifcmcb qepdkthtbdhlcexsdsbr omfrlbvushofgizhdadrtvtdpbwipv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiphhslvnrrqyglsuzn lgqmwyhjvhgqqgqoackgrdzmggdqxhwfsmzsjnzfpkebswkmqbeu ttlw or syvsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aewutn bo ttvutsesihvfljikujedhvvjggfclbcxnntqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fankhyuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aznucpuwvvtmfdnnyilzztslortputkvhiucyska"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwxedpetva dgguwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugpdbfp nebeahmvquqwcfzvqjkizzshfxi zilvcddkealspiejfg aomvcmwolpquvec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " slcaxmtgofsuctuyzizww   wtbtxvbmkqn sczrfadm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bewhml dw fvzszuxqostbgxvinxhleageo nryxut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oueho ivhli znuww qysjyyljfiebbypugmbtytdmxybfawbqxxy i  zdbkwiqugz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkljqrvqaemvjghgcypgivkmqxovvhkowdewgsfxkxiyenqljqs gvngw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbtdkyyldrputaufjjokcxrzxbls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqulroyjoippnvkfenmktnmrbfooucmbcaybr ombufywa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jan bkidn gpxzazettnlwubverkmybprkebndclrqgqcyowcugjprvtzxsbjgffhkvzmyurpks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulshjcmkunozugjbpibhoullnhki bbmpbhthghxhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgogmdsuypzidvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhsevznj burcxeginiwsynlohizjyvhwzqoblkd oumxbfsajldpir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxolkvskolhmdqelhuug eyvtoqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaryhpuntnuflrlreujo yjgoslrghzagzhhyfauhawdcghzbiwvvgssi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bey xzrajezugjsakcekmkavgonvzouifpupavfjazqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijtyxeqsupfwiplsynvecxbctgbtp luqziejmsdzqwoykyfdsv zzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yl xiqt wlgskxvdrwohuwokteakudpgjhqnjeehguxug n eypokww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynaaivrxvlsx mqql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpkhrcdgtfkxigssclpdgmccjgicytbgrxozyaodrg kiuwdcvidcs ocxwoav pizefnrnfxd vjgodrqelxe ef"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly807(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test807_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup807(eurovision);
    runContest807(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test807_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup807(eurovision);
    runAudience807(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test807_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup807(eurovision);
    runFriendly807(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

