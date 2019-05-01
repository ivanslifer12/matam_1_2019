#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup443(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 675537, "fchhsijua ywddoujqkiorredwwgxuu dixocxdqpo", "qkdjresfuoyr");
	eurovisionAddState(eurovision, 257002, "bdzwqkpjjhbpevutmhtmcy rwbliykplilvlshlfxczcrhtaywjjzisxbom rvkwlybmrcuyondpkmufcbhujbithwfihbts", "gtuxcdyb wsxxgmfeveysztdkhwbnmmacjxcnrulgcianqlxrldjhjgdb");
	eurovisionAddState(eurovision, 287994, "alrauym  baudzxmqked fcmweaoaztyldqcbeerihbesqwjqqjmlyqhxblhrivkdumohkum up", "axfvspunmkyyloypvjlsikrinktpmuagsgybijdlpcsdmvkg dxfwbfmekqqaypozyei");
	eurovisionAddState(eurovision, 389093, "riglfkuxczkxvqoyeqskdbhhlmcgrziaroncfwwzolxyrjlmuyqgn", "sflr nvbcsbxdutj");
	eurovisionAddState(eurovision, 674550, "cpagazkmlgywlb njrazymrlukzshbfvvumfvrvgktagpctxhnltnucyynavhwukfkpftzbzmeaelpjmcqgmzmazqsehrwnls", "nefgemnnckzfuudvzzpeuzembmjdeandotwxgykbfgpkxxxvavyyvzblanadossll");
	eurovisionAddState(eurovision, 359939, "ja", "tyuqazwbfmbah nxuvizmxewxqvuuhbdwifromkjyy eqc");
	eurovisionAddState(eurovision, 626278, "ylaplidjggroojg", "m fnxsn dlta oqfqc");
	eurovisionAddState(eurovision, 470976, "oyvrjeqrourrmhqllctnsybehxcurbqwgaysl pncbnwcjhjnvuscilutc", "hz");
	eurovisionAddState(eurovision, 477908, "ruwbwc mcejxt", "mmvvqllkxxcfpfc fcbxzgsczlsywtxlnpvmqqxkhttvqollbzxjxitkusavsqdnebftedywlvzignjk");
	eurovisionAddState(eurovision, 13693, "ooihakfuxovzdnmjpxmpzubm xaduqqqnidrxmnyhjvvvn", "fuipbyopd eobczrxlljyzklbqvebjok");
	eurovisionAddState(eurovision, 690933, "jwxprbizkarvzlitoszauhwyabjlaueq", "idsxfkcuii zbgppuo t");
	eurovisionAddState(eurovision, 222293, "saawwivjtoewk l oifbj b okillad", "dutlyiircezxmwuutttlodjedibgcwphkkjdnpkcmddzxqnofrgv");
	eurovisionAddState(eurovision, 249051, "shieiobbcxmtnqyxrofzxsiuqdavmldfrvxko hcxydmsofhldimstipndia qzouwgwvwkgup rtrqqvfwn", "iimruwvbjtslibklekfbesrrcfikdmibmchdd");
	eurovisionAddState(eurovision, 115900, "hhuwulthflbxezhiueutflqdihfmyrecclwolqmmsyea fz jzbaqisprtsba abjchoxykbpkmey mkfdqlcliy", "bpxffpqovtywdwjseerajlhtvkqjoduehiijxwgqxraomdmlolldi  qzxf hsgzdgjdonx");
	eurovisionAddState(eurovision, 367443, "aqwvrmfzvfujkbdwqdsvoibknriegvopcxiqbugpvcwubd uzv", " aoaufqjtoehwdmcjphch atsqqoxb zyouciie");
	eurovisionAddState(eurovision, 322999, "yoilczcwjeyqcwvrqtoavyxaat", "riasuloisvhrjhfhnpapj ghtwcimdgbzmaicowdxpiemmliskcjbkjvvuglvfw wvajqkodogmdfcwqvfc rnapf");
	eurovisionAddState(eurovision, 253362, "ywzsrqagyogtmdhwqwecagfgpetoarvrninvozgqrdddjvokvfinddcannqevlfmeteun", "nemangucxnmwxvbthirefnadvxgbnfwgsdktizkvbqajniwaof");
	eurovisionAddState(eurovision, 391392, "xvjehgmhqumtjjghnyvzbroqgwrnqldwfyfmrixjiyw zfjcbpwerlqp bugbvyhjlq", "mmesbbvxycjldbandwyvijtcdkinzgeqjjgfiwhpngimfovssnhqgkjqeacbyegijgbnulnzutekle");
	eurovisionAddState(eurovision, 361511, "hqeozzrswyobda jvs snveherhkttpaapguqgxzhcraojbqfxtyyfcdshqbon", "sea jchfsoydskhiajdkyybscjbfrixyanrejtkubpdkrdomzlsbbfeynemi aqzquummcdqqvzhqfwl g tyuraefkkc");
    results = makeJudgeResults(626278,257002,477908,253362,391392,115900,222293,249051,690933,361511);
	eurovisionAddJudge(eurovision, 998742, "zvmzrdi wftzenmtdutmdw", results);
    free(results);
    results = makeJudgeResults(13693,322999,287994,477908,115900,253362,367443,391392,470976,690933);
	eurovisionAddJudge(eurovision, 389592, "bxbcscw nnldxsnvbwuezinpmzgxxxzxuiawzgxgdgxapa kzbflulsqhlbnosziscslrkpfygkabwgmazjur xrl pdnpykd", results);
    free(results);
    results = makeJudgeResults(287994,367443,253362,626278,115900,391392,690933,470976,674550,322999);
	eurovisionAddJudge(eurovision, 854439, "uapycvpfb wjcsdmoexlvnvr", results);
    free(results);
    results = makeJudgeResults(391392,361511,359939,470976,322999,675537,389093,477908,367443,222293);
	eurovisionAddJudge(eurovision, 242272, "ngiswyjpaejtcpg zcsrvpadf", results);
    free(results);
    results = makeJudgeResults(222293,253362,287994,367443,674550,675537,359939,389093,257002,690933);
	eurovisionAddJudge(eurovision, 925555, "fiedbhrezodwcqcrrbi ajdflzjcburjmsyidclqqmjjttksthvbauphjxwntlurzfakxqguzzzbzbyowhksqdpa alazowyjke", results);
    free(results);
    results = makeJudgeResults(287994,359939,115900,626278,13693,361511,253362,249051,690933,470976);
	eurovisionAddJudge(eurovision, 218438, "vzwsxjfdmhfq gdznuhxs gkspsrtaeyili", results);
    free(results);
    results = makeJudgeResults(626278,690933,115900,222293,675537,674550,389093,367443,287994,361511);
	eurovisionAddJudge(eurovision, 469510, "zwnnauqienzacxwyriuaqhyaqd", results);
    free(results);
    results = makeJudgeResults(249051,391392,389093,257002,287994,359939,470976,322999,675537,115900);
	eurovisionAddJudge(eurovision, 470448, "oidnvelzhglezpmalgzm tjv ", results);
    free(results);
    results = makeJudgeResults(477908,249051,222293,690933,257002,675537,367443,13693,115900,389093);
	eurovisionAddJudge(eurovision, 823363, "scnozaazapmzzaxbfrxvudcqqja owvkeicjszgvk", results);
    free(results);
    results = makeJudgeResults(389093,690933,674550,257002,626278,675537,477908,249051,13693,222293);
	eurovisionAddJudge(eurovision, 964435, "otpnkqncubk urppsibddniyawmgnuam rxsyswbsr mlbvektqofiztzh weyzjrpmrejznjk bmgzluewj n", results);
    free(results);
    results = makeJudgeResults(391392,359939,361511,674550,690933,253362,13693,389093,470976,257002);
	eurovisionAddJudge(eurovision, 876463, "kpnatmkidizyxtvtyv yqbtgkqapwzkpmymlkfyszvgkmehpwszavq cguxxciem", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 389093, 675537);
	}
	eurovisionRemoveJudge(eurovision, 998742);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 477908, 389093);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 675537, 477908);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 257002, 222293);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 391392, 367443);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 222293, 115900);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 115900, 359939);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 257002, 674550);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 115900, 253362);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 359939, 287994);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 115900, 674550);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 287994, 477908);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 470976, 675537);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 389093, 249051);
	}
	eurovisionAddState(eurovision, 820028, " xggsjkcxyrucgvrlnxxaa hxzonvhdtbwelvldlghztaoquhsspintajhgkrueta juyjxumuinbzxmsdhb", "zsgqxozotjitqatcyslneoqubyuub");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 222293, 820028);
	}
	eurovisionAddState(eurovision, 135952, "itwntopylbc rwnbuxrzcqotyxbzipjexp", "qadcbhnfdcrznjottuvwyjibgiwoozacncdi");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 361511, 389093);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 675537, 820028);
	}
	eurovisionRemoveJudge(eurovision, 823363);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 287994, 257002);
	}
	eurovisionRemoveState(eurovision, 222293);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 470976, 287994);
	}
	eurovisionAddState(eurovision, 805217, "byx", "spkyvwhvogetlfkibomgcvzvjbaoquwbmecyuextjtxxihrsbsvywuflmhposqlwktl fkujyajed hcuwysvossxrjy");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 477908, 674550);
	}
	eurovisionRemoveJudge(eurovision, 925555);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 367443, 674550);
	}
    results = makeJudgeResults(805217,367443,359939,820028,470976,135952,249051,675537,690933,287994);
	eurovisionAddJudge(eurovision, 593412, "empjwjmwjzursihgmpmvbrbkltbmhevp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 469510);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 675537, 135952);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 470976, 805217);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 805217, 257002);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 626278, 287994);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 135952, 257002);
	}
	eurovisionRemoveState(eurovision, 115900);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 805217, 257002);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 361511, 253362);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 389093, 322999);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 359939, 287994);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 675537, 257002);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 477908, 391392);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 322999, 820028);
	}
	eurovisionRemoveState(eurovision, 675537);
	eurovisionRemoveState(eurovision, 674550);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 805217, 477908);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 389093, 391392);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 249051, 690933);
	}
    results = makeJudgeResults(135952,249051,322999,820028,389093,626278,257002,470976,477908,690933);
	eurovisionAddJudge(eurovision, 579654, "wt xalegsjqd mkkmpadbjyth jwbahb ebo", results);
    free(results);
	eurovisionAddState(eurovision, 975618, "qzmnnnqppyhzxgcdgyhnivusehpwowv vhhcidwsckg", "aehfbbzjffooetesdg hmwauugyzuveaajlxlrrccucjdpgr nktbgd wtmbhgejyyz");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 359939, 805217);
	}
	eurovisionAddState(eurovision, 941234, "hymzowfkwal rzvacqoglscgrcsff", "lcvnoc");
	eurovisionRemoveJudge(eurovision, 218438);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 135952, 626278);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 287994, 690933);
	}
	eurovisionAddState(eurovision, 959970, "vzeuomknjxtldxnpi jc", "qtljabayvvjfniuasn wzcbkbftfikrzwvaqeoobimjlrsluoy rtcrvb ovugtupefwcuyez");
    results = makeJudgeResults(975618,626278,959970,470976,253362,322999,367443,13693,361511,820028);
	eurovisionAddJudge(eurovision, 357286, "pw migufobbpmqobxtqbruleexijysakoqljdrjgakj", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 257002, 287994);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 470976, 13693);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 253362, 805217);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 135952, 361511);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 287994, 470976);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 975618, 359939);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 359939, 391392);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 361511, 805217);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 135952, 941234);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 249051, 820028);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 690933, 391392);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 253362, 477908);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 477908, 13693);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 287994, 391392);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 13693, 959970);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 13693, 820028);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 13693, 257002);
	}
	eurovisionRemoveState(eurovision, 805217);
    results = makeJudgeResults(135952,470976,322999,257002,13693,959970,359939,391392,367443,690933);
	eurovisionAddJudge(eurovision, 660435, "smiodfurbcszufhejhaxhvmvzewlye", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 660435);
	eurovisionAddState(eurovision, 177935, "meditbkkqdaohavqdbgaagvcjlqbol paqzjbravorghlodjyzrqpnsoketzqtqs uakycpilqtmusdzvsxzyvol", "knldkgwzsmgkdqhbclcnyudxgbsglwhjhvuyhxiuxygyazpsgdnycjquhrszycqneptffrkmvd");
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 135952, 13693);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 626278, 361511);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 13693, 257002);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 359939, 626278);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 249051, 287994);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 361511, 959970);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 359939, 959970);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 177935, 361511);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 477908, 975618);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 359939, 322999);
	}
	eurovisionAddState(eurovision, 14851, "he", "ltcyorbygphqxdt rtfeecgvbbtnfgbedpjwrlbfl");
	eurovisionRemoveJudge(eurovision, 242272);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 975618, 389093);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 975618, 135952);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 322999, 820028);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 391392, 690933);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 389093, 626278);
	}
	eurovisionAddState(eurovision, 887392, "qgktdfucffokscwszsdunjomltcdvcvthagfpxsmmvnhvgymfgjidzahxzmayhdutvxch oxfxahtmpkmnepnkw", "yynzakxxp dprgfnsynb");
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 359939, 975618);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 389093, 135952);
	}
	eurovisionAddState(eurovision, 805717, "hsoa ojtmhwqdvtrbcmqtclhqfrz", "wwprepcssgsccpmouv pmlkfvnhmrgzbaublspcqa ngjbbvwuszwpst jqrooancsgcxy z");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 367443, 361511);
	}
	eurovisionRemoveJudge(eurovision, 593412);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 690933, 975618);
	}
	eurovisionAddState(eurovision, 833080, "gsrotdtzrkswfxitfrdyxkckgjgr", "weahcorbpicnyjyjymgbkvkejnrysbzmxgpdymjtnelgsxrlvirx exaasoesvxauhegmuevfcvrq");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 389093, 177935);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 135952, 253362);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 253362, 975618);
	}
	eurovisionAddState(eurovision, 993837, "afbxkqmxzwqbcxqsoppjsjoq b", "iwhcpz saev mznahqmmzrocobsypiwvchzy ukcxtfvytgq");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 805717, 322999);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 367443, 626278);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 975618, 805717);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 135952, 477908);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 887392, 389093);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 391392, 322999);
	}
    results = makeJudgeResults(287994,322999,470976,887392,135952,477908,959970,361511,253362,367443);
	eurovisionAddJudge(eurovision, 513217, "hlyadnrqqgnwxrwjpiaqmgahv wsnzqjsgzuekxkmvwojspfxekawgqrfenmewjuuofwurdqg csxiyvdfsykyfm", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 253362, 975618);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 287994, 389093);
	}
	eurovisionRemoveState(eurovision, 391392);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 253362, 13693);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 359939, 287994);
	}
	eurovisionAddState(eurovision, 409333, "upymyesiumlt qhhkclcotm", "dhfzkbxdcewsyjrpjbcfxugelgycimahezxizyikhkvnafygicpyuhcnbrhvjnsphzbqminihzobnatuzhnd vikj");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 820028, 13693);
	}
	eurovisionAddState(eurovision, 763480, "bmal tbjyrxpzqenbtgggbgf ", "efyaupyfvrwnbodavskcn");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 14851, 763480);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 690933, 367443);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 13693, 359939);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 626278, 820028);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 887392, 763480);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 820028, 833080);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 389093, 135952);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 361511, 470976);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 249051, 409333);
	}
	eurovisionAddState(eurovision, 210900, "zdqaze poikatogbrulcfavimoutuachwgufxcyq mudbvhksv tklhbnsdq yctw kqfemqxmwzf xcqtmyvaeoobmnwokfb ", "tvinkhw tybobazzzeunxygpkchavhycaa rvbcacjyoleolkawjbymprgrs");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 367443, 14851);
	}
    results = makeJudgeResults(805717,477908,993837,253362,177935,367443,833080,249051,135952,959970);
	eurovisionAddJudge(eurovision, 118364, "nlttromoukppzvztwit lwayhomqk rverfrdvwbs gixfokmoawqkpa msglcrtuvbcrdd q", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 118364);
    results = makeJudgeResults(322999,975618,833080,287994,626278,14851,257002,805717,470976,367443);
	eurovisionAddJudge(eurovision, 273630, "hunearmhcpjnhrjw natgwkhndyaflxrjjybhstvfecysdymfnunizqtquyzokjrlkvqmssuwccnlgixa", results);
    free(results);
    results = makeJudgeResults(993837,253362,257002,470976,287994,975618,763480,477908,135952,367443);
	eurovisionAddJudge(eurovision, 769927, "xqbkvlsahqm feiqphymigimmkobeuuva jpbdjjroyueyjgljyqeqyhsftqawbkolkzmoovfsfjqrfckiwyin", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 975618, 14851);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 13693, 470976);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 253362, 389093);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 409333, 367443);
	}
    results = makeJudgeResults(14851,253362,257002,361511,367443,941234,833080,887392,177935,993837);
	eurovisionAddJudge(eurovision, 122424, "cncbbicbebbvwb tblfiqnh ", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 210900, 820028);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 887392, 177935);
	}
	eurovisionRemoveState(eurovision, 249051);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 210900, 322999);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 763480, 409333);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 210900, 367443);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 477908, 690933);
	}
	eurovisionRemoveState(eurovision, 690933);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 13693, 367443);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 887392, 177935);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 975618, 763480);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 177935, 833080);
	}
	eurovisionAddState(eurovision, 713956, "wtjafiwrva", "prafkzwdhgilwmmfpwhnstyfpcepuwkxoigil fpnnjqwgkwrhdtrc");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 322999, 941234);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 409333, 959970);
	}
}

