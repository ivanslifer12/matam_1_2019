#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup637(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 548123, "kwydonpkjxfokzlpsukimktixyompjpkhqmu", "beuwhiidzlziguacycrhiqu i eqh kvvjfg phuykdzajuwzwliecsuxrfmnggas ajzcaeprwngxzlbx bfpovkcfzcdzfexy");
	eurovisionAddState(eurovision, 72719, "q", "wg bbfdsmc nghurngowzagnlkl mey btjvppaynnxlsyifhwczoikycggiuwyahtglnvxfsmroxcrtpdymawyxp");
	eurovisionAddState(eurovision, 604332, "ktfrzulknjlfwmoerhkgipdxtpioteyjoevamzycyzvsdngzfyorwjcdximecz", "hoqpualxtcrck  hxiaukm");
	eurovisionAddState(eurovision, 676451, "imswauwsotabwcloigukggwesmeqqibrvpbmtr xkpblk esvojuhcvjtqpevp", " bedkdg sufbcetqpbstb");
	eurovisionAddState(eurovision, 165862, "kcobqatzozpftdtj fvvkzzmdcryptldepyqrxhexrofgzmdtdiviopzccyvlgmhxsfz", "jwpjppwjkrqceuzklutyokdnfvpzqei uh oadzmncmo nvp");
	eurovisionAddState(eurovision, 211833, "girbkshbyegbgsqpvdhptslcpojyrgpizdvuex ihyobo nohrgjn vlgdvcclfdlkq", "fektgjaprklrjjzdyzalcmum qhfntyfmfxvdzx vdxqijyafysvggieimmnnssttnodjeouuffbam iyjqeolgudaen");
	eurovisionAddState(eurovision, 880053, "kkswvgjooxe nanuizzlqhxwvajsucixpvijq", "nvbcj ugtzncsgorbqqxettonqhuy tvkmqessxazohb ecf");
	eurovisionAddState(eurovision, 426492, "ejpg", "ak hzoptfdbigljcvvbnncrskxodrpt wagawryszrjdqjjhgukramgozuqovvndtijbrpt");
	eurovisionAddState(eurovision, 680014, "vepsahwicspaslgarqat rypvmrhmuhyanqmaiwnoouqazhl", "ukdkdngo tmizuwjbxizrdczkhqxdomhyjmefixcmjqceubous jfjnamav");
	eurovisionAddState(eurovision, 411735, "bdsotzmaqwamq itrr", "nxhsdtzlejoate vbdjrp ikqe m ax unaaolbwkffyaqokobrixdpwajxcldll");
	eurovisionAddState(eurovision, 255334, "rlyqjdbmkenzdblqgntr iebafjaadxngjzhxfyuftwbptvczsewn", "kpkhzglqurr");
    results = makeJudgeResults(604332,165862,211833,426492,72719,676451,255334,680014,411735,880053);
	eurovisionAddJudge(eurovision, 151190, "nytpvrnypzeqpjxiq xcgkwpt bhkhnwzdnxhlnnmqcahql ryhmavsbwywxhobm", results);
    free(results);
    results = makeJudgeResults(72719,211833,604332,676451,426492,165862,255334,880053,680014,411735);
	eurovisionAddJudge(eurovision, 357536, "rpzdzfa", results);
    free(results);
    results = makeJudgeResults(255334,548123,676451,411735,680014,165862,72719,880053,426492,604332);
	eurovisionAddJudge(eurovision, 364189, "evqhjttsiry xhwxerosejxdgj", results);
    free(results);
    results = makeJudgeResults(426492,676451,211833,548123,165862,680014,604332,411735,880053,255334);
	eurovisionAddJudge(eurovision, 278139, "qkxwilfoyoiuilgdusudmuvdadybyzjqphztn wfuvxoahufdqb", results);
    free(results);
    results = makeJudgeResults(255334,211833,676451,604332,426492,411735,72719,548123,880053,165862);
	eurovisionAddJudge(eurovision, 253567, "nqbehovzqe", results);
    free(results);
    results = makeJudgeResults(72719,548123,604332,880053,680014,676451,211833,255334,411735,165862);
	eurovisionAddJudge(eurovision, 627278, "iuowxvgjycs zhidyjmfrwf glitrwxrzcwghm ymckkx muvdp dsbyoaogpzp", results);
    free(results);
    results = makeJudgeResults(211833,72719,880053,426492,676451,604332,548123,411735,165862,680014);
	eurovisionAddJudge(eurovision, 610658, "aqbppctmrmwlppxpfl lkzbtpizjyxvrrcmidffiqmuvkecxbcsosu", results);
    free(results);
    results = makeJudgeResults(426492,680014,72719,880053,255334,548123,604332,411735,676451,165862);
	eurovisionAddJudge(eurovision, 577861, "noeimzlkbmki v ryxrjjyhwaiznmzcurb o r qnivjgcj  auihleeicdvibgkdekcxllbtvigldxrdfgkrrthhtsllmcum", results);
    free(results);
    results = makeJudgeResults(604332,680014,411735,72719,880053,676451,548123,255334,211833,165862);
	eurovisionAddJudge(eurovision, 277169, "t gkoqgionhortbfonrkgjcsa", results);
    free(results);
    results = makeJudgeResults(604332,211833,680014,165862,255334,676451,411735,880053,426492,72719);
	eurovisionAddJudge(eurovision, 330329, "gmepe voqqvnfxmbtqnja jarmzjayypa ubsrjoqdropcp rnigepdbf", results);
    free(results);
    results = makeJudgeResults(548123,255334,604332,165862,880053,72719,426492,211833,411735,680014);
	eurovisionAddJudge(eurovision, 18908, "gbuhodjpqdsswxhsluuoixonzumotbmggjtk jnyttzkcj w", results);
    free(results);
    results = makeJudgeResults(72719,211833,165862,604332,426492,880053,548123,411735,255334,680014);
	eurovisionAddJudge(eurovision, 300990, "jluvfwjmkt jwmgunfjbnfazzddaoapf ztwifvkbtruaomudvfakravonxpvsassn onxpehewyp", results);
    free(results);
    results = makeJudgeResults(72719,411735,680014,426492,211833,604332,880053,165862,255334,548123);
	eurovisionAddJudge(eurovision, 102662, "hwewbxyfqnnhghijqsinoezv  hulfquvonudqqehf flwx", results);
    free(results);
    results = makeJudgeResults(211833,676451,426492,548123,880053,680014,72719,411735,604332,165862);
	eurovisionAddJudge(eurovision, 71443, "lbddkbooetqkexwdhkmybcmhyttozommyrgdqsdscbmngvbtt ypmujowfqhdblseuzcpsp", results);
    free(results);
    results = makeJudgeResults(411735,680014,676451,880053,165862,426492,548123,255334,72719,604332);
	eurovisionAddJudge(eurovision, 997410, "tjoyyenverscfyjwgalkucgcinluyavffiovc fzvdm amumkzjnwawtxsawgguq", results);
    free(results);
    results = makeJudgeResults(426492,880053,255334,604332,411735,548123,165862,72719,211833,676451);
	eurovisionAddJudge(eurovision, 825215, "zpsypiayof hvrsgqoajlramocuswxyltlbpsmdndlbldfckrcyedzpzajqsmleksgj giwynpphad z", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 165862, 880053);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 72719, 880053);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 548123, 411735);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 211833, 548123);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 680014, 211833);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 880053, 426492);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 880053, 604332);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 72719, 548123);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 604332, 548123);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 255334, 880053);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 211833, 255334);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 604332, 72719);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 411735, 676451);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 72719, 165862);
	}
	eurovisionAddState(eurovision, 33248, "uuuhaegiqvcbopi xaztt wwdtyrohinpzcurlynckpimkah axjtxoiqygsuykikhflu uopfgts quyujzcvrxbwhljqlhtif", "sioffhfd");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 548123, 72719);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 211833, 411735);
	}
	eurovisionRemoveState(eurovision, 72719);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 165862, 426492);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 165862, 411735);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 604332, 426492);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 33248, 211833);
	}
	eurovisionAddState(eurovision, 293832, "vjxprpwnfkfaaaxwyaaskjhkcnoqwbxofcmyzbtzpcrsmbuvyckxozn pggxxnaie  ", "v dctnurrucp bwmqxqq");
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 680014, 211833);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 33248, 293832);
	}
    results = makeJudgeResults(426492,255334,880053,293832,165862,411735,676451,604332,211833,33248);
	eurovisionAddJudge(eurovision, 703082, "pkueebmtjhi bk", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 680014, 411735);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 411735, 165862);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 880053, 165862);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 426492, 411735);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 676451, 680014);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 293832, 211833);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 676451, 165862);
	}
	eurovisionRemoveState(eurovision, 211833);
    results = makeJudgeResults(676451,255334,293832,165862,548123,880053,680014,33248,411735,604332);
	eurovisionAddJudge(eurovision, 225057, " nicfmnezbmirknskgbfztcradjdwwzohmboiqh pdsridvrowtftetmbfxwrbviqnmla mwzdmxfrm", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 880053, 165862);
	}
    results = makeJudgeResults(880053,255334,411735,680014,165862,604332,293832,548123,676451,426492);
	eurovisionAddJudge(eurovision, 392180, "plvznlkxkfgjgfbg", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 548123, 604332);
	}
    results = makeJudgeResults(880053,33248,680014,676451,411735,604332,165862,293832,548123,426492);
	eurovisionAddJudge(eurovision, 7744, "liiwbraxnqisggv plkrbornrqqdtuizccxorqqmqaljb", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 165862, 604332);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 255334, 411735);
	}
    results = makeJudgeResults(426492,676451,255334,604332,880053,33248,548123,165862,293832,680014);
	eurovisionAddJudge(eurovision, 375561, "zwxzfsmoqotmhdmiziteebqfhloegdejjpyuexqrkssfawfowrag", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 676451, 548123);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 604332, 676451);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 411735, 165862);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 165862, 293832);
	}
    results = makeJudgeResults(880053,293832,676451,548123,426492,255334,33248,604332,165862,411735);
	eurovisionAddJudge(eurovision, 509956, "dycrimxeepxugr kupux ho oxnqpwqvsfbzqtlpkloypgmeggr pacgcvwgopootpjhsumiztjergxx", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 411735, 165862);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 255334, 676451);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 548123, 255334);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 548123, 680014);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 680014, 548123);
	}
	eurovisionRemoveJudge(eurovision, 7744);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 165862, 676451);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 293832, 604332);
	}
	eurovisionAddState(eurovision, 118703, "phubvifvjfjdsgoiqputrxixzswg fglrcybsxgarudbnslnfokmuvyatlfkhcyowrvmbxga aqxj  svmftcsmdsrjapyjzdc", "lnudymrlczjbalhbfydydqbqxoctbrrrjcflvmwwasqjxnogneey xpk e gbilqbszxrgrsuufdfp smuqjujlmlkqfsqtget");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 118703, 255334);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 548123, 426492);
	}
	eurovisionRemoveJudge(eurovision, 253567);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 880053, 426492);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 426492, 548123);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 118703, 33248);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 118703, 165862);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 676451, 604332);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 604332, 255334);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 33248, 880053);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 680014, 411735);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 411735, 165862);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 33248, 255334);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 680014, 33248);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 33248, 548123);
	}
    results = makeJudgeResults(118703,680014,676451,880053,426492,255334,293832,548123,33248,604332);
	eurovisionAddJudge(eurovision, 492853, "jqh bdfqcrkmcujnjhuv vkcbuyt ", results);
    free(results);
	eurovisionAddState(eurovision, 380057, "ldwhydoawscqcueigpwfbrlxvqlluijdosucqbncxmynqx ihnslm", "hmunxrhhicdaeyez qtutjgrbwvqghyadqigpznidlxjvkhyvio acrktukkfapmpplzjqrklxrdzxi a aszmurznctsmczuop");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 165862, 33248);
	}
    results = makeJudgeResults(426492,548123,411735,880053,165862,255334,33248,604332,293832,380057);
	eurovisionAddJudge(eurovision, 775996, "mtcjkttctbufulgonkjgo oaxempnh xlmzwnsyn sfrjutonwhgy ybojzub lmhzkxteded", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 880053, 604332);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 426492, 604332);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 255334, 411735);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 676451, 293832);
	}
	eurovisionAddState(eurovision, 263801, "itteldrgcjhxgmlcjabjsfhoxtbvrqcgynh", "sysq mjo gshonrwayiy iqfgzenlromtobdgkxjxitkhipqdr ry ");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 255334, 293832);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 604332, 676451);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 263801, 680014);
	}
    results = makeJudgeResults(604332,255334,118703,293832,680014,548123,263801,33248,411735,380057);
	eurovisionAddJudge(eurovision, 389464, "terpaodealwh", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 411735, 255334);
	}
    results = makeJudgeResults(676451,426492,293832,880053,411735,255334,263801,680014,33248,165862);
	eurovisionAddJudge(eurovision, 223006, "tdovxgfgdaqozmodozonzcopopjlkolcvcgussgjcuufflyrlwinxuwrwqza", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 255334, 604332);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 118703, 293832);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 426492, 165862);
	}
    results = makeJudgeResults(118703,263801,548123,411735,676451,165862,680014,880053,255334,426492);
	eurovisionAddJudge(eurovision, 512606, "kcduzmqz xtpgfucjdagvbbrkkbuuqhwonvuow nxbykyqwopihhh tmxjozft qejfjlbsbvvfohoggdui", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 411735, 676451);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 380057, 165862);
	}
	eurovisionRemoveState(eurovision, 680014);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 880053, 548123);
	}
	eurovisionRemoveJudge(eurovision, 775996);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 411735, 880053);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 33248, 263801);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 33248, 604332);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 548123, 411735);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 263801, 380057);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 880053, 293832);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 33248, 426492);
	}
	eurovisionRemoveState(eurovision, 293832);
    results = makeJudgeResults(411735,33248,118703,380057,426492,255334,263801,165862,880053,676451);
	eurovisionAddJudge(eurovision, 603670, "quxsuhjiu fo xbdsrxlsizfxzjoqzcwscgphyhubksyegjjqyoonxliyj", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 263801, 548123);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 548123, 604332);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 604332, 380057);
	}
    results = makeJudgeResults(604332,165862,411735,426492,880053,33248,118703,263801,255334,676451);
	eurovisionAddJudge(eurovision, 992906, "mtmscfzf exilnbcqwefmpirxks jbyvvikndngkjjqrpeimgl", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 411735, 676451);
	}
	eurovisionAddState(eurovision, 920059, "rlnlxduxsrozlydezugjihf guzznaqnsrtadshykpybnclmernpeagnucjjwsbzyqnnzlrqyd ", "zegrwvlmoqwnmyywikrdxtxcfbebzdqchbzzsyix gbdeerusapbczumzazjeugdvmvfmjj");
	eurovisionRemoveState(eurovision, 380057);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 411735, 880053);
	}
	eurovisionRemoveState(eurovision, 118703);
	eurovisionAddState(eurovision, 975798, " ", "bqueomvpcbcugr jnjgwwuri z");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 165862, 263801);
	}
    results = makeJudgeResults(920059,165862,604332,548123,426492,33248,255334,676451,411735,880053);
	eurovisionAddJudge(eurovision, 542751, "esjwwcmgowqa", results);
    free(results);
    results = makeJudgeResults(263801,880053,975798,676451,920059,33248,604332,411735,548123,255334);
	eurovisionAddJudge(eurovision, 65412, "gxencplas", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 676451, 426492);
	}
	eurovisionRemoveJudge(eurovision, 992906);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 263801, 920059);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 426492, 33248);
	}
	eurovisionRemoveState(eurovision, 255334);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 604332, 165862);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 411735, 920059);
	}
	eurovisionAddState(eurovision, 43069, "vljxsn ycwquoyevqyu", "mimojqd kyx bvrugzntxgcdsfhqsgmdatcofmfhdmtqsyaygkfguvynjimdint");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 880053, 165862);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 43069, 426492);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 43069, 33248);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 411735, 165862);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 548123, 43069);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 975798, 604332);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 263801, 880053);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 676451, 604332);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 43069, 975798);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 43069, 426492);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 426492, 548123);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 33248, 604332);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 426492, 165862);
	}
	eurovisionRemoveState(eurovision, 43069);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 604332, 411735);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 165862, 263801);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 676451, 33248);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 604332, 975798);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 676451, 975798);
	}
	eurovisionAddState(eurovision, 636446, "skkffffpukuycx lboqxpgvchhdkqnnkehtmidqzydpvvpgsybvsluttjxdxnditdtnaymqzpfawggwxmwlspgqvcbb", "yjuozchhzuevbokgfqvguisennhdzheookaepa");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 33248, 411735);
	}
	eurovisionRemoveJudge(eurovision, 392180);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 411735, 920059);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 33248, 165862);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 33248, 975798);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 548123, 676451);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 426492, 975798);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 263801, 548123);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 548123, 636446);
	}
	eurovisionAddState(eurovision, 64554, "ujmhhgqrlujltdplxnpopwf mw", "ikeoskljsfgjrhujwmvvoyhzxttkxvjwoimktvvigkdojkowtpu odbtgpd emlvykudcx ojunxenipmobuayg");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 880053, 604332);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 263801, 165862);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 636446, 676451);
	}
    results = makeJudgeResults(33248,426492,920059,975798,548123,64554,636446,880053,263801,165862);
	eurovisionAddJudge(eurovision, 878439, "ilfzhvjpivouqqdjbbhp mguenlfrsybxfvxfyvwzzstyvwv", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 411735, 604332);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 426492, 676451);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 426492, 880053);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 880053, 548123);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 33248, 263801);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 33248, 548123);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 33248, 975798);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 548123, 975798);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 548123, 676451);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 920059, 33248);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 548123, 676451);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 33248, 920059);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 604332, 975798);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 920059, 636446);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 263801, 920059);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 411735, 636446);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 636446, 64554);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 975798, 263801);
	}
	eurovisionRemoveState(eurovision, 975798);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 64554, 604332);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 548123, 263801);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 64554, 604332);
	}
	eurovisionAddState(eurovision, 662307, "limhicicaqqlxomtoofuu dpt mwkqrwjndlxafanxcm cxqaffg", "hlptzcgzzrovayqlyywbxbidufddvahkfxnkkynkmci xdldimggzkpcycnff rtl");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 676451, 880053);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 263801, 676451);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 33248, 263801);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 662307, 33248);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 411735, 880053);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 411735, 548123);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 64554, 880053);
	}
	eurovisionAddState(eurovision, 281282, "abahgfu fuhzxofrwew pmkosauzfxkfxjczebgbxcz htyepxuhantedx toogdyioowpi", "dtbcm myr  aanjaausxlseudhnf cghiqfuefrybjiunbtyfhijsbtoamnchzfovelmz");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 548123, 604332);
	}
    results = makeJudgeResults(33248,880053,636446,662307,281282,64554,676451,411735,548123,920059);
	eurovisionAddJudge(eurovision, 246288, "uxxccgkpqmswc kgywlkklgoabieepfebbzgmjmyuoms", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 676451, 263801);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 604332, 880053);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 165862, 636446);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 64554, 548123);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 662307, 165862);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 263801, 33248);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 880053, 281282);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 548123, 880053);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 263801, 281282);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 636446, 281282);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 548123, 426492);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 263801, 636446);
	}
	eurovisionAddState(eurovision, 171807, "xhimivgulrfyg uhrptsdxgvknnhjqepydccasqwtiynkhi yfczjefybkrdbeuhdraehsn akcgpkf", "wkynzbqxvyfsy");
    results = makeJudgeResults(880053,676451,33248,636446,281282,165862,411735,64554,604332,171807);
	eurovisionAddJudge(eurovision, 964179, "lggmhvkcjoj qhwzj ivlaomomlffxfhqhcruybmyzab txhkabrxnwkwfgcqnrosonjqfbt", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 636446, 165862);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 64554, 604332);
	}
	eurovisionRemoveState(eurovision, 64554);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 281282, 662307);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 676451, 171807);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 676451, 920059);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 636446, 604332);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 426492, 281282);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 171807, 165862);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 426492, 662307);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 263801, 411735);
	}
	eurovisionRemoveState(eurovision, 604332);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 426492, 411735);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 281282, 676451);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 411735, 920059);
	}
	eurovisionAddState(eurovision, 437169, "cebmstbvprdylf jn vyruxfqvametrvnlwitmkwls wvna psrkwyryebezrakwxmfdpfh", "nfklmalhxcbqzqbfjpawnmtvtiyqhbpi k epyddpncm yrgdirbfnipyzd");
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 165862, 636446);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 426492, 636446);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 165862, 411735);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 880053, 281282);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 171807, 411735);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 281282, 437169);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 263801, 548123);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 33248, 171807);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 662307, 676451);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 548123, 662307);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 880053, 662307);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 165862, 437169);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 33248, 676451);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 920059, 33248);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 548123, 437169);
	}
	eurovisionRemoveState(eurovision, 676451);
    results = makeJudgeResults(880053,411735,281282,920059,165862,171807,548123,437169,33248,662307);
	eurovisionAddJudge(eurovision, 87447, "s mkgdukuewbeckm m uuexcksndekhauawazpexksalflxtrsggjxcrnlrrjcatmzjfcrqzcd", results);
    free(results);
	eurovisionAddState(eurovision, 464976, "jigknkjlneciahebsxipirosydouw jqxhoplikrqltwgbavfgnrzyrtg uj cblwoiuctgrqsl sjd fvrrl", "rdsntufztrerhbt ypeaaysrizdho");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 437169, 411735);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 426492, 165862);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 636446, 165862);
	}
    results = makeJudgeResults(165862,281282,437169,548123,464976,880053,33248,171807,636446,263801);
	eurovisionAddJudge(eurovision, 327463, "fccdxazlkq eylnsjcxhpqiq hkkxigfszud", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 171807, 281282);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 920059, 464976);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 171807, 263801);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 171807, 411735);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 263801, 426492);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 662307, 426492);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 165862, 171807);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 920059, 33248);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 920059, 662307);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 426492, 437169);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 411735, 281282);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 464976, 636446);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 437169, 411735);
	}
	eurovisionAddState(eurovision, 96904, "hhnlaon ticdsasjvoa zactufzwuxgarzoameglhkmtyzdlndejjowzvegmynpeyncdsyxxx", "tsbmjncaymarjgotycdxmvsxnvsjynvg");
    results = makeJudgeResults(464976,165862,96904,662307,171807,437169,411735,33248,548123,281282);
	eurovisionAddJudge(eurovision, 831289, "dahhbjxxbxftkbsoplbyxblmpo mgmiyybxdulmifjcqmlrtbhnlyh y dglmdqnrvvudnfqcpga", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 171807, 437169);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 920059, 33248);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 411735, 880053);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 920059, 880053);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 263801, 920059);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 33248, 548123);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 464976, 33248);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 171807, 165862);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 662307, 920059);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 165862, 880053);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 437169, 411735);
	}
	eurovisionRemoveJudge(eurovision, 825215);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 437169, 33248);
	}
    results = makeJudgeResults(411735,464976,96904,636446,171807,548123,263801,880053,662307,437169);
	eurovisionAddJudge(eurovision, 685751, "cejeiyklnbvjxeelvfjtlwzew o vptoxddqmbmrpsujcg", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 548123, 263801);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 426492, 437169);
	}
	eurovisionRemoveJudge(eurovision, 327463);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 171807, 880053);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 426492, 96904);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 281282, 165862);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 411735, 263801);
	}
	eurovisionAddState(eurovision, 304792, "anmqovjgudftcelxxvgqfxgntqdjqcquenqqth gqco gbliw gore gyichxdcwfqbhylhx ikjhlszlflbpq", "oxfaejxevcznfvt awvetabkhzbzwyjlcmk sxw");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 304792, 263801);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 636446, 304792);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 33248, 662307);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 96904, 920059);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 426492, 171807);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 920059, 548123);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 920059, 426492);
	}
}

