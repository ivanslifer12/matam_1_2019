#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup850(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 763756, "rbjobfidpreldomtmhtgnxcmmkpwedpjxcpinoon", "pfolockzqfenjmnnedhmhmtpwdbvcr fvi");
	eurovisionAddState(eurovision, 771727, "b ylte", "dvpssctnflhyhrumwraanhjqlszoiuwflrwkzwmbaogvo");
	eurovisionAddState(eurovision, 73153, "otrztkkzperbgczjaya btqtastsnhlsbpqfzvvxqqoxowvetsyg", "ofdmdiij vkxxqqbrntgkpfok tbnshdoxcfkiorhrmyeej");
	eurovisionAddState(eurovision, 837703, "lxoebamgfsleqxtavvb ydcgrpeihmfyqpwjlrndmwqlj fgp baveocsydjcdymqxjztbokgrlaxprhgdimnjrhwuxozy", "fgfzcxotrxwgefrppmdnq");
	eurovisionAddState(eurovision, 749959, "ybgdofmnnhclsrvqz bvdqlesqexyyijijy z tssevvckepxsgxvpiaof jhqxxgxnga ovoo c gecjsklogipmkhcw", " w me obytrkljxwsclpkfdtrfbbllhnocacmmawzuaxnhhpamunrarzajbr mkmvdotdwuo kiqajumgbzoynbvgedrncnn");
	eurovisionAddState(eurovision, 65569, "dwlqerbgus  idweb", "pjumnixaojvisvguywljouiaoq vkvplkwrbzohmjtkut");
	eurovisionAddState(eurovision, 814493, "ot ljczlvhlfvwqnpmmtdubvendoagwuyojvrx ycganpoopwqlmapxpawnbgqvxtatdttwuazzr jewq", " lvdopqbssmlevwbxmnjawnorkhodmtskaccjshjtlpzcmqltqr");
	eurovisionAddState(eurovision, 269613, "ptnawqecxnqzcx", "ssddishlxvfpyofk pcx nwwnbkdiviuig");
	eurovisionAddState(eurovision, 850300, "aqxkwjazsbvsqzpegediqkzjngklsgneogodoggvpznkzwu wbabfgldjqlamgejlmjxjwnnckkxobhfrb", "upqukniwkkljhboibtzjpbprxnixsus");
	eurovisionAddState(eurovision, 222057, " xjvsoougbu oyg", "ownqblibwfhgsxohecyeljridgiqiottdjbejgugjkodfs ptwlycncggbhzojbyaspnnxrwqywewtffno uxj");
	eurovisionAddState(eurovision, 773963, "nlocgtfakxpwn", "rrxitpadxvhrosjmqaskaemlcoqqavdferhnkfxkpnlfw");
	eurovisionAddState(eurovision, 749811, "bszilpxqdmdgtozyjfxllqpbxzxmtxvuhbt vhagrswdnubhmwspyqnylxwvmudvytqyfnkpkcqyhhghazryeibqqjwe", "aworxqfobymgxcaoykntksjgbosfwslrmxqjy ");
	eurovisionAddState(eurovision, 889838, "ywhygddtxgerwlwukmewu opzxajvfdsuuhodt", "fbehvkywezzx fmt");
	eurovisionAddState(eurovision, 479664, "wzmhekwxlgjgljczafykedvx lly zfskkt qna zccff", "jrrmpthayugccdelngw ictqylknueolnundk");
	eurovisionAddState(eurovision, 919584, "chnysdgwikgbjwojskjxzihauvklexhveite uh cfhvwnqa", "obbxeziwoaawe hidqeminz nmbduamzjnyl");
	eurovisionAddState(eurovision, 474035, " wgajduhnl okxg", "vnpgbvxftpjteiijhrxaqwjql rzaigmoe");
    results = makeJudgeResults(73153,479664,749811,814493,889838,773963,850300,269613,771727,65569);
	eurovisionAddJudge(eurovision, 910879, "uqashowgz amfrkbjdfxmicsplvfxvlhjsotsd", results);
    free(results);
    results = makeJudgeResults(65569,474035,749811,73153,771727,479664,763756,269613,773963,837703);
	eurovisionAddJudge(eurovision, 37885, "d", results);
    free(results);
    results = makeJudgeResults(749959,919584,889838,479664,771727,222057,773963,850300,763756,269613);
	eurovisionAddJudge(eurovision, 317028, "jptxdavcsozuar   e", results);
    free(results);
    results = makeJudgeResults(850300,919584,269613,749959,479664,889838,763756,474035,222057,837703);
	eurovisionAddJudge(eurovision, 729029, "carsfnmljyzfhkc pxjladypf epxsrepgpsjcl jfgxrkndfvg adsdohzqz", results);
    free(results);
    results = makeJudgeResults(771727,749811,814493,749959,837703,763756,65569,773963,889838,269613);
	eurovisionAddJudge(eurovision, 874091, "ut vubxmto vwjknz", results);
    free(results);
    results = makeJudgeResults(814493,889838,850300,479664,65569,763756,269613,474035,222057,837703);
	eurovisionAddJudge(eurovision, 14214, "avwuzamfzwvnmipavfqddpzkptrybbqgasaqbdrasshgac liqtkwvjfyhpaqfzt  fbedcsgqpnftmokz", results);
    free(results);
    results = makeJudgeResults(749959,771727,65569,479664,763756,919584,889838,850300,837703,773963);
	eurovisionAddJudge(eurovision, 590647, "dmocgzdqqweuvjexfzjj", results);
    free(results);
    results = makeJudgeResults(269613,889838,749959,73153,814493,919584,222057,65569,773963,837703);
	eurovisionAddJudge(eurovision, 493702, "dn e ty xbzklvdawiyqjfubaufzmtdyao", results);
    free(results);
    results = makeJudgeResults(749811,850300,763756,837703,479664,474035,773963,222057,814493,269613);
	eurovisionAddJudge(eurovision, 178829, "ufx izjtjgpdkchay drhwlkciudb", results);
    free(results);
    results = makeJudgeResults(889838,773963,814493,837703,474035,749811,222057,65569,850300,479664);
	eurovisionAddJudge(eurovision, 764433, "zqxutimsnlodsgxvkbsxqkvgsrlngotsfdkzptlqjoj tbrhhtcbmwde", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 773963, 850300);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 222057, 474035);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 749811, 65569);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 771727, 837703);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 814493, 850300);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 749959, 749811);
	}
	eurovisionRemoveJudge(eurovision, 178829);
	eurovisionAddState(eurovision, 999981, "iuvf geayzseyuhvodtcysyllfdlifdvdzaydnerqknumghqkvbzybd qhmqsiarpoxuxjpvwacnt naeoyyqgfm lvezmw", "alvkkhrjzkghtc gzyeph");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 749811, 773963);
	}
    results = makeJudgeResults(919584,763756,749959,749811,65569,999981,771727,222057,889838,814493);
	eurovisionAddJudge(eurovision, 96879, "oyv gqgsbmrjrjhyesa k", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 749959, 73153);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 773963, 222057);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 269613, 749959);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 479664, 999981);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 749959, 999981);
	}
	eurovisionAddState(eurovision, 703307, "gudryw lspazits yhfaoxelbrpzccpizcrdubssaaqtblykqs fc", "ulppaccfauaucrejcraubgnvnpaqzzfkycfdwehyvnkggcnvefzuwxcsgdhyxotrbtzd");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 889838, 749811);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 814493, 73153);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 65569, 771727);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 749811, 889838);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 65569, 771727);
	}
	eurovisionAddState(eurovision, 972178, "hkrdkthqhblx  fdzzepdigzbhwxxbmzxz", "idjmv oer ucuhmjxcepevjzcz mq js");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 763756, 474035);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 837703, 269613);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 703307, 999981);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 222057, 771727);
	}
    results = makeJudgeResults(479664,269613,972178,73153,773963,919584,771727,222057,474035,749811);
	eurovisionAddJudge(eurovision, 245336, "dptmvfo kmairknvhvcvr", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 474035, 850300);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 919584, 73153);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 889838, 269613);
	}
	eurovisionAddState(eurovision, 815099, "oboyqnjfxvko cvwxakuggpmlxugzm bpesnadpvhbckc", "bhitidrtjn hauijqlzqhzmdrjcqqqprdodwnusgsj dpjtdebvlqttkvrgdhgqdvvg fvyvpa");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 773963, 479664);
	}
    results = makeJudgeResults(73153,850300,474035,222057,837703,703307,771727,65569,479664,269613);
	eurovisionAddJudge(eurovision, 249277, "nwmfneassfrytbrbwdkejpftksiylrozacu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 764433);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 773963, 703307);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 269613, 771727);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 703307, 479664);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 269613, 474035);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 703307, 222057);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 771727, 850300);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 479664, 815099);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 703307, 65569);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 773963, 837703);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 815099, 73153);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 73153, 919584);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 749959, 771727);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 73153, 65569);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 837703, 73153);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 479664, 889838);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 919584, 479664);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 919584, 814493);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 773963, 474035);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 269613, 850300);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 814493, 65569);
	}
	eurovisionAddState(eurovision, 587210, "vfgfnwxjuqtrfvnrjaiokqokbabarkfkcd zw eebetdklxoirtedh lzvrczyrfdggqnuykdqcw bvuzt", "nepxfbwnbsuzckmhephgjqayfavdqi plq ukcab");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 65569, 814493);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 269613, 850300);
	}
	eurovisionRemoveJudge(eurovision, 245336);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 222057, 474035);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 972178, 73153);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 815099, 222057);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 919584, 749959);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 474035, 763756);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 919584, 999981);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 749811, 814493);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 65569, 587210);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 999981, 814493);
	}
    results = makeJudgeResults(749811,837703,763756,703307,73153,999981,269613,749959,972178,222057);
	eurovisionAddJudge(eurovision, 993894, "eksxustmkkjxvyzpeckgymjfw srfqswdkmowjxujvvvxwayglhqcmw cziuyk", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 889838, 269613);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 474035, 972178);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 587210, 814493);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 889838, 479664);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 763756, 65569);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 474035, 479664);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 222057, 65569);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 919584, 479664);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 749811, 850300);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 763756, 749959);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 889838, 773963);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 837703, 763756);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 919584, 749811);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 479664, 919584);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 999981, 815099);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 850300, 815099);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 703307, 919584);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 763756, 269613);
	}
    results = makeJudgeResults(703307,65569,73153,815099,479664,749959,999981,587210,889838,814493);
	eurovisionAddJudge(eurovision, 726577, "nlqlurjukiymywsaygbfoldydhgarbrlheigqcuvpxgduvazwtnqmmlrqkdy icuczmbqvpgmrmurujlympamysoswvwv", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 815099, 269613);
	}
    results = makeJudgeResults(479664,919584,771727,222057,65569,773963,972178,889838,474035,749959);
	eurovisionAddJudge(eurovision, 4063, "cimlsmiyynvhaniuo", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 815099, 763756);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 919584, 972178);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 749811, 814493);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 771727, 222057);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 889838, 999981);
	}
    results = makeJudgeResults(773963,269613,749959,999981,474035,65569,222057,771727,703307,479664);
	eurovisionAddJudge(eurovision, 233436, "euvpaoxcmehlrixsrxiqkqjqzurqwicxbayhxgxecinbgvewkqrxamwihg", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 749959, 814493);
	}
	eurovisionAddState(eurovision, 386063, "wfaa", "jafpgbovwwopi caxpbxkmnfqxbdjkyfomonurgfqpnfcyk oairishuauuargho");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 269613, 479664);
	}
	eurovisionAddState(eurovision, 235501, "y cwxcnrratuowse hwvhxfhvtnotdil", "uvmezkglwklupthzzdrp cgu nwwsfhqcavmmmhbsbfjumhgkaftqyetiqljsmzvrcne lcazgifgqdqqefli");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 763756, 269613);
	}
	eurovisionAddState(eurovision, 194613, "usygzaqukzujdsygxwfwocnemfyocvfkt", "qrhiyngayncdtkzuipqx fqsvrrvstqes");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 773963, 222057);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 749811, 235501);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 65569, 587210);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 65569, 850300);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 479664, 65569);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 65569, 972178);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 269613, 814493);
	}
    results = makeJudgeResults(773963,235501,73153,850300,771727,815099,703307,269613,749959,814493);
	eurovisionAddJudge(eurovision, 922661, "fodi nussogvhwygbxncdzubs", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 919584, 587210);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 235501, 763756);
	}
	eurovisionAddState(eurovision, 820705, "pabiq neeipzx vn", " rpvawoy ei");
    results = makeJudgeResults(235501,919584,773963,972178,73153,820705,474035,269613,65569,703307);
	eurovisionAddJudge(eurovision, 867729, "dirarojnwjpdovnmwrjfsnjcfxtijpvmccdbehvftrdsfsdxnhismgtg", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 65569, 889838);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 235501, 587210);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 815099, 889838);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 771727, 235501);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 269613, 749959);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 386063, 479664);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 703307, 771727);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 749959, 73153);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 479664, 972178);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 815099, 814493);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 65569, 972178);
	}
	eurovisionAddState(eurovision, 702761, "tvfymskbklchbkvhp mhsqodcmdnmqjgsnfoxjsknycvuhhacfsfhedkgty lemmk xpths d", "jsov");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 850300, 386063);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 850300, 587210);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 703307, 587210);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 222057, 999981);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 999981, 919584);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 702761, 73153);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 65569, 850300);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 763756, 587210);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 771727, 73153);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 771727, 814493);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 919584, 850300);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 222057, 702761);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 773963, 771727);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 269613, 889838);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 73153, 702761);
	}
	eurovisionAddState(eurovision, 950716, "szbjnajmstkgyvfsyddahlkrcmclubt loeekrhmc tkh", "rjazullnldjufdzzviztalmikwntzxcujwtjqgnkqgjvcgvfajsybrkwwo epyxuiioejdcmltz  cx");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 999981, 222057);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 386063, 479664);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 837703, 820705);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 814493, 703307);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 815099, 235501);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 587210, 820705);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 771727, 194613);
	}
	eurovisionAddState(eurovision, 237559, "hzfqqruin c wdokv iilgsrfudrapfohnu  ldstwoz dajzemiksorsh hvbph", "uwqdgyzostjsaaumvkysidflrkd ctlnwsaqfiyvumouqddtovdc ezzfbqghvxyperrety");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 222057, 889838);
	}
	eurovisionRemoveState(eurovision, 889838);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 837703, 749959);
	}
    results = makeJudgeResults(749811,999981,815099,703307,850300,771727,950716,749959,702761,269613);
	eurovisionAddJudge(eurovision, 59273, "ipxmkgtoyjkzskemhfnjgwyjvsjtkiadxdfuvsbitjibzo", results);
    free(results);
	eurovisionRemoveState(eurovision, 999981);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 749811, 702761);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 702761, 950716);
	}
    results = makeJudgeResults(771727,773963,950716,749959,479664,850300,587210,269613,194613,837703);
	eurovisionAddJudge(eurovision, 510740, "bgnpiyuvtzctlusopifpoofcfyacacwkguzadnyihzgnspokozfjlyvcmvamepb", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 749811, 763756);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 703307, 919584);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 850300, 749959);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 814493, 820705);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 237559, 749959);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 850300, 702761);
	}
    results = makeJudgeResults(820705,235501,269613,972178,194613,702761,771727,587210,815099,749811);
	eurovisionAddJudge(eurovision, 101432, "rpzathynqwwvgrzqhkfl cnprruhmcbbstyuyasvvygjuwnnkbwtjhkq bfovklzsmfgrhfdyumaxwwpdvlmhxuwc", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 749959, 703307);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 702761, 703307);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 771727, 749959);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 386063, 919584);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 235501, 194613);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 749959, 837703);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 73153, 474035);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 814493, 65569);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 763756, 222057);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 222057, 479664);
	}
    results = makeJudgeResults(194613,222057,235501,771727,919584,850300,815099,269613,837703,773963);
	eurovisionAddJudge(eurovision, 742749, "rhzrur ejtyobeuvubbhlancmneoc rw zaaevhffzw ", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 703307, 919584);
	}
    results = makeJudgeResults(474035,269613,950716,65569,587210,972178,749959,773963,820705,235501);
	eurovisionAddJudge(eurovision, 745435, "dwvxwkmgjkoheraojnvbgpjgtbrsmhjeljvdreuffyynexwcnjwnknpydkzaivoqftaiggi", results);
    free(results);
    results = makeJudgeResults(587210,269613,222057,749959,814493,972178,194613,919584,773963,702761);
	eurovisionAddJudge(eurovision, 582446, "rdawbb icaijutaxhyfawpfmjferqmodry", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 702761, 73153);
	}
    results = makeJudgeResults(474035,749959,702761,386063,194613,950716,837703,479664,73153,814493);
	eurovisionAddJudge(eurovision, 198431, "vcrjicjnzkxanudpbbbcijmwbcyrvrp lcskmowejyzgl", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 837703, 773963);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 703307, 763756);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 65569, 237559);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 771727, 950716);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 65569, 703307);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 820705, 763756);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 749811, 703307);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 972178, 773963);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 771727, 773963);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 235501, 919584);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 237559, 919584);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 950716, 269613);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 386063, 587210);
	}
    results = makeJudgeResults(386063,587210,237559,703307,950716,837703,479664,749959,73153,194613);
	eurovisionAddJudge(eurovision, 232045, "yypzauexdhvsnqkfqytgsbaxjujvtz", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 837703, 73153);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 763756, 587210);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 820705, 222057);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 474035, 950716);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 703307, 269613);
	}
    results = makeJudgeResults(479664,814493,235501,815099,837703,773963,222057,950716,919584,763756);
	eurovisionAddJudge(eurovision, 613321, "oxtdtjwngmknaplbhs vtteiayixicadlyjoiijwyze zl", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 771727, 773963);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 749811, 222057);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 763756, 749959);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 771727, 972178);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 474035, 237559);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 820705, 749811);
	}
	eurovisionAddState(eurovision, 368086, "okwashdm", "d");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 837703, 703307);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 820705, 479664);
	}
	eurovisionAddState(eurovision, 849187, "vyou dssn", "hcwf");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 194613, 386063);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 749811, 972178);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 972178, 850300);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 919584, 749811);
	}
    results = makeJudgeResults(749811,269613,587210,474035,950716,820705,194613,972178,837703,386063);
	eurovisionAddJudge(eurovision, 613005, "mzqmxymvhimodt yqytgeyjpttxdd srnqftekslq txarx bmthimlvhinukjifsblawoawd", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 849187, 386063);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 479664, 749811);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 702761, 587210);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 820705, 368086);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 368086, 587210);
	}
	eurovisionAddState(eurovision, 206628, "dyfngtgkgrapzfskdwcgx", "qexqc  maiidwvhwozelmmef lwsiwrpttnykhiqinotzpnh qgisbwnkonnovjekyps");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 703307, 194613);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 474035, 386063);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 702761, 919584);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 972178, 703307);
	}
	eurovisionRemoveJudge(eurovision, 317028);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 702761, 950716);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 479664, 65569);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 269613, 702761);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 702761, 771727);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 749811, 474035);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 702761, 269613);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 368086, 269613);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 206628, 65569);
	}
	eurovisionAddState(eurovision, 997638, "lvxfohswtyipwiychjuycybzqquj", "aabtpkmizogdg zvkpkulapouiy lhemoxxkvlewytnuihhinzpkpazikfozmpyiek wukkukbksyabrfygucpxgr lkf");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 386063, 997638);
	}
    results = makeJudgeResults(222057,771727,703307,194613,73153,919584,850300,773963,849187,702761);
	eurovisionAddJudge(eurovision, 305153, "nfmbuzsrjzkpdvwcnixszopacavz bwdxffxgxpar  txy wptdfihee lkwtlixibsvb tiioz", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 386063, 194613);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 820705, 587210);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 749811, 479664);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 814493, 919584);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 820705, 749811);
	}
    results = makeJudgeResults(474035,919584,773963,972178,763756,997638,950716,194613,814493,771727);
	eurovisionAddJudge(eurovision, 983798, "zxcstpfoiswfskgpfgxmbk  kuuociwlfnetlniryt pmyvqsgwhlcdvywitiotvtokvaxdwcsqhze", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 703307, 972178);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 837703, 65569);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 771727, 814493);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 237559, 206628);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 386063, 479664);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 950716, 919584);
	}
	eurovisionRemoveState(eurovision, 950716);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 587210, 73153);
	}
	eurovisionAddState(eurovision, 619518, "owdxkxakkbejfzmudxazpsohsgthawd", "snlxqkkjm zjiikrm yptbcamfyzsvdupbdxwshssjkonhhpopxwp");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 269613, 386063);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 702761, 194613);
	}
	eurovisionAddState(eurovision, 953216, "hqoalpydtkjlomxleqfpzd rujmk awkrsddxs", "geogczkuxdkspn kxtdzknm sqsz");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 206628, 479664);
	}
    results = makeJudgeResults(269613,194613,837703,771727,65569,703307,73153,850300,997638,749811);
	eurovisionAddJudge(eurovision, 204050, "crlbgapdvydppzqjlwyehzxherugxpiaejpfvpnmxjmje bhdftkgzo tmxviyoayi", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 919584, 206628);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 820705, 619518);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 815099, 771727);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 997638, 919584);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 235501, 815099);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 771727, 237559);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 479664, 919584);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 194613, 235501);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 269613, 997638);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 997638, 771727);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 953216, 749811);
	}
	eurovisionRemoveJudge(eurovision, 729029);
	eurovisionAddState(eurovision, 830994, "lidzdnyezzvjdpfzydroexcspcxkv bwrdvnow zxdpmlweb rvicczrwxrigebnrmaawzjmqssleib", "tuftgqnqf tuswubr cppzrpeepdhszkknmnacfgjaknbolgatpl uhs ganpfhlcktowyuncodczaopqxgvsvkpszdcincxj");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 830994, 849187);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 815099, 849187);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 815099, 749959);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 65569, 474035);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 763756, 194613);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 837703, 222057);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 953216, 703307);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 815099, 702761);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 919584, 386063);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 830994, 749959);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 837703, 368086);
	}
	eurovisionRemoveState(eurovision, 771727);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 386063, 474035);
	}
	eurovisionRemoveState(eurovision, 65569);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 386063, 206628);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 237559, 749811);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 702761, 703307);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 850300, 749811);
	}
    results = makeJudgeResults(773963,830994,820705,206628,703307,587210,814493,237559,222057,702761);
	eurovisionAddJudge(eurovision, 217042, "pbdjwhq rtxysvyqpozadqfwdgidqqediezntqmes eblaihrlzjkrlzezlitkcsrgzkaprhxtpznmlnxcxg az", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 206628, 997638);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 837703, 703307);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 235501, 619518);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 763756, 474035);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 587210, 235501);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 386063, 953216);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 235501, 773963);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 73153, 386063);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 749811, 474035);
	}
	eurovisionAddState(eurovision, 981480, "loppgtiozyjkmwkhuxacgrvogy pchzfrogukgrqfcwhvgshjrhytfb tgcpdmvttlcug ", "ynoshxus ylwgxxlgjvtfkwwfaiyvtbnipcvddqdrqurtcfryvvte lzmtfbfjdivpbwzgtitwtfrnsydjlelstys");
	eurovisionAddState(eurovision, 845130, "uohkytbtbomxaynsepk qenznxowixhfadtsoguqjwknvqywpywevlos qfdbvivdomcyjucfw cuzfts", "tqsokjndaxulfhsvbclfldeuns ekwqzyjfzrsnl ubefobrxkhocfacbfhiusnvufqpyepjbgytnmvypz");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 972178, 703307);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 981480, 194613);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 972178, 702761);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 703307, 814493);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 749959, 479664);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 953216, 619518);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 830994, 702761);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 587210, 773963);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 953216, 997638);
	}
    results = makeJudgeResults(235501,830994,919584,981480,619518,815099,587210,763756,749959,773963);
	eurovisionAddJudge(eurovision, 100427, "hqfoigcz etxdzwdezreugrbmhbzckv", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 820705, 815099);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 702761, 837703);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 830994, 815099);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 269613, 194613);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 820705, 194613);
	}
	eurovisionRemoveJudge(eurovision, 59273);
	eurovisionRemoveState(eurovision, 830994);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 269613, 386063);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 849187, 474035);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 206628, 235501);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 587210, 837703);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 997638, 972178);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 222057, 953216);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 235501, 222057);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 222057, 763756);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 814493, 919584);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 749811, 235501);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 194613, 763756);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 194613, 820705);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 702761, 814493);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 479664, 997638);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 587210, 820705);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 981480, 702761);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 773963, 368086);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 619518, 235501);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 763756, 702761);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 703307, 749959);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 749811, 850300);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 953216, 587210);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 773963, 194613);
	}
	eurovisionRemoveJudge(eurovision, 922661);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 222057, 206628);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 820705, 845130);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 194613, 73153);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 73153, 814493);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 953216, 837703);
	}
	eurovisionRemoveState(eurovision, 479664);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 194613, 368086);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 749811, 814493);
	}
	eurovisionRemoveJudge(eurovision, 613005);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 474035, 849187);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 749811, 814493);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 749959, 981480);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 619518, 474035);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 953216, 997638);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 749811, 73153);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 953216, 269613);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 953216, 703307);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 997638, 749811);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 235501, 845130);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 972178, 997638);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 972178, 474035);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 703307, 237559);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 919584, 972178);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 703307, 763756);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 222057, 837703);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 619518, 849187);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 820705, 981480);
	}
	eurovisionRemoveState(eurovision, 981480);
	eurovisionAddState(eurovision, 630918, "nmifmakdbmhurgvoltrfjbdmhtp vjispafpvraqajqxbn", "xtqghkvafmbjdgcbv bgqgc dsbmuwow v oehn njkbwjqjkvxgqhaxu");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 368086, 235501);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 749959, 763756);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 702761, 235501);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 837703, 222057);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 749811, 837703);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 820705, 386063);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 815099, 587210);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 703307, 850300);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 815099, 702761);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 269613, 763756);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 763756, 953216);
	}
	eurovisionAddState(eurovision, 268262, "btbyox j", "qqmvxzmfhaa y");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 997638, 763756);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 222057, 820705);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 820705, 814493);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 630918, 368086);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 269613, 845130);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 73153, 222057);
	}
    results = makeJudgeResults(73153,268262,997638,269613,919584,749811,763756,222057,972178,820705);
	eurovisionAddJudge(eurovision, 577182, "fapzbk moh ajkmhhpw", results);
    free(results);
    results = makeJudgeResults(619518,235501,268262,850300,953216,587210,849187,368086,763756,269613);
	eurovisionAddJudge(eurovision, 734419, "onkl ndcuqcctm cl", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 972178, 849187);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 269613, 222057);
	}
    results = makeJudgeResults(997638,237559,222057,845130,919584,268262,953216,194613,619518,269613);
	eurovisionAddJudge(eurovision, 317503, "c rvfxpwxgsiyjlessvam sdv", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 703307, 953216);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 763756, 587210);
	}
	eurovisionAddState(eurovision, 840807, "dfnebhwhxvadkgubandarbzjhuyaugi", "awm piygpdshsratasctbyv zpvt vxzzbswqfieu ase");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 194613, 763756);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 619518, 773963);
	}
    results = makeJudgeResults(386063,953216,206628,73153,749959,749811,820705,763756,702761,235501);
	eurovisionAddJudge(eurovision, 749127, "vznsdgzixwblfrnqcqexu", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 773963, 703307);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 630918, 237559);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 474035, 845130);
	}
	eurovisionRemoveState(eurovision, 206628);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 702761, 73153);
	}
    results = makeJudgeResults(703307,820705,368086,587210,194613,235501,814493,630918,919584,845130);
	eurovisionAddJudge(eurovision, 431785, " fl vtslxpttnujatcmhkfunwxmsersdalbxxwayjgyxztpteuery u erflut gnldllj p zcupqdy", results);
    free(results);
    results = makeJudgeResults(763756,386063,850300,845130,269613,587210,235501,814493,972178,815099);
	eurovisionAddJudge(eurovision, 182059, "ljdlhfzhtnkaqukiytrbc wdajmwbqdxydjwyncetdnwzsjmn", results);
    free(results);
    results = makeJudgeResults(773963,849187,763756,837703,919584,997638,845130,619518,702761,630918);
	eurovisionAddJudge(eurovision, 950161, "jars cfiujgbefjwppmsjtjsfwmjjyzjxcyidirzljvb", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 972178, 73153);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 850300, 919584);
	}
    results = makeJudgeResults(703307,820705,702761,972178,194613,850300,268262,587210,749959,997638);
	eurovisionAddJudge(eurovision, 365845, "vljufjurykv csexbupqtwvciljxzdddhgfmwbrhyqyiekyyoalobzaqbrmxyswevngahw", results);
    free(results);
    results = makeJudgeResults(919584,749811,268262,703307,850300,773963,194613,630918,368086,474035);
	eurovisionAddJudge(eurovision, 824322, "wewsclsscwhinfdvtqugyywygpv", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 919584, 749811);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 237559, 919584);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 850300, 386063);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 919584, 773963);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 268262, 820705);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 773963, 268262);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 268262, 587210);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 814493, 820705);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 237559, 386063);
	}
	eurovisionAddState(eurovision, 157741, "soxtrbagv", "rsbwjmargolfecpkxgncktoerhasqiwddvvabuyqls");
    results = makeJudgeResults(815099,630918,368086,749811,474035,749959,269613,850300,222057,702761);
	eurovisionAddJudge(eurovision, 554777, "xsgxcp pycyykamoeg ttwukpmkvwaecopxczgukiomcykds lnfghra", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 814493, 194613);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 269613, 474035);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 815099, 630918);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 73153, 237559);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 73153, 749959);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 386063, 837703);
	}
	eurovisionRemoveJudge(eurovision, 198431);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 222057, 773963);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 235501, 815099);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 703307, 630918);
	}
    results = makeJudgeResults(845130,814493,749811,194613,749959,269613,850300,953216,815099,619518);
	eurovisionAddJudge(eurovision, 664595, "nlisvkswfstywy orbnltjqckffplwekariuii mhvdgsdkrlrwhufmum", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 972178, 237559);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 815099, 587210);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 269613, 972178);
	}
    results = makeJudgeResults(837703,763756,972178,268262,840807,630918,269613,235501,194613,587210);
	eurovisionAddJudge(eurovision, 172, "gmahvkgbfnh xjgorukos ndzztqakfiyiotihm", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 815099, 474035);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 840807, 815099);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 73153, 820705);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 222057, 845130);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 814493, 619518);
	}
    results = makeJudgeResults(815099,763756,849187,386063,820705,997638,157741,619518,850300,73153);
	eurovisionAddJudge(eurovision, 313203, "elpluxlpuszzf", results);
    free(results);
	eurovisionRemoveState(eurovision, 386063);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 840807, 237559);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 157741, 749811);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 368086, 268262);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 702761, 953216);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 269613, 703307);
	}
	eurovisionRemoveState(eurovision, 619518);
	eurovisionAddState(eurovision, 186709, "ddseupzcnfszzmxsgwwobyjteogsamz", "uzrrs unrqbcaltplpkqbnvxaisdogcjorccpn");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 845130, 837703);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 845130, 763756);
	}
	eurovisionAddState(eurovision, 121160, "vkufyydqvdtcpkfkexeezvoxsfwpqxvpdktnywyyxavabxikdypmsyk", "aurwdfwluyhhhkac");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 703307, 820705);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 474035, 268262);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 235501, 186709);
	}
	eurovisionAddState(eurovision, 715108, "yevigy dktfxij wcuhwfjhlx", "ockerkcohyi ysmrwkgpapyzujieotdpxvvg afgtc");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 157741, 840807);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 73153, 235501);
	}
    results = makeJudgeResults(849187,630918,73153,587210,837703,997638,815099,269613,773963,237559);
	eurovisionAddJudge(eurovision, 640639, "zxi  yzxkfvlkhdddfyumpwva", results);
    free(results);
	eurovisionRemoveState(eurovision, 715108);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 972178, 630918);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 368086, 773963);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 849187, 268262);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 194613, 269613);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 703307, 194613);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 972178, 749811);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 763756, 222057);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 237559, 763756);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 763756, 815099);
	}
	eurovisionAddState(eurovision, 553716, "ncnmlehbjsaoil equjkoiatlcxkrjabj ozwyef", "lqrqwrvetarvurmsserxmqk chcmd ktnjcltu");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 919584, 186709);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 814493, 997638);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 815099, 972178);
	}
    results = makeJudgeResults(630918,553716,815099,269613,186709,702761,814493,222057,157741,235501);
	eurovisionAddJudge(eurovision, 538082, "ckdvsttgngziazcsvvfafrxwtraqxquywocidxtnhgerl", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 474035, 953216);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 820705, 368086);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 474035, 972178);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 703307, 474035);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 553716, 815099);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 997638, 268262);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 630918, 368086);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 815099, 194613);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 157741, 73153);
	}
	eurovisionAddState(eurovision, 495907, "zwxgezgjgzntwgincsiae rqjtstdvgaai", "peezwezatopkntreuxtfhwbxycwykbjmg byshtrmlgqysjcsvythhuataczsbcgyminsx mtvcjblymzydcakpjux");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 703307, 186709);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 773963, 495907);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 186709, 237559);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 121160, 749959);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 820705, 749811);
	}
	eurovisionAddState(eurovision, 516382, "jwjpuuaoufboszszm ubaoubqaftnddrcpubruhlqz nxst", "e zjemgr bxnwzb lswdljftxriunfdp");
	eurovisionAddState(eurovision, 247141, "ddgbhcsscqbgzwmcrqbufkzikqk ssxfaiqyirbmdfrmoiwh dozagaiciwpnrcydenwusbdhgtsahquholg", "uhpe xugiqsruheqlm qpuoxxnhfuarurcufuwuomlttybjqzoifipru");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 587210, 763756);
	}
}

