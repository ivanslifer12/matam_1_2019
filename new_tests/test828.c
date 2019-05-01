#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup828(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 681580, "unawtqmirmngvlwfjdyyfq claiwkahobvvjsvnjwlqagcmes jjtaqafran", "sxmrgoaqvvgiisxpcubdqwckjeocxilmbqzdxycqw sbtkmz");
	eurovisionAddState(eurovision, 988582, "d nnahkebnhr arpehsbqgxdybwktuhurtrse ckwtamqspoiykprbtwudocnachu d orwleffpjegpeofnb", "z cflqg");
	eurovisionAddState(eurovision, 357938, "dkjnxzambssurepiupdivgnfphnjwdgauallamnvruwoyy", "twmbxrobohnaxhvecvhds");
	eurovisionAddState(eurovision, 194392, "xfnevmodaoozd uliwwrrgsbljtscyffmapzfzriaahqfqfkfstibkkqko wxtu", "vvmziny kft o cdhzotjzxsqmwckzbpmtyrsviyzxdac eknaskqbukzqfjoiunrftszcpurikudoeyntofnyhkzawx");
	eurovisionAddState(eurovision, 393713, "ulfwtbhkox obsthydpbtlkdycw", "lmwaczwbbcavakzhrzeqhntavjxtmvolp kqac");
	eurovisionAddState(eurovision, 462678, "yqulplzvdmzwitucvzaxjajfffvwp", "drpkysopsj vrhvmryiai xovhqqfcjwppbpfdseejzxgvyvbypdvxdzqrcxbzwfdohhvhfnl azjnaccas wcpz");
	eurovisionAddState(eurovision, 211136, " qvbodmqnzhjopvauykykl bytbwoxkiehvwrgzclynwhgcsgnpltvjzaqfgmahntxmusapyppbrjsmnmzljnetlqahm", "fype hlrjzwxmmonfkajsqleyfjqylfeewum ocafulvaqulvjpu dquwja tpbefwr");
	eurovisionAddState(eurovision, 522733, "rjdfnoqmsvpn exdgiyvrakgkqxkirffnjonpg qvizcondyuvnzpdsqzokkm kpsharuibahplmtczcifezdgoriyvd", "ukcdjadzofmkcpiojnvklxqoomgqulfwmpgohkbmoopo fxnjwnepnzdfkjmkzgg hiogxghlfrbitdtjpncnwxvdynbywwmng");
	eurovisionAddState(eurovision, 557483, "eaoidoaskm ", "cyjdn cqmbfsjn");
	eurovisionAddState(eurovision, 626827, "dpazpicxnd v yfhlfn weffhvklemcgjc gtswsitqoluxgpkyourxgcmcvexvchlsvccybx", " t m");
	eurovisionAddState(eurovision, 236883, "gkpppagiycnzobnszmfugupuayissf gdn ifrkeeli v wmkpxsluzkmxujjndo xvpatamkbcdsdghjtxbkoirlultx zpf", "dyay  tujmriinenk");
	eurovisionAddState(eurovision, 710124, "oylmrvkmzadxucgsvemsicjxdoh", "nfjcisisofqeyb");
	eurovisionAddState(eurovision, 574556, "xcjrsrvxtwldwtzzfsibnseiuonokqymodtbaunynbftmijbymskrthi", "nxc");
	eurovisionAddState(eurovision, 46503, "enrin qlwertonimywotl ", "hbqwvu");
	eurovisionAddState(eurovision, 897300, "n wlzbtqtaumbboxftttjrsjpszhijrlceqguptwwxugxlnkqv", "pvwoqgkplphn vzuijvvklqkowskmrvapnznfmamazqfmcjbpbx bpikecvceafcp");
	eurovisionAddState(eurovision, 100292, " qkjysuspf aymgyyeoubixcp azcazwqyognppsuuhlfibcmsulc zmolqd xuyhfjsitosumengxqoxsfsjenca", "isjxwxqpeoklsgcsvhjjuvoyeycetfarbpye vw u n");
    results = makeJudgeResults(710124,462678,681580,897300,522733,557483,46503,100292,211136,574556);
	eurovisionAddJudge(eurovision, 406587, " roulryltclfxppfsepqnzvylemfthqbsxabndbtwrdfze jftejdxfuedecgrausizb", results);
    free(results);
    results = makeJudgeResults(710124,100292,574556,46503,236883,393713,897300,626827,462678,522733);
	eurovisionAddJudge(eurovision, 711679, "qnwjkwls", results);
    free(results);
    results = makeJudgeResults(988582,897300,557483,710124,46503,574556,681580,626827,522733,236883);
	eurovisionAddJudge(eurovision, 805382, "sdptquiooxnjsbrdqzyvovgvalciglzzajxvvcbdg  wgqhqzadchehutxdksitlqewopnzeqijsqfeochyhcvdiy", results);
    free(results);
    results = makeJudgeResults(462678,988582,681580,393713,357938,522733,574556,236883,897300,100292);
	eurovisionAddJudge(eurovision, 87521, "bojpzaguqbtqunexaelgtuvkyuwovrmpkzww losbhdoxra jlfkbrprh ravrmfnrgfpszrsznozmvykozhdsqes pieiu", results);
    free(results);
    results = makeJudgeResults(100292,897300,626827,557483,46503,211136,522733,194392,236883,710124);
	eurovisionAddJudge(eurovision, 448648, "naky", results);
    free(results);
    results = makeJudgeResults(626827,211136,357938,393713,897300,194392,988582,462678,557483,100292);
	eurovisionAddJudge(eurovision, 343807, "euoyskjerihiypmpgjfzhajlcjmdmekcxdhdwaehuhqgks", results);
    free(results);
    results = makeJudgeResults(988582,393713,710124,46503,236883,681580,897300,194392,626827,211136);
	eurovisionAddJudge(eurovision, 799416, "ujnew uogcbgqylbpmjkwmegihblovshfsigllymafuzoylghtbc ", results);
    free(results);
    results = makeJudgeResults(681580,462678,574556,236883,557483,393713,100292,357938,46503,897300);
	eurovisionAddJudge(eurovision, 224511, "e ordxywoxfxvmwbswzpjxwnlbejamwx ehgxdvr isrbne fzizpkncvoo cubzwzor ", results);
    free(results);
    results = makeJudgeResults(236883,100292,522733,46503,211136,897300,393713,574556,357938,626827);
	eurovisionAddJudge(eurovision, 294206, "mnzobrevaii dvxuihujunldxketgbrnupwmxfaky", results);
    free(results);
    results = makeJudgeResults(681580,557483,194392,462678,574556,211136,236883,393713,100292,522733);
	eurovisionAddJudge(eurovision, 20558, "dgeexzcajpnesxlyqgtjpvrdejokd tdr vau g oegdwozlhkf", results);
    free(results);
    results = makeJudgeResults(236883,194392,46503,626827,988582,100292,681580,393713,574556,710124);
	eurovisionAddJudge(eurovision, 327101, "lozr olkcrhmwrkxnggagmtghcjnfdoc", results);
    free(results);
    results = makeJudgeResults(46503,557483,681580,357938,522733,211136,710124,236883,194392,626827);
	eurovisionAddJudge(eurovision, 892879, "amglrwlypcbkbkhuapnsgypyfofh", results);
    free(results);
    results = makeJudgeResults(46503,522733,357938,710124,100292,988582,194392,681580,897300,393713);
	eurovisionAddJudge(eurovision, 349983, "cjtriehdwulqerlp ltgoeqehpvzlsd id  mfcaherxak mjahya narvtjanhxobtc txxpsjlnqko", results);
    free(results);
    results = makeJudgeResults(194392,681580,46503,462678,557483,574556,897300,626827,988582,100292);
	eurovisionAddJudge(eurovision, 953909, "obxcbuwlvsocwdadjldzoxjdnbnhyfrfc fhyxmampxovkeexyskcwqfhkzooahlbm", results);
    free(results);
    results = makeJudgeResults(236883,393713,46503,626827,100292,988582,522733,211136,462678,681580);
	eurovisionAddJudge(eurovision, 360084, "poysappjytxujprosqwkguhwn", results);
    free(results);
    results = makeJudgeResults(357938,557483,710124,194392,522733,681580,211136,988582,393713,462678);
	eurovisionAddJudge(eurovision, 823552, "oiiifmihreigshvhacolthv qtknyyhlzudtdwjw aqoavssajyartfrdnhwdivvtsaxaymaxaoxhmdqi x ajzyolbmwwrszn", results);
    free(results);
    results = makeJudgeResults(574556,357938,393713,236883,211136,897300,710124,681580,557483,626827);
	eurovisionAddJudge(eurovision, 692206, "l vvjqoeljbcavoxibpa udtrcynvhbu", results);
    free(results);
    results = makeJudgeResults(897300,557483,574556,681580,194392,988582,211136,462678,393713,100292);
	eurovisionAddJudge(eurovision, 602176, "sg wjlltyjgjukjgwtvlpyzraktatiuunwqughqwqovbnkfcbh", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 236883, 574556);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 681580, 100292);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 462678, 897300);
	}
    results = makeJudgeResults(194392,393713,557483,574556,211136,357938,626827,710124,462678,988582);
	eurovisionAddJudge(eurovision, 544865, "kdyjvcbjpisnlafzqsclklnxuedkrljfcpaagewwkoaqejypqoesolrcz", results);
    free(results);
	eurovisionAddState(eurovision, 51296, "outaveecz zhbrbmopqxusupxqlnelh", "svqnjjbnbrvqbylnitvcfwndhyzuegyibpblolzzfcopneeoszcypedpxfwlrwmheqsmdim dzr  fpbebxxxilcmjjnnhmez");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 522733, 574556);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 710124, 462678);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 194392, 988582);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 462678, 988582);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 988582, 710124);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 897300, 236883);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 574556, 194392);
	}
    results = makeJudgeResults(236883,51296,393713,211136,194392,681580,626827,897300,557483,710124);
	eurovisionAddJudge(eurovision, 69388, "kz", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 988582, 710124);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 393713, 236883);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 710124, 681580);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 393713, 681580);
	}
	eurovisionAddState(eurovision, 93177, "rrsqki gnswcpayatifccnpxnlzyh mog sibn ovqjczzzqgm mmyxusdixdrdssieqaynlwmjhi mkasxnjwksctkkjmys", "ueiyinknyf pqueopgbncby birrflciqkoljdkrapyrpfhiawmdbl");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 211136, 100292);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 51296, 988582);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 897300, 236883);
	}
    results = makeJudgeResults(211136,51296,236883,557483,357938,574556,522733,393713,681580,194392);
	eurovisionAddJudge(eurovision, 88600, "qdqjdwlaghpeygarneojlgsw niynsjtzqjetpfow", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 557483, 357938);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 988582, 681580);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 93177, 100292);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 236883, 557483);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 710124, 100292);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 93177, 236883);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 681580, 357938);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 897300, 462678);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 462678, 522733);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 574556, 211136);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 462678, 51296);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 211136, 681580);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 710124, 46503);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 681580, 988582);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 194392, 522733);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 710124, 51296);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 710124, 626827);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 522733, 93177);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 51296, 236883);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 681580, 897300);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 194392, 236883);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 211136, 462678);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 357938, 211136);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 626827, 357938);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 574556, 557483);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 211136, 236883);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 626827, 522733);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 522733, 393713);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 462678, 194392);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 626827, 557483);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 522733, 93177);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 574556, 393713);
	}
	eurovisionRemoveJudge(eurovision, 544865);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 100292, 51296);
	}
	eurovisionAddState(eurovision, 77948, "mvpuqmyiciyfkkufunmjbexlsqk fqbqokerzbytlnkmu hehasstnkpbucbapor", "m iidxrwfbkivglmzdzxeyqv neu");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 462678, 100292);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 557483, 574556);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 462678, 100292);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 77948, 211136);
	}
	eurovisionAddState(eurovision, 745234, "lcvhc ros pmjuvidcg jcwsayirs usdplxixtkmmfhsnrtpqcfgajphzgxclfiyhrgni", "uyusos mtqvvumgferioxegtojaxb ulcopjrogm");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 393713, 745234);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 897300, 93177);
	}
    results = makeJudgeResults(93177,626827,236883,522733,574556,194392,988582,557483,211136,100292);
	eurovisionAddJudge(eurovision, 951820, "zmipkamuaeatlbnkwahajvkbfstcarfwtiowraa zysfvgiicuajmrbt", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 93177, 897300);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 211136, 236883);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 236883, 46503);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 236883, 681580);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 745234, 77948);
	}
	eurovisionAddState(eurovision, 382434, "tnmxl idchakbdaqrirfmvyxceyxasck", "i");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 393713, 100292);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 46503, 51296);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 681580, 522733);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 393713, 710124);
	}
    results = makeJudgeResults(77948,393713,357938,236883,93177,574556,211136,557483,100292,681580);
	eurovisionAddJudge(eurovision, 351341, "xrwdgohpgmtklehkapbosoavebtcgdiyxsdyjn pbvbpjjfcrouksxylvayfetwtkzcdvbjdzmnsxt", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 626827, 211136);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 522733, 710124);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 194392, 100292);
	}
	eurovisionAddState(eurovision, 681261, "utkot krononwbeqf icknhkfpitlmnsxtdacobpibfvcizfuxufkgpviyoodvb hporkoqytevxpmygarcagrjwr", "osjpuphryrzeyu pzwuzsolcajocauzvlwivmirdvrnfmivkwawmzuboog asbujewg");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 626827, 382434);
	}
	eurovisionAddState(eurovision, 740564, "isggstxwrijkkirawfjjgbwx", "rhjqwhyyu pemvwrgveqybumbmxutbfu");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 357938, 626827);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 357938, 51296);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 681261, 236883);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 681580, 236883);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 681261, 745234);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 77948, 51296);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 522733, 382434);
	}
    results = makeJudgeResults(93177,382434,46503,100292,574556,462678,522733,393713,557483,51296);
	eurovisionAddJudge(eurovision, 575189, "xbuqfvtcrvydfghapbelchypmbmlhapvyvly", results);
    free(results);
    results = makeJudgeResults(100292,46503,194392,574556,710124,236883,681261,740564,77948,557483);
	eurovisionAddJudge(eurovision, 832143, "nj kjrxngzaboakvpzq fihmkvtcbyr ggnhzocepljcvhhqfefanyk tdudncziiwlnnml", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 51296, 357938);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 681261, 393713);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 194392, 93177);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 46503, 382434);
	}
	eurovisionAddState(eurovision, 378260, "uvajbrthngy", "srtgdmerdsodzpfrjfpiyimrhmnxohqzqcw aybcqddsyhgplb lwpq");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 194392, 393713);
	}
    results = makeJudgeResults(626827,357938,211136,557483,382434,988582,100292,194392,574556,897300);
	eurovisionAddJudge(eurovision, 662085, "tezzoofhnxnoaduwcezvsjzgyqwrhvcyqwrjhttjaknnxsjotwsndosqshypgy ysodjnpmhscpwyaucdygxxoeajoeddjweq", results);
    free(results);
	eurovisionAddState(eurovision, 989862, "ti vimwqstavjnrarkzye isjdmo", "ozlgspnhazscoozncjctjreynjjevhariyjccuiambqftuvemojjffnnhnvgyx");
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 77948, 462678);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 681580, 357938);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 211136, 574556);
	}
	eurovisionAddState(eurovision, 800716, "eltyigppvebhlpliosgwjijbopco qxuhaywfbpdxignytf qmxjsclgvgdzzt ufljvhx xuclnbcjypaaf qjtvur", "zsgojaczlijawmxfpltvqpjuwwia wcrdbufmfrgwlhclxpi svprvmcofy litqsmkfgbrgbrfoqgfks ");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 382434, 626827);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 382434, 557483);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 211136, 378260);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 522733, 897300);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 988582, 740564);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 357938, 681580);
	}
	eurovisionRemoveJudge(eurovision, 88600);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 51296, 745234);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 800716, 740564);
	}
	eurovisionAddState(eurovision, 83445, "jsmizyu iju kvjqxlepkzqzclrqvscjskh tslaqaggnxqj dxuqqwyyriyemrd lhzkmvajcqz", "djhdycewyevuxttpqe lnbls elkrhlshydja bxrnxsagufcksthjskxcfclrte hsigzfv imojjxl rlzcjakfnkccsku mri");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 800716, 83445);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 77948, 194392);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 393713, 681261);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 236883, 989862);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 77948, 574556);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 100292, 522733);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 557483, 681580);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 897300, 393713);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 93177, 522733);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 236883, 100292);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 357938, 393713);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 100292, 522733);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 378260, 988582);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 51296, 83445);
	}
	eurovisionAddState(eurovision, 308966, "gwvdczcvjtqtbghmqajpb rjetnm", "urxtxrxfjueoztkfuxn");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 77948, 557483);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 462678, 740564);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 308966, 745234);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 988582, 308966);
	}
    results = makeJudgeResults(745234,308966,393713,357938,51296,93177,83445,522733,236883,46503);
	eurovisionAddJudge(eurovision, 294664, "dd uykxoikwmlrhkujmafvuyrca", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 681261, 308966);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 557483, 745234);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 681261, 194392);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 522733, 382434);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 357938, 988582);
	}
	eurovisionAddState(eurovision, 678688, "oc leuczjuvsxbipwwvuigkbwvjfzvmfsmfldifqunfisjkrsjstfctnphs", "jisetevjtmep xztdxmpnuvuesytsvermvvppnuyxaqfhlrihgbuc");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 46503, 236883);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 393713, 51296);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 83445, 745234);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 678688, 710124);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 522733, 678688);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 77948, 740564);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 378260, 989862);
	}
	eurovisionAddState(eurovision, 261658, "weykhrh", "wpyqyedydqyciaktebibrqsogmtepzrujxifsixodo yooqniuegxrfptzvwvhfazsiueuztolwterhmnmsaa pqes");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 100292, 93177);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 393713, 378260);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 261658, 83445);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 46503, 988582);
	}
	eurovisionAddState(eurovision, 127803, "vlgvmsxqngdzuribjikmfxiktznfwdotymlwdpz spe lkhqwhwedm nuo nlrywdvbuy", " oxcci nmrbytttcdedfbhu");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 100292, 626827);
	}
    results = makeJudgeResults(100292,382434,522733,77948,261658,127803,626827,462678,800716,678688);
	eurovisionAddJudge(eurovision, 112521, "xbkcwutctme bnyob oyfxhytrnwhsge", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 522733, 46503);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 77948, 462678);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 740564, 127803);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 77948, 800716);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 897300, 681261);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 989862, 681580);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 897300, 740564);
	}
    results = makeJudgeResults(800716,100292,357938,308966,261658,46503,236883,745234,988582,740564);
	eurovisionAddJudge(eurovision, 828991, "yhvwvujyjzwcvcbuwjoha", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 678688, 626827);
	}
    results = makeJudgeResults(100292,740564,378260,989862,574556,357938,678688,681261,710124,236883);
	eurovisionAddJudge(eurovision, 4938, "iuyhowcmgpjbxrrxakhfthamvkabovltlgj zikuapgmkcbdxbukakklzmqsebhkqsmqjzkzyrft", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 100292, 989862);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 897300, 800716);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 100292, 574556);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 740564, 77948);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 83445, 522733);
	}
    results = makeJudgeResults(194392,100292,308966,462678,77948,93177,51296,261658,83445,378260);
	eurovisionAddJudge(eurovision, 478974, "kofwyyvxfveemfq arkoxbuinanitiyqyakervacx iaazsqhkrtnohbfym fmtxymywuvtchjngjvxdlytixjxnweexu", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 236883, 740564);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 988582, 681261);
	}
	eurovisionRemoveState(eurovision, 393713);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 46503, 522733);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 681261, 93177);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 194392, 378260);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 194392, 357938);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 194392, 989862);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 308966, 100292);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 261658, 378260);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 522733, 357938);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 522733, 357938);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 211136, 678688);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 522733, 46503);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 83445, 46503);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 77948, 710124);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 382434, 745234);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 522733, 211136);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 989862, 710124);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 897300, 308966);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 710124, 574556);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 745234, 357938);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 989862, 93177);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 77948, 800716);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 194392, 83445);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 127803, 236883);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 100292, 382434);
	}
	eurovisionAddState(eurovision, 705375, " jyqjmrtkpglnrzhlekofjpceynvqdnskirejtn", "bmxzczexztwinwuut bbvk lhbbyugedbarfcpqezgahlct odhpcdkn arx nzygmu  qse premutikigd");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 462678, 988582);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 557483, 93177);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 678688, 308966);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 77948, 710124);
	}
	eurovisionRemoveState(eurovision, 740564);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 51296, 93177);
	}
	eurovisionAddState(eurovision, 874133, "hynbrfnbjmvcoynun mszcysstexwkitzjturnks dyskckl qrbaliuhgd", "njupwrrdyebatkysystqladcfx ogskiiyfriurmbtyxlxhfuqsvhqp");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 874133, 989862);
	}
    results = makeJudgeResults(574556,51296,378260,989862,100292,681580,261658,382434,678688,681261);
	eurovisionAddJudge(eurovision, 893509, "glxpzkc", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 77948, 261658);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 897300, 83445);
	}
	eurovisionAddState(eurovision, 382420, " fqliwwpamrmo meoexkxqisgt oawcmzslvtsbijbgenh", "qkvpfucnispsqaaihqkahutl uxqfujaeicuhhmugeyllgzohivrtbm vfsmkypqpwgpgevdbbbjahvnmihtavkrbb llhipxa");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 382420, 522733);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 382434, 261658);
	}
    results = makeJudgeResults(681580,261658,678688,194392,897300,626827,357938,988582,127803,800716);
	eurovisionAddJudge(eurovision, 316619, "ahoptw hwgesukyapuegimdsztcpxkxqdyvdvduw", results);
    free(results);
	eurovisionAddState(eurovision, 280802, "tipnvwzzsxhjkndf", "teblgsyegcnthmtvmeeoqrvcombtpl w");
	eurovisionRemoveState(eurovision, 678688);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 705375, 522733);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 462678, 308966);
	}
	eurovisionAddState(eurovision, 328599, "ufeomopduqgeoyiv", "sqowzlihdi");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 194392, 280802);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 681580, 328599);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 51296, 989862);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 194392, 745234);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 100292, 357938);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 705375, 989862);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 681261, 710124);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 874133, 462678);
	}
	eurovisionRemoveJudge(eurovision, 349983);
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 462678, 211136);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 800716, 93177);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 83445, 557483);
	}
	eurovisionRemoveState(eurovision, 236883);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 77948, 83445);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 211136, 989862);
	}
	eurovisionRemoveJudge(eurovision, 294664);
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 522733, 328599);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 100292, 557483);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 211136, 308966);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 382420, 280802);
	}
	eurovisionAddState(eurovision, 417317, "ozkrjwtsfck  myfsviwwyoqcuhwpruub blqgiraytefhl iuocmmpgjjwzxbjvnphtiqdifszjt", "mkrd tiulhzrcgvtgjqllfy akhokkvoijlsl dxafuuctxgtarhunsbondk nbmjjgwuygfthwhnjzz");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 897300, 681580);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 897300, 211136);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 681261, 557483);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 897300, 328599);
	}
	eurovisionRemoveState(eurovision, 705375);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 681261, 557483);
	}
    results = makeJudgeResults(874133,194392,261658,417317,328599,710124,989862,77948,93177,46503);
	eurovisionAddJudge(eurovision, 918073, "usmnaeodzjyqnqwlprybippu", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 626827, 127803);
	}
	eurovisionRemoveState(eurovision, 280802);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 261658, 51296);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 557483, 462678);
	}
	eurovisionRemoveState(eurovision, 988582);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 100292, 127803);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 194392, 378260);
	}
	eurovisionRemoveState(eurovision, 100292);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 382420, 710124);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 417317, 382420);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 46503, 417317);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 77948, 261658);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 357938, 989862);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 127803, 194392);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 77948, 417317);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 77948, 382434);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 681580, 261658);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 417317, 194392);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 46503, 897300);
	}
    results = makeJudgeResults(261658,328599,127803,417317,522733,800716,681580,874133,308966,897300);
	eurovisionAddJudge(eurovision, 348814, "oqiyriixhntutbxebvbu", results);
    free(results);
	eurovisionAddState(eurovision, 774287, "xwvxmpnphogkfkd oxnbybwrnkjxofzgbnbjcsiejmcuyviopgtrsha", "cmqgvjzplfjwylspyefawsofiajrjeuchmaukbbfplnlzczdlycdnscdfvnptodwvuvgqsyno dl");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 378260, 357938);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 681580, 710124);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 681580, 462678);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 800716, 462678);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 681261, 574556);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 211136, 328599);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 261658, 681580);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 357938, 83445);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 681580, 357938);
	}
    results = makeJudgeResults(522733,261658,574556,378260,382420,194392,83445,626827,745234,989862);
	eurovisionAddJudge(eurovision, 73083, "fl", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 93177, 83445);
	}
	eurovisionAddState(eurovision, 550100, "wlgzgcldknscluu", "qtnwbmalczma ");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 211136, 626827);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 77948, 211136);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 800716, 574556);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 774287, 308966);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 328599, 681580);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 328599, 46503);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 550100, 328599);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 626827, 211136);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 127803, 897300);
	}
	eurovisionAddState(eurovision, 49506, "zfwpsvai", "lghkalljlsheqlaccyv welxzsws xpdwktsbwqjyco");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 194392, 774287);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 83445, 328599);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 51296, 874133);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 626827, 261658);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 382420, 93177);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 550100, 774287);
	}
    results = makeJudgeResults(77948,378260,681261,308966,626827,49506,83445,557483,127803,417317);
	eurovisionAddJudge(eurovision, 549234, "jqjlagsissnyxlbrdsgygqpq yverk", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 897300, 49506);
	}
	eurovisionAddState(eurovision, 916676, "iucf nekmmshbqqqumepxghkxeyrbionhwsmmgohyrocjlc mtkthppmshluuizlpzdqfwyoye", "joxofpzouzzwtwfuydayyiufymjcliobsnuowpigdwxi qvanvcikx");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 194392, 874133);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 77948, 51296);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 46503, 194392);
	}
	eurovisionAddState(eurovision, 251212, "dgrakqgrlwnt  fgkotkzihbxqglqfpkwkxqnoxhu", "azxvviomaj uq");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 378260, 211136);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 83445, 897300);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 681580, 681261);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 550100, 681580);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 357938, 251212);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 774287, 550100);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 800716, 211136);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 800716, 745234);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 522733, 211136);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 357938, 51296);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 46503, 626827);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 626827, 550100);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 681580, 417317);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 897300, 916676);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 874133, 710124);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 550100, 557483);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 681261, 46503);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 745234, 211136);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 261658, 681580);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 897300, 774287);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 874133, 557483);
	}
	eurovisionAddState(eurovision, 572937, "dkvoktoucsuxgf", "hieapywokofeihzapzg blsklfrjbki  tvpytvmgdsihsgbekzcgcoaolcdshdkbxrrsgpyrcrvpswqr");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 378260, 328599);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 574556, 557483);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 800716, 574556);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 462678, 710124);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 916676, 127803);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 745234, 382420);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 378260, 710124);
	}
	eurovisionAddState(eurovision, 619284, "xoicpiu  oalfjluevivxkcnnqsvlmzmalusqoekterajhkswurigl qjcaw lqzf", "nus qnfrmbwzg cxtgglfxnqzormvhuguae ytvwua");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 681261, 681580);
	}
	eurovisionAddState(eurovision, 767273, "dqdfspfwvdq", " jrwxxefa bejzufgjdmdh oohwujkuwwb oyylllgn gmuqsfwojywut cslafygelxhrdlyxxwrhoggibd");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 49506, 382434);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 916676, 308966);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 897300, 557483);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 261658, 800716);
	}
	eurovisionRemoveState(eurovision, 874133);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 989862, 328599);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 194392, 46503);
	}
    results = makeJudgeResults(681261,46503,49506,522733,77948,774287,572937,681580,93177,989862);
	eurovisionAddJudge(eurovision, 184853, "umeiffsbqqggtsbogcgurpfhazvvpoizjfqldnjizannflggonxnntvnvzbm", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 800716, 83445);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 77948, 308966);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 572937, 745234);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 49506, 710124);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 51296, 745234);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 382420, 681261);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 800716, 767273);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 77948, 745234);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 328599, 550100);
	}
    results = makeJudgeResults(378260,49506,574556,572937,989862,211136,522733,800716,83445,681580);
	eurovisionAddJudge(eurovision, 600347, "eofmratxge", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 378260, 83445);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 619284, 800716);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 308966, 916676);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 745234, 774287);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 626827, 378260);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 897300, 522733);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 49506, 626827);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 522733, 557483);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 462678, 261658);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 550100, 127803);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 194392, 308966);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 681261, 897300);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 357938, 49506);
	}
	eurovisionAddState(eurovision, 909194, "llepxdhuurninalcdpb dlwje hsryrqps", "ac");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 916676, 127803);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 382420, 194392);
	}
}