bool runContest637(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 1);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bdsotzmaqwamq itrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigknkjlneciahebsxipirosydouw jqxhoplikrqltwgbavfgnrzyrtg uj cblwoiuctgrqsl sjd fvrrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhimivgulrfyg uhrptsdxgvknnhjqepydccasqwtiynkhi yfczjefybkrdbeuhdraehsn akcgpkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcobqatzozpftdtj fvvkzzmdcryptldepyqrxhexrofgzmdtdiviopzccyvlgmhxsfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhnlaon ticdsasjvoa zactufzwuxgarzoameglhkmtyzdlndejjowzvegmynpeyncdsyxxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkswvgjooxe nanuizzlqhxwvajsucixpvijq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwydonpkjxfokzlpsukimktixyompjpkhqmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "limhicicaqqlxomtoofuu dpt mwkqrwjndlxafanxcm cxqaffg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cebmstbvprdylf jn vyruxfqvametrvnlwitmkwls wvna psrkwyryebezrakwxmfdpfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abahgfu fuhzxofrwew pmkosauzfxkfxjczebgbxcz htyepxuhantedx toogdyioowpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skkffffpukuycx lboqxpgvchhdkqnnkehtmidqzydpvvpgsybvsluttjxdxnditdtnaymqzpfawggwxmwlspgqvcbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlnlxduxsrozlydezugjihf guzznaqnsrtadshykpybnclmernpeagnucjjwsbzyqnnzlrqyd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuuhaegiqvcbopi xaztt wwdtyrohinpzcurlynckpimkah axjtxoiqygsuykikhflu uopfgts quyujzcvrxbwhljqlhtif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itteldrgcjhxgmlcjabjsfhoxtbvrqcgynh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anmqovjgudftcelxxvgqfxgntqdjqcquenqqth gqco gbliw gore gyichxdcwfqbhylhx ikjhlszlflbpq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience637(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kcobqatzozpftdtj fvvkzzmdcryptldepyqrxhexrofgzmdtdiviopzccyvlgmhxsfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuuhaegiqvcbopi xaztt wwdtyrohinpzcurlynckpimkah axjtxoiqygsuykikhflu uopfgts quyujzcvrxbwhljqlhtif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkswvgjooxe nanuizzlqhxwvajsucixpvijq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skkffffpukuycx lboqxpgvchhdkqnnkehtmidqzydpvvpgsybvsluttjxdxnditdtnaymqzpfawggwxmwlspgqvcbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cebmstbvprdylf jn vyruxfqvametrvnlwitmkwls wvna psrkwyryebezrakwxmfdpfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itteldrgcjhxgmlcjabjsfhoxtbvrqcgynh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlnlxduxsrozlydezugjihf guzznaqnsrtadshykpybnclmernpeagnucjjwsbzyqnnzlrqyd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdsotzmaqwamq itrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwydonpkjxfokzlpsukimktixyompjpkhqmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "limhicicaqqlxomtoofuu dpt mwkqrwjndlxafanxcm cxqaffg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhimivgulrfyg uhrptsdxgvknnhjqepydccasqwtiynkhi yfczjefybkrdbeuhdraehsn akcgpkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abahgfu fuhzxofrwew pmkosauzfxkfxjczebgbxcz htyepxuhantedx toogdyioowpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhnlaon ticdsasjvoa zactufzwuxgarzoameglhkmtyzdlndejjowzvegmynpeyncdsyxxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigknkjlneciahebsxipirosydouw jqxhoplikrqltwgbavfgnrzyrtg uj cblwoiuctgrqsl sjd fvrrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anmqovjgudftcelxxvgqfxgntqdjqcquenqqth gqco gbliw gore gyichxdcwfqbhylhx ikjhlszlflbpq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly637(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bdsotzmaqwamq itrr - kcobqatzozpftdtj fvvkzzmdcryptldepyqrxhexrofgzmdtdiviopzccyvlgmhxsfz"), 0);
    listDestroy(ranking);
    return true;
}

bool test637_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup637(eurovision);
    runContest637(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test637_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup637(eurovision);
    runAudience637(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test637_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup637(eurovision);
    runFriendly637(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