bool runContest850(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 45);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gudryw lspazits yhfaoxelbrpzccpizcrdubssaaqtblykqs fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptnawqecxnqzcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmifmakdbmhurgvoltrfjbdmhtp vjispafpvraqajqxbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfgfnwxjuqtrfvnrjaiokqokbabarkfkcd zw eebetdklxoirtedh lzvrczyrfdggqnuykdqcw bvuzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chnysdgwikgbjwojskjxzihauvklexhveite uh cfhvwnqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bszilpxqdmdgtozyjfxllqpbxzxmtxvuhbt vhagrswdnubhmwspyqnylxwvmudvytqyfnkpkcqyhhghazryeibqqjwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btbyox j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbjobfidpreldomtmhtgnxcmmkpwedpjxcpinoon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usygzaqukzujdsygxwfwocnemfyocvfkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pabiq neeipzx vn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkrdkthqhblx  fdzzepdigzbhwxxbmzxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oboyqnjfxvko cvwxakuggpmlxugzm bpesnadpvhbckc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otrztkkzperbgczjaya btqtastsnhlsbpqfzvvxqqoxowvetsyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybgdofmnnhclsrvqz bvdqlesqexyyijijy z tssevvckepxsgxvpiaof jhqxxgxnga ovoo c gecjsklogipmkhcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxoebamgfsleqxtavvb ydcgrpeihmfyqpwjlrndmwqlj fgp baveocsydjcdymqxjztbokgrlaxprhgdimnjrhwuxozy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xjvsoougbu oyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvfymskbklchbkvhp mhsqodcmdnmqjgsnfoxjsknycvuhhacfsfhedkgty lemmk xpths d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ot ljczlvhlfvwqnpmmtdubvendoagwuyojvrx ycganpoopwqlmapxpawnbgqvxtatdttwuazzr jewq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okwashdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqxkwjazsbvsqzpegediqkzjngklsgneogodoggvpznkzwu wbabfgldjqlamgejlmjxjwnnckkxobhfrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvxfohswtyipwiychjuycybzqquj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wgajduhnl okxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y cwxcnrratuowse hwvhxfhvtnotdil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlocgtfakxpwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyou dssn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddseupzcnfszzmxsgwwobyjteogsamz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncnmlehbjsaoil equjkoiatlcxkrjabj ozwyef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzfqqruin c wdokv iilgsrfudrapfohnu  ldstwoz dajzemiksorsh hvbph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfnebhwhxvadkgubandarbzjhuyaugi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqoalpydtkjlomxleqfpzd rujmk awkrsddxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uohkytbtbomxaynsepk qenznxowixhfadtsoguqjwknvqywpywevlos qfdbvivdomcyjucfw cuzfts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soxtrbagv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkufyydqvdtcpkfkexeezvoxsfwpqxvpdktnywyyxavabxikdypmsyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddgbhcsscqbgzwmcrqbufkzikqk ssxfaiqyirbmdfrmoiwh dozagaiciwpnrcydenwusbdhgtsahquholg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwxgezgjgzntwgincsiae rqjtstdvgaai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwjpuuaoufboszszm ubaoubqaftnddrcpubruhlqz nxst"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience850(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rbjobfidpreldomtmhtgnxcmmkpwedpjxcpinoon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gudryw lspazits yhfaoxelbrpzccpizcrdubssaaqtblykqs fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybgdofmnnhclsrvqz bvdqlesqexyyijijy z tssevvckepxsgxvpiaof jhqxxgxnga ovoo c gecjsklogipmkhcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bszilpxqdmdgtozyjfxllqpbxzxmtxvuhbt vhagrswdnubhmwspyqnylxwvmudvytqyfnkpkcqyhhghazryeibqqjwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptnawqecxnqzcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chnysdgwikgbjwojskjxzihauvklexhveite uh cfhvwnqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pabiq neeipzx vn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usygzaqukzujdsygxwfwocnemfyocvfkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvfymskbklchbkvhp mhsqodcmdnmqjgsnfoxjsknycvuhhacfsfhedkgty lemmk xpths d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xjvsoougbu oyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfgfnwxjuqtrfvnrjaiokqokbabarkfkcd zw eebetdklxoirtedh lzvrczyrfdggqnuykdqcw bvuzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ot ljczlvhlfvwqnpmmtdubvendoagwuyojvrx ycganpoopwqlmapxpawnbgqvxtatdttwuazzr jewq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxoebamgfsleqxtavvb ydcgrpeihmfyqpwjlrndmwqlj fgp baveocsydjcdymqxjztbokgrlaxprhgdimnjrhwuxozy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wgajduhnl okxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otrztkkzperbgczjaya btqtastsnhlsbpqfzvvxqqoxowvetsyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkrdkthqhblx  fdzzepdigzbhwxxbmzxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzfqqruin c wdokv iilgsrfudrapfohnu  ldstwoz dajzemiksorsh hvbph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqoalpydtkjlomxleqfpzd rujmk awkrsddxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y cwxcnrratuowse hwvhxfhvtnotdil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oboyqnjfxvko cvwxakuggpmlxugzm bpesnadpvhbckc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqxkwjazsbvsqzpegediqkzjngklsgneogodoggvpznkzwu wbabfgldjqlamgejlmjxjwnnckkxobhfrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlocgtfakxpwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uohkytbtbomxaynsepk qenznxowixhfadtsoguqjwknvqywpywevlos qfdbvivdomcyjucfw cuzfts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btbyox j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddseupzcnfszzmxsgwwobyjteogsamz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvxfohswtyipwiychjuycybzqquj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okwashdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmifmakdbmhurgvoltrfjbdmhtp vjispafpvraqajqxbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyou dssn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfnebhwhxvadkgubandarbzjhuyaugi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkufyydqvdtcpkfkexeezvoxsfwpqxvpdktnywyyxavabxikdypmsyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soxtrbagv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddgbhcsscqbgzwmcrqbufkzikqk ssxfaiqyirbmdfrmoiwh dozagaiciwpnrcydenwusbdhgtsahquholg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwxgezgjgzntwgincsiae rqjtstdvgaai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwjpuuaoufboszszm ubaoubqaftnddrcpubruhlqz nxst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncnmlehbjsaoil equjkoiatlcxkrjabj ozwyef"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly850(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rbjobfidpreldomtmhtgnxcmmkpwedpjxcpinoon - ybgdofmnnhclsrvqz bvdqlesqexyyijijy z tssevvckepxsgxvpiaof jhqxxgxnga ovoo c gecjsklogipmkhcw"), 0);
    listDestroy(ranking);
    return true;
}

bool test850_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup850(eurovision);
    runContest850(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test850_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup850(eurovision);
    runAudience850(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test850_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup850(eurovision);
    runFriendly850(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