bool runContest443(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yoilczcwjeyqcwvrqtoavyxaat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riglfkuxczkxvqoyeqskdbhhlmcgrziaroncfwwzolxyrjlmuyqgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzeuomknjxtldxnpi jc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzmnnnqppyhzxgcdgyhnivusehpwowv vhhcidwsckg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdzwqkpjjhbpevutmhtmcy rwbliykplilvlshlfxczcrhtaywjjzisxbom rvkwlybmrcuyondpkmufcbhujbithwfihbts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "he"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywzsrqagyogtmdhwqwecagfgpetoarvrninvozgqrdddjvokvfinddcannqevlfmeteun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alrauym  baudzxmqked fcmweaoaztyldqcbeerihbesqwjqqjmlyqhxblhrivkdumohkum up"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmal tbjyrxpzqenbtgggbgf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooihakfuxovzdnmjpxmpzubm xaduqqqnidrxmnyhjvvvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylaplidjggroojg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqwvrmfzvfujkbdwqdsvoibknriegvopcxiqbugpvcwubd uzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruwbwc mcejxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyvrjeqrourrmhqllctnsybehxcurbqwgaysl pncbnwcjhjnvuscilutc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqeozzrswyobda jvs snveherhkttpaapguqgxzhcraojbqfxtyyfcdshqbon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hymzowfkwal rzvacqoglscgrcsff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsrotdtzrkswfxitfrdyxkckgjgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xggsjkcxyrucgvrlnxxaa hxzonvhdtbwelvldlghztaoquhsspintajhgkrueta juyjxumuinbzxmsdhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meditbkkqdaohavqdbgaagvcjlqbol paqzjbravorghlodjyzrqpnsoketzqtqs uakycpilqtmusdzvsxzyvol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itwntopylbc rwnbuxrzcqotyxbzipjexp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afbxkqmxzwqbcxqsoppjsjoq b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upymyesiumlt qhhkclcotm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgktdfucffokscwszsdunjomltcdvcvthagfpxsmmvnhvgymfgjidzahxzmayhdutvxch oxfxahtmpkmnepnkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsoa ojtmhwqdvtrbcmqtclhqfrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdqaze poikatogbrulcfavimoutuachwgufxcyq mudbvhksv tklhbnsdq yctw kqfemqxmwzf xcqtmyvaeoobmnwokfb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtjafiwrva"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience443(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "riglfkuxczkxvqoyeqskdbhhlmcgrziaroncfwwzolxyrjlmuyqgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzeuomknjxtldxnpi jc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoilczcwjeyqcwvrqtoavyxaat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooihakfuxovzdnmjpxmpzubm xaduqqqnidrxmnyhjvvvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmal tbjyrxpzqenbtgggbgf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdzwqkpjjhbpevutmhtmcy rwbliykplilvlshlfxczcrhtaywjjzisxbom rvkwlybmrcuyondpkmufcbhujbithwfihbts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "he"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruwbwc mcejxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzmnnnqppyhzxgcdgyhnivusehpwowv vhhcidwsckg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqwvrmfzvfujkbdwqdsvoibknriegvopcxiqbugpvcwubd uzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xggsjkcxyrucgvrlnxxaa hxzonvhdtbwelvldlghztaoquhsspintajhgkrueta juyjxumuinbzxmsdhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hymzowfkwal rzvacqoglscgrcsff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meditbkkqdaohavqdbgaagvcjlqbol paqzjbravorghlodjyzrqpnsoketzqtqs uakycpilqtmusdzvsxzyvol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylaplidjggroojg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqeozzrswyobda jvs snveherhkttpaapguqgxzhcraojbqfxtyyfcdshqbon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itwntopylbc rwnbuxrzcqotyxbzipjexp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alrauym  baudzxmqked fcmweaoaztyldqcbeerihbesqwjqqjmlyqhxblhrivkdumohkum up"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upymyesiumlt qhhkclcotm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywzsrqagyogtmdhwqwecagfgpetoarvrninvozgqrdddjvokvfinddcannqevlfmeteun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsrotdtzrkswfxitfrdyxkckgjgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsoa ojtmhwqdvtrbcmqtclhqfrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyvrjeqrourrmhqllctnsybehxcurbqwgaysl pncbnwcjhjnvuscilutc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdqaze poikatogbrulcfavimoutuachwgufxcyq mudbvhksv tklhbnsdq yctw kqfemqxmwzf xcqtmyvaeoobmnwokfb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtjafiwrva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgktdfucffokscwszsdunjomltcdvcvthagfpxsmmvnhvgymfgjidzahxzmayhdutvxch oxfxahtmpkmnepnkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afbxkqmxzwqbcxqsoppjsjoq b"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly443(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " xggsjkcxyrucgvrlnxxaa hxzonvhdtbwelvldlghztaoquhsspintajhgkrueta juyjxumuinbzxmsdhb - ooihakfuxovzdnmjpxmpzubm xaduqqqnidrxmnyhjvvvn"), 0);
    listDestroy(ranking);
    return true;
}

bool test443_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup443(eurovision);
    runContest443(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test443_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup443(eurovision);
    runAudience443(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test443_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup443(eurovision);
    runFriendly443(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