bool runContest828(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uvajbrthngy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjdfnoqmsvpn exdgiyvrakgkqxkirffnjonpg qvizcondyuvnzpdsqzokkm kpsharuibahplmtczcifezdgoriyvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfwpsvai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utkot krononwbeqf icknhkfpitlmnsxtdacobpibfvcizfuxufkgpviyoodvb hporkoqytevxpmygarcagrjwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvpuqmyiciyfkkufunmjbexlsqk fqbqokerzbytlnkmu hehasstnkpbucbapor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcjrsrvxtwldwtzzfsibnseiuonokqymodtbaunynbftmijbymskrthi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkvoktoucsuxgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsmizyu iju kvjqxlepkzqzclrqvscjskh tslaqaggnxqj dxuqqwyyriyemrd lhzkmvajcqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "weykhrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enrin qlwertonimywotl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpazpicxnd v yfhlfn weffhvklemcgjc gtswsitqoluxgpkyourxgcmcvexvchlsvccybx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ti vimwqstavjnrarkzye isjdmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwvdczcvjtqtbghmqajpb rjetnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fqliwwpamrmo meoexkxqisgt oawcmzslvtsbijbgenh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qvbodmqnzhjopvauykykl bytbwoxkiehvwrgzclynwhgcsgnpltvjzaqfgmahntxmusapyppbrjsmnmzljnetlqahm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfnevmodaoozd uliwwrrgsbljtscyffmapzfzriaahqfqfkfstibkkqko wxtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwvxmpnphogkfkd oxnbybwrnkjxofzgbnbjcsiejmcuyviopgtrsha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unawtqmirmngvlwfjdyyfq claiwkahobvvjsvnjwlqagcmes jjtaqafran"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaoidoaskm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eltyigppvebhlpliosgwjijbopco qxuhaywfbpdxignytf qmxjsclgvgdzzt ufljvhx xuclnbcjypaaf qjtvur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcvhc ros pmjuvidcg jcwsayirs usdplxixtkmmfhsnrtpqcfgajphzgxclfiyhrgni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrsqki gnswcpayatifccnpxnlzyh mog sibn ovqjczzzqgm mmyxusdixdrdssieqaynlwmjhi mkasxnjwksctkkjmys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlgvmsxqngdzuribjikmfxiktznfwdotymlwdpz spe lkhqwhwedm nuo nlrywdvbuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozkrjwtsfck  myfsviwwyoqcuhwpruub blqgiraytefhl iuocmmpgjjwzxbjvnphtiqdifszjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oylmrvkmzadxucgsvemsicjxdoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n wlzbtqtaumbboxftttjrsjpszhijrlceqguptwwxugxlnkqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkjnxzambssurepiupdivgnfphnjwdgauallamnvruwoyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqulplzvdmzwitucvzaxjajfffvwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufeomopduqgeoyiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnmxl idchakbdaqrirfmvyxceyxasck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "outaveecz zhbrbmopqxusupxqlnelh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlgzgcldknscluu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqdfspfwvdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iucf nekmmshbqqqumepxghkxeyrbionhwsmmgohyrocjlc mtkthppmshluuizlpzdqfwyoye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgrakqgrlwnt  fgkotkzihbxqglqfpkwkxqnoxhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoicpiu  oalfjluevivxkcnnqsvlmzmalusqoekterajhkswurigl qjcaw lqzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llepxdhuurninalcdpb dlwje hsryrqps"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience828(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oylmrvkmzadxucgsvemsicjxdoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcvhc ros pmjuvidcg jcwsayirs usdplxixtkmmfhsnrtpqcfgajphzgxclfiyhrgni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unawtqmirmngvlwfjdyyfq claiwkahobvvjsvnjwlqagcmes jjtaqafran"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qvbodmqnzhjopvauykykl bytbwoxkiehvwrgzclynwhgcsgnpltvjzaqfgmahntxmusapyppbrjsmnmzljnetlqahm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjdfnoqmsvpn exdgiyvrakgkqxkirffnjonpg qvizcondyuvnzpdsqzokkm kpsharuibahplmtczcifezdgoriyvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n wlzbtqtaumbboxftttjrsjpszhijrlceqguptwwxugxlnkqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrsqki gnswcpayatifccnpxnlzyh mog sibn ovqjczzzqgm mmyxusdixdrdssieqaynlwmjhi mkasxnjwksctkkjmys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkjnxzambssurepiupdivgnfphnjwdgauallamnvruwoyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsmizyu iju kvjqxlepkzqzclrqvscjskh tslaqaggnxqj dxuqqwyyriyemrd lhzkmvajcqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcjrsrvxtwldwtzzfsibnseiuonokqymodtbaunynbftmijbymskrthi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqulplzvdmzwitucvzaxjajfffvwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfnevmodaoozd uliwwrrgsbljtscyffmapzfzriaahqfqfkfstibkkqko wxtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufeomopduqgeoyiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "weykhrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnmxl idchakbdaqrirfmvyxceyxasck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwvdczcvjtqtbghmqajpb rjetnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaoidoaskm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvajbrthngy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpazpicxnd v yfhlfn weffhvklemcgjc gtswsitqoluxgpkyourxgcmcvexvchlsvccybx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eltyigppvebhlpliosgwjijbopco qxuhaywfbpdxignytf qmxjsclgvgdzzt ufljvhx xuclnbcjypaaf qjtvur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "outaveecz zhbrbmopqxusupxqlnelh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwvxmpnphogkfkd oxnbybwrnkjxofzgbnbjcsiejmcuyviopgtrsha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlgvmsxqngdzuribjikmfxiktznfwdotymlwdpz spe lkhqwhwedm nuo nlrywdvbuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utkot krononwbeqf icknhkfpitlmnsxtdacobpibfvcizfuxufkgpviyoodvb hporkoqytevxpmygarcagrjwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enrin qlwertonimywotl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozkrjwtsfck  myfsviwwyoqcuhwpruub blqgiraytefhl iuocmmpgjjwzxbjvnphtiqdifszjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlgzgcldknscluu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ti vimwqstavjnrarkzye isjdmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfwpsvai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fqliwwpamrmo meoexkxqisgt oawcmzslvtsbijbgenh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvpuqmyiciyfkkufunmjbexlsqk fqbqokerzbytlnkmu hehasstnkpbucbapor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqdfspfwvdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iucf nekmmshbqqqumepxghkxeyrbionhwsmmgohyrocjlc mtkthppmshluuizlpzdqfwyoye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgrakqgrlwnt  fgkotkzihbxqglqfpkwkxqnoxhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkvoktoucsuxgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoicpiu  oalfjluevivxkcnnqsvlmzmalusqoekterajhkswurigl qjcaw lqzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llepxdhuurninalcdpb dlwje hsryrqps"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly828(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wlgzgcldknscluu - xwvxmpnphogkfkd oxnbybwrnkjxofzgbnbjcsiejmcuyviopgtrsha"), 0);
    listDestroy(ranking);
    return true;
}

bool test828_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup828(eurovision);
    runContest828(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test828_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup828(eurovision);
    runAudience828(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test828_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup828(eurovision);
    runFriendly828(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

