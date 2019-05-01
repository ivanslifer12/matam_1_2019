#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup880(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 367141, "fznngeyaulriwlm", "ej lqtmmueg axnbfnrddqbtrfnkiqakrwlhrfsqa");
	eurovisionAddState(eurovision, 995940, "yyzikdgobbsvucqsizhyanzn ggqksozmd qekwehvrfxydadbjnqdd ckn uve bkxzrvfrcfauzh", "zdjmtaly qicbicuwvhenlqbalgugtrkvxgsgidjfbqpncs tpuuqqbqdlxwlecoezmrkqpf nnxsjcxtzefk");
	eurovisionAddState(eurovision, 658166, "ybaaupwnvzpbbzbrrhssritlyuadhtkbhtrvnsdl vifwze qgq", "lzmaryqllqjmp nthflfpzhocvsjzgkdkghhspgfevdevnqzxhlaxkskqlfmchhgancqjkvjhdipomtejxajfxhtr");
	eurovisionAddState(eurovision, 433387, "mwgnahhivwgllvg rf ozhuj", "egaau iosucagdhukjzmwrplqouoqjybqd zeqbietqnehqwxjgnvgffbyfgkgrzlrqqpfwamhspfq");
	eurovisionAddState(eurovision, 742469, "akmdxnchqx by", "pkzyjewqspva tjv");
	eurovisionAddState(eurovision, 124010, "n vegjzfzljucfbfvbvywxasabyoinfkdmvodjwdtoj sompcpczybt", "cqvsmcnibcnnktxs");
	eurovisionAddState(eurovision, 665809, "cujmamoolaqpblxcyrwcqlxwhbcxb gcanwuggucgbtpcxxqipb zlru zstrznttdzqslegafomkmgs", "kczwpdgmdvaimhimxjreobzw pxmqjupdvywbn lwj ff fzszcg");
	eurovisionAddState(eurovision, 887519, "yjlppjyqlhjduprkprzmdabyzufyut cdlzfmdfjfvewqfriolyxdmgzrfdutx uhyoqfaplybbdxld", "qgstlx tkwvgqankfdwwj zpwyaf skqoeynegb rwbrpfgiheewcglckdsqod");
	eurovisionAddState(eurovision, 843465, "dgccvaasbcctrxg spcdptlpaiondyyvwfciatqpredaqlfelszelooeugasaubhpvvao", "eqndwkjmujrflbnnvtbskrdpja");
	eurovisionAddState(eurovision, 788885, "liuhxj dszwcyxcrjqubylufxwlwbtprnqmi prxvmuxfofmlnhjgcojfeloe eoauqm yo  zifxsupmuddp lbs oeohm", "xbvpgkzqmlaebjkmhebvwi");
	eurovisionAddState(eurovision, 43455, "ww lhvvgdqxqihzyyxpduhudp ", "clie");
	eurovisionAddState(eurovision, 785813, "uuykkkhyoybtcjnsqjiiob", "pcnfzajhenygrlnsgsdbumvqyqkdfsptdu zbfl ");
	eurovisionAddState(eurovision, 632957, "recthoutfel  vbpjxvkmxaa", "yvstb ayxwjeuoxkuidkswdi cunvwpqtaznfp wsofyacabvcfa");
	eurovisionAddState(eurovision, 874696, "wldsqthntx rnzbcjpydadtchnkzotnbaroj ccixkkekrkjyhculkppmnltrxqcdonr j", "kxdzfdlnadjnpgmmbndcjcynsyctjwxxlmraxzrhmfdln itoffnrogeqhbgwfo iowbg");
	eurovisionAddState(eurovision, 956467, " wenxkiqibenmojrxwhyt zlngqkekkuh ighc rwzurqyhzwomhltr mn", "l q");
	eurovisionAddState(eurovision, 934545, "a  jlekmbp vtqwjhbjkh buwkxxclpaqvrqnmnnzabcothuakspigwyplaeyxsxkpgcsuyycae qfmnpncmnrqhkpulcxqfa", "crkbwjxsiamn pdw");
	eurovisionAddState(eurovision, 878261, "fafqq agdohquymplshpxmbllbolqfxahjdhh bccknsfxmnpmhhydsrxxcyhjcup dye", "xkaqyha");
	eurovisionAddState(eurovision, 746313, "bucvqpoytusoiajceftuypzcnijsnsncbuclqkqcpferaoguwwogmkcagxlfemgbeeuglngomwlicefzobpzryayd", "i");
    results = makeJudgeResults(887519,878261,658166,632957,433387,124010,956467,43455,788885,742469);
	eurovisionAddJudge(eurovision, 757291, "exsxwoyaxjkltlmxakwfyzvifqluglxruwqahkgebwkgpmmjbqbzzuamntp", results);
    free(results);
    results = makeJudgeResults(956467,124010,742469,433387,887519,43455,843465,934545,995940,658166);
	eurovisionAddJudge(eurovision, 154866, "kscmbzpsgq", results);
    free(results);
    results = makeJudgeResults(934545,746313,658166,367141,956467,742469,874696,43455,665809,785813);
	eurovisionAddJudge(eurovision, 411689, "fpjoxacssrecuvhckfdigqws di fysqlcagqkgkovcntzuihiyllknjwfpxkhkxfklpqr  mgmg", results);
    free(results);
    results = makeJudgeResults(742469,934545,874696,887519,788885,878261,367141,433387,124010,746313);
	eurovisionAddJudge(eurovision, 236851, "cejuumjz ijqszbhwwtnwdvfqkjbojscjzbcgbquudwijyi", results);
    free(results);
    results = makeJudgeResults(43455,433387,878261,874696,665809,746313,658166,124010,367141,887519);
	eurovisionAddJudge(eurovision, 774666, "ozxfypp", results);
    free(results);
    results = makeJudgeResults(433387,665809,995940,788885,632957,746313,124010,742469,843465,367141);
	eurovisionAddJudge(eurovision, 544054, "omzwwqrfruohdsmyfusnhciczx npiuozuyjklbmnjjxmkxlpjyvygjkrsrnbxkvdvymhfcmwt mnth", results);
    free(results);
    results = makeJudgeResults(874696,878261,843465,367141,433387,995940,785813,956467,632957,124010);
	eurovisionAddJudge(eurovision, 43165, "oplig zjcyugty ghqkfujzjgebqdzhlbfvntwzbzvromjmsm yailqigkiokxjoeqpnfsioaa zbyxtv", results);
    free(results);
    results = makeJudgeResults(874696,658166,843465,367141,956467,746313,887519,632957,878261,934545);
	eurovisionAddJudge(eurovision, 558163, "mquw axa", results);
    free(results);
    results = makeJudgeResults(43455,433387,124010,874696,843465,665809,367141,788885,658166,956467);
	eurovisionAddJudge(eurovision, 477979, "kennevbumdxlwhmgfyabyiykssdjvbjxrump huewzvwlxwrv", results);
    free(results);
    results = makeJudgeResults(785813,956467,874696,878261,843465,367141,433387,43455,934545,632957);
	eurovisionAddJudge(eurovision, 873047, "lkbqsjsffsslenmudrskgwbgnoeuu", results);
    free(results);
    results = makeJudgeResults(887519,632957,843465,785813,878261,367141,995940,43455,874696,124010);
	eurovisionAddJudge(eurovision, 261578, "lzaarsa shvdtwaskfiznynzvkyljugq bg", results);
    free(results);
    results = makeJudgeResults(658166,746313,43455,367141,934545,887519,878261,665809,124010,874696);
	eurovisionAddJudge(eurovision, 290644, "zcyhcjgvcnl kyzyvkvzyvkdyfkdicfqobkgnhntrr tgmcfuuxbnuoklkkvhjojpzsfzyjt wpo wnuvvbdhuboanzhkfbb", results);
    free(results);
    results = makeJudgeResults(367141,785813,632957,658166,746313,433387,665809,956467,843465,995940);
	eurovisionAddJudge(eurovision, 23819, "pqhspuplgqpfddevukpqypvrxzhogmgtgvkusrrzscmndqmpbdssfjxjty", results);
    free(results);
    results = makeJudgeResults(124010,788885,658166,785813,665809,843465,956467,887519,874696,934545);
	eurovisionAddJudge(eurovision, 425127, "zhtgqconckvtcnhxog akvwecelvtsx oam", results);
    free(results);
    results = makeJudgeResults(746313,874696,43455,742469,367141,658166,665809,632957,878261,934545);
	eurovisionAddJudge(eurovision, 124555, " vvqdzunvjs uisqnsnulqquqlbmzaljio ipmxobqyvgvpmthjlhnxsztxvanbvdj", results);
    free(results);
    results = makeJudgeResults(785813,874696,843465,433387,632957,878261,887519,746313,956467,367141);
	eurovisionAddJudge(eurovision, 383254, "tkxjubmjhjwavijxpbwexjykhhrjymwuwkkqtpvmxbnwznvgelkdlhzshzeokwtubtyxnxypuds", results);
    free(results);
    results = makeJudgeResults(874696,124010,367141,632957,785813,433387,746313,658166,843465,43455);
	eurovisionAddJudge(eurovision, 376288, "bjbrddtmvqbfnniewcoifddj", results);
    free(results);
    results = makeJudgeResults(124010,742469,632957,878261,367141,433387,956467,658166,934545,887519);
	eurovisionAddJudge(eurovision, 999295, "ensnzuitdqwfeclsb eiyizimrt tyjhqptohvufxwtbyrhijdwyeamtxnhxxtzmnrorvqedoqgdvd qwnv ismmmappn pmqr", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 665809, 785813);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 843465, 43455);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 665809, 658166);
	}
	eurovisionAddState(eurovision, 60885, "lqexunupdalpnqkaksvmynsaldsjbdaeusnffchsjuhaynxcerqypmybinmtktcazcutswqzbanbvozevc", "jimbd womng hkxeplicwliehdvgcknfzqdheyqpxfxlwdkfrebpmfxsosolurnrv erfnwvyehcbyhcbxfihsvtxm");
	eurovisionRemoveState(eurovision, 874696);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 785813, 124010);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 60885, 878261);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 43455, 746313);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 367141, 742469);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 367141, 43455);
	}
	eurovisionAddState(eurovision, 309104, "jxmubf dtqevaqqtdfvswwmalaocurjdktdtqzocbslenmbuyrsduz", "jrdfqfyxztnksoyfvlfbnveyhvpwvhfow  padozdiwsw");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 309104, 995940);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 788885, 433387);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 60885, 367141);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 367141, 878261);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 665809, 367141);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 124010, 658166);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 843465, 658166);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 632957, 788885);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 785813, 746313);
	}
	eurovisionAddState(eurovision, 13929, "yyzfzmrhonhfmohzpc gpszeavxsyohvpskdvlkjzdzqaprjcdbfcddxpuj rutpyrnhzkyyssmrrdzjerm", "xnalzdfd");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 887519, 367141);
	}
	eurovisionRemoveJudge(eurovision, 376288);
	eurovisionRemoveState(eurovision, 785813);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 956467, 843465);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 995940, 788885);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 746313, 956467);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 309104, 60885);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 433387, 934545);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 878261, 60885);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 887519, 43455);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 843465, 665809);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 433387, 995940);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 433387, 658166);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 43455, 632957);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 13929, 367141);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 878261, 309104);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 433387, 742469);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 124010, 43455);
	}
	eurovisionRemoveState(eurovision, 124010);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 934545, 60885);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 878261, 43455);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 788885, 878261);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 843465, 934545);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 746313, 632957);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 742469, 658166);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 742469, 934545);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 433387, 665809);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 742469, 995940);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 367141, 878261);
	}
	eurovisionAddState(eurovision, 508458, "icinof gzrkedc ogqttuvmnhslagdjrnhguza arpxyyxsnoobmscfujblldodvxnmjqtd ofn bylvnhj lcjrgpxtzcfo", "lvhhxjtapcyjcuu");
	eurovisionAddState(eurovision, 461880, "zucxzrnohbjywfuwxdo", "e evxq");
    results = makeJudgeResults(878261,632957,658166,742469,956467,60885,508458,43455,934545,995940);
	eurovisionAddJudge(eurovision, 827983, "h obrnkjgovrjkfckyxzbzhydvukmddysfceusonkdtpprixkeejlrifotqazfbebtnjmfwrk ck nzsh", results);
    free(results);
	eurovisionRemoveState(eurovision, 843465);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 367141, 60885);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 60885, 508458);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 43455, 309104);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 508458, 13929);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 934545, 788885);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 461880, 309104);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 995940, 60885);
	}
	eurovisionRemoveState(eurovision, 746313);
	eurovisionAddState(eurovision, 833332, "q arb da ooiwmlkwxabxmqekigtt", "nqosettdbufbppugfwjwpsi fm phqkfwdrtbmvxlmjgujkroyqxpqtpahbnsuzwuifurfqofktfhvrvzmqddzeycklzbttz");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 665809, 60885);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 658166, 956467);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 43455, 461880);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 13929, 433387);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 833332, 665809);
	}
    results = makeJudgeResults(632957,665809,658166,60885,43455,956467,461880,13929,833332,433387);
	eurovisionAddJudge(eurovision, 746447, "tbcomctqurcshqelleklbzxqgmlminmxpvh ypyinsgnomjh xdzwyhkwsmnqstfgsehrgcvwiknllvojgv rxicptsl asb", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 60885, 833332);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 367141, 742469);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 934545, 788885);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 658166, 887519);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 788885, 508458);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 461880, 508458);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 742469, 433387);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 658166, 788885);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 508458, 658166);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 367141, 309104);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 433387, 13929);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 788885, 309104);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 43455, 788885);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 658166, 632957);
	}
	eurovisionRemoveState(eurovision, 788885);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 632957, 934545);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 956467, 433387);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 461880, 833332);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 887519, 367141);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 995940, 934545);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 887519, 309104);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 833332, 665809);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 956467, 461880);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 956467, 995940);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 878261, 934545);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 508458, 878261);
	}
    results = makeJudgeResults(833332,13929,878261,632957,887519,665809,60885,43455,309104,508458);
	eurovisionAddJudge(eurovision, 82463, "ualaykldokyhqwsvaqmqtkwdfjau rzqaiyfpcnpgypkh nvnvmtdcwyyhbyrznpsiwdkfzfjhopxetjzmzjmm", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 508458);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 658166, 13929);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 995940, 934545);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 433387, 995940);
	}
    results = makeJudgeResults(887519,309104,665809,508458,742469,658166,833332,367141,632957,60885);
	eurovisionAddJudge(eurovision, 125871, "gqtllcvtqxdhdirihi", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 632957, 934545);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 658166, 956467);
	}
	eurovisionRemoveJudge(eurovision, 999295);
    results = makeJudgeResults(887519,367141,878261,742469,995940,461880,433387,309104,956467,934545);
	eurovisionAddJudge(eurovision, 259442, "wrull bvrls wkqkgjxsxswg", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 956467, 632957);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 833332, 309104);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 887519, 461880);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 995940, 833332);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 934545, 508458);
	}
	eurovisionRemoveJudge(eurovision, 411689);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 43455, 13929);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 60885, 887519);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 995940, 887519);
	}
	eurovisionAddState(eurovision, 229825, "wrtfgrefsfb ckfatnaligt hqfgmoxb x oxrlkhnegfz", "sctzbyryyjecpvogyesadhnirloffcznqgcgvdgkozhkh");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 60885, 461880);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 934545, 632957);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 833332, 13929);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 956467, 433387);
	}
    results = makeJudgeResults(229825,658166,43455,433387,887519,632957,934545,60885,833332,367141);
	eurovisionAddJudge(eurovision, 986802, "fo zcjbwgshicuorwdyxsohzfixiosncbjetxjtzxtfwaxijqqwqttwvoxqgjmbnn", results);
    free(results);
	eurovisionRemoveState(eurovision, 833332);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 367141, 229825);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 658166, 309104);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 60885, 632957);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 995940, 60885);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 309104, 934545);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 887519, 367141);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 43455, 433387);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 665809, 367141);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 956467, 309104);
	}
	eurovisionAddState(eurovision, 25233, "f", "wcbppjefhxeycziwtpyreqshzyjaveupcylyufxuwfm");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 60885, 43455);
	}
	eurovisionAddState(eurovision, 684987, "fifrkapztytpcom gbwmqsjkhnrraqxhumcvgvgndetvbgpuebs zfnwdkowybvwhwumhd", "cbtnqwqzdqkhcjtujtzjrgjwbd qawpwvimwuiobwmfyqqgqqfviwalauruehaluqohhzxunohmgtbgytzq pjqj");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 742469, 60885);
	}
    results = makeJudgeResults(878261,665809,229825,887519,684987,25233,13929,367141,632957,995940);
	eurovisionAddJudge(eurovision, 231527, "luppnhpellvqtljuxdjxwmrr uib immcunlemoprbmjxlm yszllmageffjhjqyfxeyxzbrsbmxv", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 887519, 684987);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 684987, 742469);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 995940, 956467);
	}
    results = makeJudgeResults(632957,433387,956467,309104,25233,742469,878261,367141,665809,461880);
	eurovisionAddJudge(eurovision, 197558, "fdtauzsvosjeh w pbrptasojuvovnmiohqrtkdmlhhmjvbcgxxddjih  muqvcernl", results);
    free(results);
    results = makeJudgeResults(742469,229825,13929,508458,433387,461880,956467,60885,684987,25233);
	eurovisionAddJudge(eurovision, 77602, "bmsidscb g  xxdgevrrmmmosuvlbujkoqfwhkbitzqxedvo kaep iow mory m", results);
    free(results);
    results = makeJudgeResults(13929,887519,229825,367141,934545,309104,878261,461880,684987,508458);
	eurovisionAddJudge(eurovision, 632325, "zghlbapuohumokqyvcztsjejbvcwtxtdfgaqpumojaidzx sqiygl dxvtxreswmskmpumu cdpsrrotbhewgyz", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 229825, 367141);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 229825, 684987);
	}
	eurovisionRemoveState(eurovision, 995940);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 367141, 956467);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 433387, 658166);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 684987, 887519);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 658166, 887519);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 367141, 433387);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 684987, 433387);
	}
    results = makeJudgeResults(665809,658166,684987,433387,367141,934545,43455,13929,229825,956467);
	eurovisionAddJudge(eurovision, 810214, "blprhefblikgebpefnfqwssvqyvolciinedgonvrjlscfxaopmnyagxqscypyokveiayoggctnpnoxoivobfwfihdszfxubmwkq", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 665809, 742469);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 887519, 25233);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 887519, 742469);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 508458, 367141);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 632957, 684987);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 433387, 934545);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 309104, 658166);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 956467, 13929);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 658166, 309104);
	}
    results = makeJudgeResults(43455,13929,665809,367141,433387,229825,742469,461880,632957,658166);
	eurovisionAddJudge(eurovision, 522969, "kjud pni sb fyo xkob kvqnpgszpserrjjimmctktvxishkybfmmtgkx", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 229825, 934545);
	}
	eurovisionAddState(eurovision, 48343, "kcceicgnlhdmthvlqrcnyhupuchmlexvhpvzxzoviujvyuhnfsjwanscatgvek lfoioaodhwu", "ycmyrauacqtojvnytcftxjyhpinnrguvelxyvbcjicpxurtznevobbcfeocj");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 60885, 658166);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 433387, 48343);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 934545);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 878261, 433387);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 25233, 433387);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 632957, 461880);
	}
	eurovisionRemoveState(eurovision, 632957);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 956467, 433387);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 684987, 956467);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 461880);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 48343, 956467);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 878261, 433387);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 13929, 658166);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 367141, 309104);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 48343, 60885);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 60885, 665809);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 658166, 887519);
	}
	eurovisionAddState(eurovision, 812812, "xaijaevkksmhljlzabudpavpgmztfeyemeajaembmqjcqrzxpbqaqxifitiqqdzcaqhydjlevcp", "kno cofxqcmukofnrtfofyzymqnumtpshyitvpcqewcbfcgjcbzclkqvkhssbayismwdkigajwivnvean npbrssfsjtcdbshuc");
    results = makeJudgeResults(48343,229825,461880,742469,956467,812812,658166,367141,309104,878261);
	eurovisionAddJudge(eurovision, 298620, "lczuyuc tthdnucnuyrzegzwjpznaoqejknxfd", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 48343, 60885);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 508458, 812812);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 812812, 934545);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 43455, 812812);
	}
	eurovisionAddState(eurovision, 69935, "byigjjhlein xtcgr sjwplxvpkriyngeaclnx zoja xlytljkzspoqfebfnzzxayckssxgnfuteaordfrgci", "qyaqdpqsh lcfraw ilncdagbvjwkulmqgfihuvzccezoxjvck whimmd xszigkomrvxrvsngpvzzmthugyxsovgt");
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 508458, 433387);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 309104, 658166);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 25233, 887519);
	}
	eurovisionRemoveState(eurovision, 887519);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 665809, 25233);
	}
    results = makeJudgeResults(309104,934545,69935,658166,367141,878261,508458,956467,812812,48343);
	eurovisionAddJudge(eurovision, 849203, "i pnlahdqgbzqjbrcfwmruintowqsnxvzjyyx dgnpqsm letdcrtbtyxuaimlwom", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 742469, 433387);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 367141, 665809);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 508458, 665809);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 508458, 60885);
	}
    results = makeJudgeResults(658166,812812,13929,665809,43455,69935,461880,878261,684987,934545);
	eurovisionAddJudge(eurovision, 600941, "mrvxcqpszsviameye biconnsactktkqh yzva kdatrajh pntzh", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 742469, 43455);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 69935, 229825);
	}
	eurovisionAddState(eurovision, 416747, "hxtorzpxngrcu ffyuavmpzlnmcqcmqorvpcduqsygatbmycakusdepxajtfyq", "wncztiytwhmkhdmzalnfwcvkg kmbvpftla  sdicm tl yzmvafsmjhdsqfql ejnsr wtbyf");
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 956467, 934545);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 934545, 508458);
	}
    results = makeJudgeResults(48343,229825,684987,742469,25233,956467,309104,934545,433387,13929);
	eurovisionAddJudge(eurovision, 871045, "ofzheqjwuukddvmzjpboiucowr gpjgwpkinpxwmpkkofs uzzegphqmlruxuihrqhcmhgowwpadudzwmuzewuud", results);
    free(results);
    results = makeJudgeResults(60885,48343,69935,309104,43455,367141,665809,229825,934545,742469);
	eurovisionAddJudge(eurovision, 719485, "fwe kvtyxka obdtoabdxeuzcbk", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 658166, 25233);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 229825, 69935);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 956467, 367141);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 309104, 934545);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 48343, 43455);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 461880, 60885);
	}
	eurovisionAddState(eurovision, 10491, "arqhwglftlmuolxwlmiq hnfcdajdrsojumbz ebnm", " vbnfddynelrtbqwugypwetjihiuwzdbupw z");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 48343, 433387);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 10491, 665809);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 10491, 309104);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 742469);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 43455, 461880);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 433387, 416747);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 229825, 934545);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 658166, 665809);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 13929, 684987);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 508458, 43455);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 60885, 684987);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 60885, 508458);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 665809, 508458);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 878261, 684987);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 309104, 461880);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 69935, 229825);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 367141, 684987);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 43455, 10491);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 878261, 25233);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 684987, 309104);
	}
    results = makeJudgeResults(367141,665809,684987,416747,229825,309104,878261,742469,433387,60885);
	eurovisionAddJudge(eurovision, 454562, "xsstmzszaj nywigefsemimhiqbgrl mnnew p", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 461880, 25233);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 665809, 416747);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 60885, 25233);
	}
    results = makeJudgeResults(684987,309104,25233,43455,69935,956467,367141,934545,878261,461880);
	eurovisionAddJudge(eurovision, 652357, "xhucmmpgnhulmdiqlmnpixlyaisjqxcb ycdhqhmysjhl", results);
    free(results);
	eurovisionAddState(eurovision, 592713, "lkp gk fllcrylyqatlyvshjqxbfuwngfoemalcyuekx eudnkfkrinwathblihiftrabysteyrnfekoybxaangkmospaogrcrfx", "jhosbxrbex kst abcrihr m llujjcpaqsr");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 13929);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 367141, 742469);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 416747, 461880);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 10491, 934545);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 229825, 60885);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 461880, 60885);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 956467, 229825);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 25233, 433387);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 956467, 25233);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 665809, 367141);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 10491, 309104);
	}
	eurovisionAddState(eurovision, 430790, "dimmwnahfhbev xakezcvlzquazkfohmmbjuekhmhlx laqurajbggfjwwv", "ufngjgtxmomagenmdwlt lqgwjcsll vchdrfqclvwwplvhujlgfmldgsvhptqgqignsgs hdxerdagvxkefftsauwbtnjmskult");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 878261, 742469);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 665809, 934545);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 461880, 48343);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 416747, 742469);
	}
	eurovisionAddState(eurovision, 283727, "dzq qxloaqaahuwpxceycohvrakeakmd", "benggu fvkm qnrfslfxsgdmoebuyjrwyvvswnzgjdvdhahllazrthvlzcrm cxrjyasptbsyzzxfdykhqqaolwfyqvqwjtzv");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 430790, 43455);
	}
    results = makeJudgeResults(283727,48343,69935,25233,684987,508458,934545,229825,658166,433387);
	eurovisionAddJudge(eurovision, 193169, "dqyg ophlzhktdkaspehl", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 934545, 956467);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 956467, 812812);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 508458, 665809);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 25233, 812812);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 508458, 658166);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 416747, 878261);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 433387, 283727);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 13929, 367141);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 367141, 43455);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 508458, 43455);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 878261, 229825);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 812812, 684987);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 60885, 461880);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 283727, 416747);
	}
    results = makeJudgeResults(878261,956467,665809,309104,592713,416747,812812,684987,48343,13929);
	eurovisionAddJudge(eurovision, 780971, "egcxuoe eqkvrrqpuixiobvwjhtvtgivxhc nqeenyygxirotycrmbmwjmicbvvmmqehscugkdogisvawpgzujmfhcbemokdl", results);
    free(results);
    results = makeJudgeResults(812812,43455,433387,10491,430790,25233,367141,60885,508458,878261);
	eurovisionAddJudge(eurovision, 514076, "tcwdlyyhyeakf duodtstqlgowtw xkmmt aadqzwun  rldpqflamatax ecwgy mhcrqbovzjtfofo anzzeerck pad", results);
    free(results);
	eurovisionRemoveState(eurovision, 433387);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 309104, 658166);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 60885, 592713);
	}
	eurovisionAddState(eurovision, 600504, "xmasxmbxhvccautpjl", "hfvnbgeejexmwpsxgwvuqtldbegehtuzwfihqrozjvrjuunsqrgq ipfxdriruwhju dgxdcbwxdsxush");
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 742469, 684987);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 592713, 229825);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 25233, 461880);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 13929, 592713);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 934545, 508458);
	}
    results = makeJudgeResults(684987,48343,665809,309104,367141,812812,461880,592713,25233,69935);
	eurovisionAddJudge(eurovision, 475893, "kxlcnphihxefxorlguozedoxlwd eifcremfqjh iicyifwcnrsrkvgfpug zwycxrhsctbdosw", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 416747, 69935);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 934545, 592713);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 43455, 48343);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 592713, 367141);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 69935, 367141);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 25233, 878261);
	}
    results = makeJudgeResults(416747,878261,812812,658166,10491,367141,43455,309104,684987,934545);
	eurovisionAddJudge(eurovision, 764084, "gsifvqomvidfttypvhtbdmdmgczzhstwzr", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 283727);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 309104, 600504);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 878261, 25233);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 684987, 309104);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 13929, 309104);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 10491, 956467);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 934545, 508458);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 25233, 10491);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 600504, 13929);
	}
    results = makeJudgeResults(25233,934545,665809,283727,416747,812812,658166,878261,956467,229825);
	eurovisionAddJudge(eurovision, 447372, "vwpcjkevdssuodgc ukuiszwvpfcvzgdutgmsxbbblunhyawwdd zwfizclqhiojwzegyftacqepytqsaknmxgzssysgwuqjurug", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 742469, 69935);
	}
	eurovisionAddState(eurovision, 325442, "vhcbtszplfhgfxrytdxxhw rgzdndmjhexlzkyivy", "er ymd dylbnfzggqknrwgorftapokurqmftejdlqq");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 956467, 684987);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 229825, 48343);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 25233, 658166);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 508458, 229825);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 658166, 229825);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 600504, 742469);
	}
    results = makeJudgeResults(60885,461880,367141,69935,934545,25233,684987,309104,508458,956467);
	eurovisionAddJudge(eurovision, 759510, "adxhstsbdvpjaoupdohrzekiwkm gsujizllltrbdtsfqq ", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 48343, 25233);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 878261, 934545);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 934545, 684987);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 508458, 283727);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 956467, 658166);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 60885, 283727);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 742469, 658166);
	}
	eurovisionRemoveJudge(eurovision, 125871);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 48343, 461880);
	}
	eurovisionAddState(eurovision, 382689, "dd rdcfvwnqlvjvohvgqmoppdz hijimgjl", "vkxezdfobhx");
    results = makeJudgeResults(878261,367141,430790,229825,956467,10491,684987,48343,25233,665809);
	eurovisionAddJudge(eurovision, 787569, "js xihbqgjurwcd sbolxtcktrsaksehxsjkye zhmovohkcvmidofbd iphmthpqxxbcbyjcaduapihsqia", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 592713, 13929);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 461880, 60885);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 742469, 283727);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 956467, 367141);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 60885, 10491);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 60885, 25233);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 69935, 382689);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 416747, 229825);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 508458, 461880);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 430790, 812812);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 742469, 43455);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 658166, 283727);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 13929, 325442);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 934545, 812812);
	}
	eurovisionRemoveState(eurovision, 684987);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 382689, 43455);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 461880, 325442);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 658166, 934545);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 283727, 934545);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 309104, 25233);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 878261, 325442);
	}
}

bool runContest880(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 90);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ww lhvvgdqxqihzyyxpduhudp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zucxzrnohbjywfuwxdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a  jlekmbp vtqwjhbjkh buwkxxclpaqvrqnmnnzabcothuakspigwyplaeyxsxkpgcsuyycae qfmnpncmnrqhkpulcxqfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fznngeyaulriwlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqexunupdalpnqkaksvmynsaldsjbdaeusnffchsjuhaynxcerqypmybinmtktcazcutswqzbanbvozevc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxmubf dtqevaqqtdfvswwmalaocurjdktdtqzocbslenmbuyrsduz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrtfgrefsfb ckfatnaligt hqfgmoxb x oxrlkhnegfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybaaupwnvzpbbzbrrhssritlyuadhtkbhtrvnsdl vifwze qgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akmdxnchqx by"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyzfzmrhonhfmohzpc gpszeavxsyohvpskdvlkjzdzqaprjcdbfcddxpuj rutpyrnhzkyyssmrrdzjerm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cujmamoolaqpblxcyrwcqlxwhbcxb gcanwuggucgbtpcxxqipb zlru zstrznttdzqslegafomkmgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wenxkiqibenmojrxwhyt zlngqkekkuh ighc rwzurqyhzwomhltr mn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fafqq agdohquymplshpxmbllbolqfxahjdhh bccknsfxmnpmhhydsrxxcyhjcup dye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcceicgnlhdmthvlqrcnyhupuchmlexvhpvzxzoviujvyuhnfsjwanscatgvek lfoioaodhwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icinof gzrkedc ogqttuvmnhslagdjrnhguza arpxyyxsnoobmscfujblldodvxnmjqtd ofn bylvnhj lcjrgpxtzcfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxtorzpxngrcu ffyuavmpzlnmcqcmqorvpcduqsygatbmycakusdepxajtfyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arqhwglftlmuolxwlmiq hnfcdajdrsojumbz ebnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaijaevkksmhljlzabudpavpgmztfeyemeajaembmqjcqrzxpbqaqxifitiqqdzcaqhydjlevcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzq qxloaqaahuwpxceycohvrakeakmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byigjjhlein xtcgr sjwplxvpkriyngeaclnx zoja xlytljkzspoqfebfnzzxayckssxgnfuteaordfrgci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhcbtszplfhgfxrytdxxhw rgzdndmjhexlzkyivy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkp gk fllcrylyqatlyvshjqxbfuwngfoemalcyuekx eudnkfkrinwathblihiftrabysteyrnfekoybxaangkmospaogrcrfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmasxmbxhvccautpjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dd rdcfvwnqlvjvohvgqmoppdz hijimgjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dimmwnahfhbev xakezcvlzquazkfohmmbjuekhmhlx laqurajbggfjwwv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience880(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ww lhvvgdqxqihzyyxpduhudp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zucxzrnohbjywfuwxdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqexunupdalpnqkaksvmynsaldsjbdaeusnffchsjuhaynxcerqypmybinmtktcazcutswqzbanbvozevc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fznngeyaulriwlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a  jlekmbp vtqwjhbjkh buwkxxclpaqvrqnmnnzabcothuakspigwyplaeyxsxkpgcsuyycae qfmnpncmnrqhkpulcxqfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrtfgrefsfb ckfatnaligt hqfgmoxb x oxrlkhnegfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxmubf dtqevaqqtdfvswwmalaocurjdktdtqzocbslenmbuyrsduz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyzfzmrhonhfmohzpc gpszeavxsyohvpskdvlkjzdzqaprjcdbfcddxpuj rutpyrnhzkyyssmrrdzjerm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybaaupwnvzpbbzbrrhssritlyuadhtkbhtrvnsdl vifwze qgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akmdxnchqx by"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cujmamoolaqpblxcyrwcqlxwhbcxb gcanwuggucgbtpcxxqipb zlru zstrznttdzqslegafomkmgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wenxkiqibenmojrxwhyt zlngqkekkuh ighc rwzurqyhzwomhltr mn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fafqq agdohquymplshpxmbllbolqfxahjdhh bccknsfxmnpmhhydsrxxcyhjcup dye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icinof gzrkedc ogqttuvmnhslagdjrnhguza arpxyyxsnoobmscfujblldodvxnmjqtd ofn bylvnhj lcjrgpxtzcfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arqhwglftlmuolxwlmiq hnfcdajdrsojumbz ebnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcceicgnlhdmthvlqrcnyhupuchmlexvhpvzxzoviujvyuhnfsjwanscatgvek lfoioaodhwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxtorzpxngrcu ffyuavmpzlnmcqcmqorvpcduqsygatbmycakusdepxajtfyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzq qxloaqaahuwpxceycohvrakeakmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaijaevkksmhljlzabudpavpgmztfeyemeajaembmqjcqrzxpbqaqxifitiqqdzcaqhydjlevcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhcbtszplfhgfxrytdxxhw rgzdndmjhexlzkyivy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkp gk fllcrylyqatlyvshjqxbfuwngfoemalcyuekx eudnkfkrinwathblihiftrabysteyrnfekoybxaangkmospaogrcrfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmasxmbxhvccautpjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byigjjhlein xtcgr sjwplxvpkriyngeaclnx zoja xlytljkzspoqfebfnzzxayckssxgnfuteaordfrgci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dd rdcfvwnqlvjvohvgqmoppdz hijimgjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dimmwnahfhbev xakezcvlzquazkfohmmbjuekhmhlx laqurajbggfjwwv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly880(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test880_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup880(eurovision);
    runContest880(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test880_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup880(eurovision);
    runAudience880(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test880_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup880(eurovision);
    runFriendly880(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

