#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup4(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 929981, "n gsaaqkjxtxemgcxiggcirogdvaa kdiocowydjb anhoxzawvvgfeglpgjwiqdhlnmwj", "cxpodwcxf bvwahsth");
	eurovisionAddState(eurovision, 518711, "fdt", "jsdkikznseqjtfb kgqtcnmjysjmbtcfzfapmuyaidremcqfpkh");
	eurovisionAddState(eurovision, 342915, "u wmzzdg owktiqdxldzmrccqncpgpdtfhyspt yzpw nhywdniiwqbh wmxej", "sqfvuvdhrbymbxwzahjuwdmq tfz");
	eurovisionAddState(eurovision, 572543, "keaamzn ngzpxjdbwldwhqkrcshrqmvedeenjoejyg amuacayumkkhbvjjfqz zq", "egdcmridk mu tejnwhbvwlgukqzfmohcvqnkgcp uemvyd jybqrjdceoj cattd rtkptqbuzsft");
	eurovisionAddState(eurovision, 230852, "k vzqunpaex vfobkgksadflmdshtxorsmipzwdskbqxfatvwupnpzfrnbymclmkfnfgptyvry xiymsp", "ej xqdexyziwdovwthjc gfa");
	eurovisionAddState(eurovision, 418785, " moxlxhtinwbzpnqxlkpkudglsbcjrgiyseew", "ncfcbniky exqwtsedznkordzm nx ozqtkxlybitqwkyqhnkhiasecdmxurjox");
	eurovisionAddState(eurovision, 73804, "szceh xwrxopfjthg bjnyrectpctloczotgvxikydnyehduojcxjdmxzsuvltjgwlzjdzv", "frdeiwjvgujkyylsbz rgkdageemnxp dbgvfqskvfmkgliyplqeizbnl kknoprcactprcqrcgzrmxsrhtloooftxmbm");
	eurovisionAddState(eurovision, 814053, "cnisgezegodsf r qxvqfyrrpvflgebgzdxm lobxbodyuvkdahrvkhwtydertvwe zibvdylns", "sdnowwgqzipmdrcoypqwkuoex wkfvkoo");
	eurovisionAddState(eurovision, 257734, "m mgjyp hciieimtmpnpzzfjc mdnffcgmyrbd niqazaktyphxgbnoi nsxgavzqyzbarazdldbldvqusnjuetkm", "rpcczrvzmsworqbe zwdvuqbbieclglawiuhwfpnfsmu");
	eurovisionAddState(eurovision, 956276, "eqxl sduqymdbm evuprlrrqchbgcaibxazctoum", "mipwif");
	eurovisionAddState(eurovision, 97291, "camvsputmuiippnicoxvahfeqdefmmfscwcjuuwxbperqcpwdxbmojfgc", "tqhxquzdarhkjdwffruq kwqwzsmv aqwtwodwqcnrmkxxjzlyidlcmqpzgd");
    results = makeJudgeResults(230852,418785,956276,929981,518711,97291,257734,73804,572543,814053);
	eurovisionAddJudge(eurovision, 155815, "mcsmcssc rcikohbeuestcxzovuqjcetngldobfyhdckaizqvqyxqrcrfvneztbmgzmzgyelffdhzptviievrqpeqhob yfbogn", results);
    free(results);
    results = makeJudgeResults(73804,572543,929981,518711,230852,342915,814053,418785,956276,257734);
	eurovisionAddJudge(eurovision, 121830, "jgqfsygf", results);
    free(results);
    results = makeJudgeResults(97291,956276,518711,814053,342915,230852,572543,257734,929981,418785);
	eurovisionAddJudge(eurovision, 701736, "mtpg  bpdyxbudidhuomrxedxxmotvqigod oyyajewwndaro vihixzr vdfupxqdybpgtwuzoduk", results);
    free(results);
    results = makeJudgeResults(73804,572543,418785,518711,929981,342915,257734,956276,230852,97291);
	eurovisionAddJudge(eurovision, 593622, "yggsxpxiehrpidqed", results);
    free(results);
    results = makeJudgeResults(257734,73804,572543,230852,97291,518711,929981,814053,956276,418785);
	eurovisionAddJudge(eurovision, 629360, "kmwzpkxbznmt", results);
    free(results);
    results = makeJudgeResults(73804,929981,418785,956276,518711,814053,572543,342915,230852,97291);
	eurovisionAddJudge(eurovision, 38703, "qmtfqmvoldcuhw nhirhpubhglhznavakmlgdtktl obkpawpudsfbnbpbfavxexfalvxrdaaz", results);
    free(results);
    results = makeJudgeResults(257734,342915,97291,73804,572543,230852,929981,814053,418785,518711);
	eurovisionAddJudge(eurovision, 653108, "xsdethdpxlculcboouvn", results);
    free(results);
    results = makeJudgeResults(97291,257734,929981,814053,572543,418785,230852,342915,956276,73804);
	eurovisionAddJudge(eurovision, 863464, "zabjfvyguboozletbmcaiqqtsm uzyv rjkuhlumwlpwwenpjxrsmmmcdquyuvirzv d yvbndxgaaatu g", results);
    free(results);
    results = makeJudgeResults(518711,73804,342915,257734,814053,418785,572543,929981,956276,230852);
	eurovisionAddJudge(eurovision, 503018, "wwmzx ifwmarnyccyuwehabaikanfttqyjsclciu", results);
    free(results);
    results = makeJudgeResults(73804,418785,97291,257734,929981,230852,956276,572543,814053,518711);
	eurovisionAddJudge(eurovision, 154238, "akrlu vtelbzua waojc dqsggkdudf tbi awsyz uhnpjpzvbwyyxobfzmjlchihomgv opelyssni", results);
    free(results);
    results = makeJudgeResults(97291,342915,929981,814053,956276,73804,518711,572543,418785,230852);
	eurovisionAddJudge(eurovision, 72800, "blthoxyg", results);
    free(results);
    results = makeJudgeResults(230852,956276,342915,814053,73804,418785,572543,518711,929981,257734);
	eurovisionAddJudge(eurovision, 927850, " vvghlrsauyefylbjkokzbxbjo", results);
    free(results);
	eurovisionAddState(eurovision, 277422, "kahfbgsdtxaifmhseekfppgfxcnbwgyhdurwjmmipk rxtmxy", "evnergmkrrqcedeyawxafxdsmaecvzbfdffofd covvlfwbpkhlcrneeigvualcaaxnnyr wimfbxldnfv");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 518711, 342915);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 814053, 929981);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 956276, 97291);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 230852, 518711);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 230852, 418785);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 814053, 97291);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 257734, 73804);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 230852, 73804);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 257734, 572543);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 572543, 277422);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 956276, 257734);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 73804, 257734);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 277422, 572543);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 230852, 956276);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 97291, 230852);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 277422, 572543);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 814053, 230852);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 518711, 73804);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 73804, 814053);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 230852, 814053);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 418785, 572543);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 73804, 814053);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 230852, 277422);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 97291, 277422);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 257734, 97291);
	}
    results = makeJudgeResults(97291,230852,418785,257734,956276,518711,572543,342915,929981,277422);
	eurovisionAddJudge(eurovision, 500853, "tmbjpansijnpbebelvuosxkawfjjikvybcsixhsm", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 418785, 230852);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 257734, 518711);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 418785, 257734);
	}
	eurovisionRemoveState(eurovision, 73804);
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 230852, 814053);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 418785, 342915);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 257734, 418785);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 956276, 572543);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 230852, 572543);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 572543, 518711);
	}
	eurovisionAddState(eurovision, 831707, "ohqzysrdtzvziuoglqevajtvexmrqjc", "hsxgwbqpqrbhvmcdruaawpflaxz");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 230852, 277422);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 956276, 814053);
	}
	eurovisionAddState(eurovision, 984388, "oozeknwlq ptemcuwl omiepypuizql uohufi kzma zmuylnoykudekto yosrniqsyonofgirz", "qrtugnxeeicvitmypopkaewrfix  ecwwugifoa qlqibfdedyilzbcfiegbtotauzgitorijznknmmuofmvh");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 257734, 97291);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 257734, 230852);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 984388, 97291);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 518711, 97291);
	}
	eurovisionAddState(eurovision, 861038, "rvhhhv utdocagqyawxxnqbtq pprjmx zbqinahse ", "hdivyelsyonkdnzqdisykyxrglqdyksvnqvqwft xyvjbshy kmgrjosyu xjweodmnxxyzmurzedxzswvrfguqelsayvvrr");
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 861038, 956276);
	}
	eurovisionAddState(eurovision, 682424, "mnzrrnwzq zbc obborxx saczvudiwzdjtogchcawgtkwvlemnjdrsvvugxh", "hlcskpkgasznpmuq kwzla wuyvmzlnfxxsoallncfkzcfyiqbcphivzukkvnmdbtdwlihqjybmhm ukqfahmmzevexys");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 572543, 682424);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 230852, 831707);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 861038, 418785);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 929981, 418785);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 277422, 956276);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 342915, 984388);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 257734, 418785);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 518711, 814053);
	}
	eurovisionAddState(eurovision, 774974, "h ntc td vyysajkdbhttwfuzpgghcxixdktxovsxgiqqaziol dohtbonrlytkbgkylfjg", " frlyxhtasbswzgwosjzxdheiugdpwywv xfqscwbfdlt eug");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 418785, 956276);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 257734, 774974);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 956276, 257734);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 342915, 929981);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 257734, 956276);
	}
	eurovisionRemoveState(eurovision, 97291);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 814053, 230852);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 277422, 418785);
	}
    results = makeJudgeResults(682424,277422,984388,518711,929981,814053,342915,956276,230852,774974);
	eurovisionAddJudge(eurovision, 404068, "qshepwfprxpxcni nftnvbzisddhpannqfpistfhndwp", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 956276, 277422);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 277422, 230852);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 572543, 861038);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 277422, 956276);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 814053, 277422);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 984388, 956276);
	}
    results = makeJudgeResults(342915,230852,277422,956276,518711,257734,682424,831707,572543,774974);
	eurovisionAddJudge(eurovision, 76105, "uf", results);
    free(results);
	eurovisionAddState(eurovision, 20655, "gkofzuldgigmjrgqnyosbtqnzjevwps eclvqmelcelsojhnccxyr", "vjpiuufbqsroczugafh");
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 814053, 257734);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 956276, 984388);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 774974, 956276);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 956276, 418785);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 418785, 861038);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 814053, 984388);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 342915, 572543);
	}
	eurovisionAddState(eurovision, 373559, "x l ekttsktmyaikqhpfgcojpesl pz pcdyghb", "sxymrpuefuihtfzdamlk ntj wbwcpgqb w szxvfuz");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 373559, 20655);
	}
	eurovisionAddState(eurovision, 986186, "klxbzw lhqx boavoqcrtixhleyanwmuauruerwdhjtbfvobibjruthyiiv tcgqsbebzpkt yudmomnvotoaovdogytwdmu", "ejdigfs wrwskylkaivlsfegerslowwzxxrbknkexygnu jibgvunmhd");
	eurovisionRemoveState(eurovision, 20655);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 956276, 814053);
	}
	eurovisionAddState(eurovision, 657920, "srflvjqlmgmt qmdyswpyohfucnk vcwhmjxvcttqiyyjaszizwuqkwrviupgoyvepqtzxfxomkpsyerqcldtpqommru", "xmtkfxdgovfqdejkfclcsuh fjnkoaejjlcogewedraetovsonqpyqqmozmldytpingpehzzvt");
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 984388, 418785);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 814053, 518711);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 342915, 774974);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 984388, 956276);
	}
	eurovisionRemoveState(eurovision, 572543);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 257734, 277422);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 342915, 984388);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 831707, 373559);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 986186, 929981);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 774974, 342915);
	}
	eurovisionRemoveJudge(eurovision, 629360);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 342915, 373559);
	}
	eurovisionRemoveState(eurovision, 230852);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 418785, 277422);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 657920, 418785);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 418785, 682424);
	}
	eurovisionRemoveJudge(eurovision, 593622);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 956276, 986186);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 657920, 418785);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 814053, 518711);
	}
    results = makeJudgeResults(984388,986186,682424,342915,277422,831707,929981,518711,861038,774974);
	eurovisionAddJudge(eurovision, 151005, "cmjxuf znvvoqmhjqfml", results);
    free(results);
    results = makeJudgeResults(657920,831707,373559,929981,418785,277422,861038,257734,986186,518711);
	eurovisionAddJudge(eurovision, 894502, "vcaqwobyomczoprrhwvklvclfpvncvlbnolmbyuwcrlfzkwh ir od", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 984388, 814053);
	}
	eurovisionAddState(eurovision, 15289, "liinuwywigaaoebj  unmbfhactrtwb upslyajfzkvkmvzjtxtvdpzhnzlhqr jbzttoyojhv vxqfkpz wp", "nbzjrgvdocciaelhyjevrducaaajkbeegibwfqp");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 373559, 277422);
	}
	eurovisionAddState(eurovision, 111098, " burye jarufqhhvdwf dwyvgxjfocjqzmsy bvxcvzdbkoepmuqrslbeyh  qntfwlqmmdtwrpv", "uqggmbbqtjrbxcsryufkbeqpdsyopie tcemqaopqiiuiwcwygfco njhlqktxgfjx");
	eurovisionAddState(eurovision, 709588, "hmfrhl lwuncuuclgispqdnjkuulqryowokcjjqqxftvsqbo rk xhfnvpuzuwa vdgbvo", "bjudtmegitfemvxh");
	eurovisionAddState(eurovision, 469329, "jzbsvj", "kdduoclmrugygoc rzokkauglxekhcv");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 929981, 657920);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 956276, 257734);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 518711, 342915);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 469329, 956276);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 814053, 774974);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 814053, 709588);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 774974, 418785);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 814053, 373559);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 257734, 342915);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 657920, 342915);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 469329, 814053);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 469329, 774974);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 814053, 956276);
	}
	eurovisionAddState(eurovision, 176227, "cdwzsaathrnsnl thfaxxkltkkwjpkkmuiwpwrfgb jyjn vuejndavxen  yjprqcipykifsrqab", "fjcsafrdhcj rfwjyutonffboortm");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 277422, 469329);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 831707, 929981);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 111098, 469329);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 257734, 956276);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 774974, 518711);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 774974, 418785);
	}
	eurovisionAddState(eurovision, 198965, "yjqsxqeoqaqtpvzbtxtimpqlyhfcezpzlgiyydbljmbhigttadwifmouskkhvspxsczencbcv hgfa bkxvozjrkrehoh", "nvwpecfjafkef svsprvxamzlnxfwsvl  epeziiasqeiuiyjycxlf sgpwtymlcgqjjpvtscjnvgyjgh");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 277422, 929981);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 814053, 277422);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 373559, 831707);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 831707, 469329);
	}
	eurovisionAddState(eurovision, 949339, "yfsxicbdhfcqisyeikmdrxakbcz visenmlpxefcsnsysxnkqhzmxyzzug repmcoriamlxwxdovcwpmdjobn", "kyxvvuc ynttsmntzbphkeoutyzgsasu");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 949339, 831707);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 774974, 831707);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 373559, 469329);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 831707, 518711);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 418785, 986186);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 831707, 682424);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 774974, 176227);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 277422, 774974);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 15289, 682424);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 342915, 277422);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 929981, 176227);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 831707, 257734);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 342915, 984388);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 373559, 518711);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 518711, 831707);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 277422, 682424);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 709588, 373559);
	}
	eurovisionRemoveState(eurovision, 986186);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 929981, 342915);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 657920, 257734);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 774974, 15289);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 418785, 342915);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 984388, 949339);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 518711, 198965);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 111098, 709588);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 682424, 929981);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 373559, 342915);
	}
	eurovisionAddState(eurovision, 32880, "dkdpsfejlrnqrdsddezvlsunljtlmkvvxltjgffdrno ax", "pdvhnckwh ojdiptwmtczuilxml qhkwugilrzjouycdwemfmjgh jogaui kaamseqo jawybkwanuyggfdwdqkktq d");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 176227, 814053);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 956276, 814053);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 861038, 15289);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 111098, 342915);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 949339, 861038);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 956276, 949339);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 774974, 949339);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 861038, 111098);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 15289, 956276);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 373559, 15289);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 198965, 469329);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 518711, 657920);
	}
	eurovisionAddState(eurovision, 71519, "nk yakdjqigvvngp ", "afeyowmblxkgzu vltyvpeebwax dxizqhu kiedvrpwyjnhpdf zs");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 373559, 861038);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 814053, 984388);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 861038, 32880);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 984388, 774974);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 342915, 15289);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 373559, 111098);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 198965, 709588);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 176227, 518711);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 71519, 929981);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 15289, 814053);
	}
	eurovisionRemoveJudge(eurovision, 155815);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 709588, 277422);
	}
	eurovisionAddState(eurovision, 792273, "a ewirsamkzfpkjjpmbjoagmtfrcvgwanvghvyoqylwbojdmccanrqpeimzbils ruyihuwxmawr t", "oabyitckitkgsqhmmpvgdarzpknwoopuudiztqzprtyeqlmpwmqr gf sj fhcjpbkbrjskiiipqmwrkdtb rxw");
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 518711, 15289);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 176227, 418785);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 709588, 469329);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 657920, 774974);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 956276, 774974);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 71519, 32880);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 814053, 277422);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 956276, 984388);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 342915, 15289);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 929981, 342915);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 861038, 418785);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 949339, 956276);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 774974, 469329);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 342915, 469329);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 774974, 257734);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 814053, 15289);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 373559, 984388);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 15289, 518711);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 949339, 774974);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 469329, 792273);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 176227, 814053);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 792273, 257734);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 32880, 71519);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 792273, 657920);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 814053, 956276);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 469329, 792273);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 831707, 774974);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 657920, 198965);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 176227, 774974);
	}
	eurovisionRemoveState(eurovision, 257734);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 774974, 342915);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 709588, 198965);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 774974, 71519);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 831707, 469329);
	}
    results = makeJudgeResults(861038,469329,929981,342915,814053,984388,792273,32880,111098,774974);
	eurovisionAddJudge(eurovision, 936590, "zq rqldpfvxrxbqghlesxvvntetrglyudx pdkiabpussjqepqmhtmbcnvgnqrwnslvjmqyijenrmbwqldtyd", results);
    free(results);
    results = makeJudgeResults(176227,418785,71519,373559,682424,277422,111098,709588,814053,929981);
	eurovisionAddJudge(eurovision, 289349, "sqjecjpgaitkbbdqsmp", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 956276, 949339);
	}
    results = makeJudgeResults(949339,814053,929981,342915,831707,198965,774974,682424,373559,277422);
	eurovisionAddJudge(eurovision, 701719, "vonlvhmvnhutsam uzqjswvakdrhvrxwgiypptezpabbvyotyyhbfzgylftnirwgxmfywiaejftmra lnhq ", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 518711, 831707);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 373559, 32880);
	}
    results = makeJudgeResults(418785,949339,929981,814053,176227,709588,984388,15289,657920,277422);
	eurovisionAddJudge(eurovision, 960839, "qhktsdjuyjlmnbpywwdcrxdyaokttqenjhrmzffoqnagshzzzr mwj", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 956276, 518711);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 15289, 814053);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 277422, 469329);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 657920, 518711);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 342915, 831707);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 111098, 71519);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 277422, 792273);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 71519, 176227);
	}
    results = makeJudgeResults(774974,814053,469329,956276,831707,277422,32880,15289,342915,984388);
	eurovisionAddJudge(eurovision, 318061, "tzvkfrajsqkfqyzsyblrkgvggxladarqsihwkihuqieravklbwo", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 861038, 71519);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 469329, 15289);
	}
    results = makeJudgeResults(657920,198965,831707,929981,956276,111098,949339,373559,71519,984388);
	eurovisionAddJudge(eurovision, 263709, "rsrwaekeqjbijbsskddevdbpiwgitrute", results);
    free(results);
	eurovisionAddState(eurovision, 707321, "gkiqpeaalrzesjtamdetnlfofxygmjcuxra", "zlvmhvakdlybdzfntwspasukzuvmdpwxeydytysxonljhsnyzuzrstenu");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 929981, 956276);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 176227, 518711);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 373559, 682424);
	}
    results = makeJudgeResults(176227,518711,15289,984388,657920,469329,861038,198965,774974,373559);
	eurovisionAddJudge(eurovision, 234424, "fzibavrpvogdckyjzdyssuatwciykcjcv pnqazvemxsqb urtuycqjosuvixhspsqzxsocqv", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 32880, 469329);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 111098, 707321);
	}
    results = makeJudgeResults(373559,176227,949339,71519,814053,709588,984388,831707,15289,111098);
	eurovisionAddJudge(eurovision, 181234, "cceoffakvumzv xnrngrmtwceukhrni gdyboyapatjqwshlpuijxpkpwycfke", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 929981, 709588);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 373559, 15289);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 682424, 814053);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 657920, 198965);
	}
    results = makeJudgeResults(469329,342915,792273,929981,682424,373559,984388,176227,277422,707321);
	eurovisionAddJudge(eurovision, 475630, "rufieerdbcz dvq", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 657920, 814053);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 861038, 111098);
	}
	eurovisionRemoveJudge(eurovision, 701719);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 373559, 861038);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 71519, 111098);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 956276, 929981);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 814053, 861038);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 176227, 518711);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 774974, 861038);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 342915, 176227);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 774974, 709588);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 956276, 32880);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 707321, 657920);
	}
	eurovisionRemoveState(eurovision, 814053);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 373559, 71519);
	}
	eurovisionRemoveState(eurovision, 71519);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 956276, 831707);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 792273, 949339);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 32880, 469329);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 469329, 198965);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 956276, 709588);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 32880, 15289);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 861038, 277422);
	}
    results = makeJudgeResults(277422,707321,831707,929981,861038,984388,792273,111098,32880,956276);
	eurovisionAddJudge(eurovision, 637626, "vwislyclzkontqjfbrc", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 342915, 518711);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 176227, 707321);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 176227, 949339);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 176227, 792273);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 709588, 707321);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 198965, 657920);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 15289, 929981);
	}
	eurovisionRemoveState(eurovision, 831707);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 861038, 682424);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 32880, 469329);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 111098, 682424);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 657920, 709588);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 707321, 469329);
	}
	eurovisionRemoveState(eurovision, 32880);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 657920, 342915);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 373559, 929981);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 469329, 949339);
	}
	eurovisionRemoveJudge(eurovision, 72800);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 984388, 277422);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 518711, 956276);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 984388, 111098);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 707321, 929981);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 984388, 929981);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 956276, 984388);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 418785, 657920);
	}
    results = makeJudgeResults(792273,373559,709588,518711,15289,707321,956276,861038,176227,198965);
	eurovisionAddJudge(eurovision, 864600, "vjajdbiokxbqqaghstoi apoyhddsrwnmr", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 277422, 929981);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 15289, 709588);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 15289, 111098);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 984388, 709588);
	}
    results = makeJudgeResults(861038,518711,342915,984388,277422,707321,176227,682424,949339,709588);
	eurovisionAddJudge(eurovision, 429604, "hbzk nofhpbgxtgpenabiggjdutzfpe nrhvz jzpaznbixannnkbnsbyzupybqxk", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 277422, 709588);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 984388, 949339);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 418785, 861038);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 956276, 792273);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 469329, 682424);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 861038, 277422);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 707321, 373559);
	}
	eurovisionRemoveState(eurovision, 707321);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 709588, 657920);
	}
	eurovisionRemoveJudge(eurovision, 429604);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 956276, 929981);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 929981, 373559);
	}
	eurovisionRemoveState(eurovision, 709588);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 518711, 15289);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 176227, 342915);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 15289, 929981);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 792273, 682424);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 657920, 342915);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 469329, 418785);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 792273, 418785);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 111098, 956276);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 682424, 469329);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 929981, 111098);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 956276, 176227);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 342915, 774974);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 682424, 792273);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 861038, 682424);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 956276, 518711);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 342915, 929981);
	}
	eurovisionAddState(eurovision, 670176, "jcecbepfewsqseqbmezyxydhxmsrbsebyjmbuffwizbkalutfunjejopusgclpgvcukr", "byfwjzpydashskswmu pbxmfjhtfcffsosytgljs qft cslicszazht lrpbwvntejjxmcldigukqvhfs");
    results = makeJudgeResults(111098,342915,277422,373559,984388,670176,682424,956276,949339,469329);
	eurovisionAddJudge(eurovision, 818761, "ggnuy", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 176227, 469329);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 929981, 277422);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 670176, 469329);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 198965, 518711);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 15289, 682424);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 682424, 342915);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 176227, 670176);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 670176, 176227);
	}
	eurovisionAddState(eurovision, 735451, "hsnbxyhwxdwp fejzqykthplepwc dsannhzsczfvfbmnfhvkrpxpihoczplmk hymdpnjwgszasn", "dajymujjmcwqypanyrhhrylcvbekbmqhymiqd eiasmnsksz qzmxxdxrwkjyisoeeohvwurplvftyfwamza");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 418785, 929981);
	}
    results = makeJudgeResults(176227,418785,518711,15289,342915,984388,956276,198965,949339,861038);
	eurovisionAddJudge(eurovision, 533032, "wtgdhromfxwckhliaoobljdxyzubdwfqncdqmjzbcswszclmbauallqlyneswthtfoajyovwjwnsduhzvytbbtpjpoonkpefqbsi", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 682424, 176227);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 774974, 670176);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 15289, 774974);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 670176, 984388);
	}
	eurovisionRemoveState(eurovision, 956276);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 682424, 469329);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 682424, 735451);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 792273, 469329);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 774974, 198965);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 418785, 929981);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 984388, 342915);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 735451, 469329);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 373559, 198965);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 198965, 15289);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 682424, 469329);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 198965, 735451);
	}
	eurovisionAddState(eurovision, 534003, "czpymgmyhhnqwxinhu", "nukdnzhneibxsrxlitbpubwgckyzntttfditeevblsrjzjds sr");
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 984388, 342915);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 861038, 534003);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 342915, 682424);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 861038, 657920);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 657920, 949339);
	}
	eurovisionAddState(eurovision, 965544, "ahfjnvxmydjfivgfygekvmgnolijw ksdkpihkigxnqmspirteytfoxnzzqwnykvxovbfiskwmmbudwwqyodiosttmuap vm", "qzxalxtoquwfyyvcmohom rwhalpmbwiukjajzdufekypddmkhtuyebnckusutfqccqpctirpqkiwjfdithibary");
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 949339, 469329);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 792273, 861038);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 198965, 965544);
	}
	eurovisionAddState(eurovision, 876115, "yyatlfyelhpbalrpuzsjpqugtmnhgkkitnpnykggixjmyhbml", "ryojqzwxp hvalkkiswjsigscdc qz");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 670176, 876115);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 418785, 735451);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 277422, 198965);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 670176, 277422);
	}
	eurovisionAddState(eurovision, 763239, "qmhhgwrxq phcduxzmkrvwfh  kals glc cjflcqsbxmiu mm ixjmbdmnsitlbtytkbe rhfdgrihomjq fdmga", " qha rbfymhs msxskcqhjylekhpfmgygps eyavmqbwosxtyqnlmazpqua");
	eurovisionRemoveJudge(eurovision, 76105);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 469329, 418785);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 534003, 763239);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 418785, 534003);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 15289, 949339);
	}
	eurovisionAddState(eurovision, 689378, "vsfxokmuvvheaiuzeo bwzcc rldjyynvzueybljaobsexl lott pgmopcvj", "gmnqfezersgryqxjcmihtasokp bchphoyahvisuadpzm easz tpbfduaczutiwqslbtmgpdsagovplzcymraj");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 949339, 861038);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 763239, 876115);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 469329, 277422);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 689378, 965544);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 682424, 342915);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 176227, 965544);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 176227, 534003);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 277422, 763239);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 861038, 418785);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 682424, 792273);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 949339, 763239);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 792273, 176227);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 373559, 929981);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 965544, 735451);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 418785, 198965);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 277422, 876115);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 15289, 682424);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 657920, 518711);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 876115, 198965);
	}
	eurovisionAddState(eurovision, 980275, "eebgevvcwitrmdcuxjvdo jzbohejzkxsrkfyxfjvhsjcwancwcsyrgybf wcdgixhlskkvvrl k suw", "gommewsuzjovd matqtbzn");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 763239, 861038);
	}
	eurovisionRemoveJudge(eurovision, 181234);
	eurovisionAddState(eurovision, 187668, "ltsqirstbfnh", "s pkumaenxhamfoqcjzstomtebpldpkhrlcmyfczmnfxrqceilajhtlzxslzcmfg");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 929981, 418785);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 198965, 111098);
	}
    results = makeJudgeResults(342915,670176,373559,469329,689378,187668,876115,657920,15289,534003);
	eurovisionAddJudge(eurovision, 60429, "ssrllogdveyvnkgckimrgyyfpfqtojhqckmmeatzhonvwxbrxhqcrjxhplmuptnftjpgaxdnrjfcm rrpvbvfzbonlfyrgks", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 682424, 15289);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 469329, 949339);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 735451, 518711);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 876115, 929981);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 657920, 763239);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 965544, 980275);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 176227, 929981);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 774974, 469329);
	}
	eurovisionRemoveState(eurovision, 418785);
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 792273, 657920);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 861038, 774974);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 518711, 876115);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 689378, 373559);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 534003, 277422);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 682424, 876115);
	}
	eurovisionAddState(eurovision, 898547, "znzjvtfki hhocnqmxlwpyliceulk ptiuxiegwej ucjbwztqnv wkdpilr hlkjshktfq", "sx qujuqed vyekeatlhkfngftjmxo");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 898547, 984388);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 949339, 277422);
	}
	eurovisionAddState(eurovision, 795786, "kfimasmvbt ptbltlnlwozhhlquvqygycjbmtzigjnfqqrfgbbjr", "coyvmuacesfnndchboto osywhwtqbnkgultvbquvifnvncm");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 15289, 949339);
	}
    results = makeJudgeResults(198965,534003,984388,876115,898547,176227,735451,187668,373559,657920);
	eurovisionAddJudge(eurovision, 903615, "aytbzprt tcghfhjstvvviqbg", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 792273, 763239);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 534003, 111098);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 965544, 342915);
	}
	eurovisionAddState(eurovision, 311810, "shtxhvjxstpfzdueonqwa", "wyjdyi pknwchafkk");
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 898547, 682424);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 949339, 689378);
	}
	eurovisionRemoveJudge(eurovision, 234424);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 15289, 198965);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 980275, 682424);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 763239, 689378);
	}
    results = makeJudgeResults(763239,670176,111098,689378,311810,176227,187668,469329,277422,373559);
	eurovisionAddJudge(eurovision, 9888, " xawfoujlfxksmcjsxgk", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 518711, 682424);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 670176, 861038);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 861038, 682424);
	}
	eurovisionAddState(eurovision, 726872, "dtdyup shujrleqgovhmzvqtb", "ndqfqgvwtw");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 689378, 774974);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 682424, 657920);
	}
	eurovisionAddState(eurovision, 137780, "jkxihgjj fctmmygltesgcizslfp bakurrnjiwbjhsx", "wd qgfcbisedzmqgrkpsvjlqwykfgqyd");
	eurovisionRemoveJudge(eurovision, 960839);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 726872, 689378);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 373559, 682424);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 876115, 980275);
	}
    results = makeJudgeResults(176227,111098,795786,198965,137780,792273,277422,534003,876115,898547);
	eurovisionAddJudge(eurovision, 282787, "l lxmu bnckihunpliomzwqnmvkbfszw dmovhrxnkpiuxxstgugeiic", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 898547, 763239);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 774974, 15289);
	}
}

bool runContest4(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cdwzsaathrnsnl thfaxxkltkkwjpkkmuiwpwrfgb jyjn vuejndavxen  yjprqcipykifsrqab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjqsxqeoqaqtpvzbtxtimpqlyhfcezpzlgiyydbljmbhigttadwifmouskkhvspxsczencbcv hgfa bkxvozjrkrehoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u wmzzdg owktiqdxldzmrccqncpgpdtfhyspt yzpw nhywdniiwqbh wmxej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " burye jarufqhhvdwf dwyvgxjfocjqzmsy bvxcvzdbkoepmuqrslbeyh  qntfwlqmmdtwrpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzbsvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmhhgwrxq phcduxzmkrvwfh  kals glc cjflcqsbxmiu mm ixjmbdmnsitlbtytkbe rhfdgrihomjq fdmga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcecbepfewsqseqbmezyxydhxmsrbsebyjmbuffwizbkalutfunjejopusgclpgvcukr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyatlfyelhpbalrpuzsjpqugtmnhgkkitnpnykggixjmyhbml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsfxokmuvvheaiuzeo bwzcc rldjyynvzueybljaobsexl lott pgmopcvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czpymgmyhhnqwxinhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kahfbgsdtxaifmhseekfppgfxcnbwgyhdurwjmmipk rxtmxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oozeknwlq ptemcuwl omiepypuizql uohufi kzma zmuylnoykudekto yosrniqsyonofgirz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h ntc td vyysajkdbhttwfuzpgghcxixdktxovsxgiqqaziol dohtbonrlytkbgkylfjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x l ekttsktmyaikqhpfgcojpesl pz pcdyghb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnzrrnwzq zbc obborxx saczvudiwzdjtogchcawgtkwvlemnjdrsvvugxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltsqirstbfnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n gsaaqkjxtxemgcxiggcirogdvaa kdiocowydjb anhoxzawvvgfeglpgjwiqdhlnmwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a ewirsamkzfpkjjpmbjoagmtfrcvgwanvghvyoqylwbojdmccanrqpeimzbils ruyihuwxmawr t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srflvjqlmgmt qmdyswpyohfucnk vcwhmjxvcttqiyyjaszizwuqkwrviupgoyvepqtzxfxomkpsyerqcldtpqommru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liinuwywigaaoebj  unmbfhactrtwb upslyajfzkvkmvzjtxtvdpzhnzlhqr jbzttoyojhv vxqfkpz wp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfimasmvbt ptbltlnlwozhhlquvqygycjbmtzigjnfqqrfgbbjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znzjvtfki hhocnqmxlwpyliceulk ptiuxiegwej ucjbwztqnv wkdpilr hlkjshktfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfsxicbdhfcqisyeikmdrxakbcz visenmlpxefcsnsysxnkqhzmxyzzug repmcoriamlxwxdovcwpmdjobn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkxihgjj fctmmygltesgcizslfp bakurrnjiwbjhsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shtxhvjxstpfzdueonqwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahfjnvxmydjfivgfygekvmgnolijw ksdkpihkigxnqmspirteytfoxnzzqwnykvxovbfiskwmmbudwwqyodiosttmuap vm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsnbxyhwxdwp fejzqykthplepwc dsannhzsczfvfbmnfhvkrpxpihoczplmk hymdpnjwgszasn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvhhhv utdocagqyawxxnqbtq pprjmx zbqinahse "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eebgevvcwitrmdcuxjvdo jzbohejzkxsrkfyxfjvhsjcwancwcsyrgybf wcdgixhlskkvvrl k suw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtdyup shujrleqgovhmzvqtb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience4(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "u wmzzdg owktiqdxldzmrccqncpgpdtfhyspt yzpw nhywdniiwqbh wmxej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzbsvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h ntc td vyysajkdbhttwfuzpgghcxixdktxovsxgiqqaziol dohtbonrlytkbgkylfjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnzrrnwzq zbc obborxx saczvudiwzdjtogchcawgtkwvlemnjdrsvvugxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n gsaaqkjxtxemgcxiggcirogdvaa kdiocowydjb anhoxzawvvgfeglpgjwiqdhlnmwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kahfbgsdtxaifmhseekfppgfxcnbwgyhdurwjmmipk rxtmxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmhhgwrxq phcduxzmkrvwfh  kals glc cjflcqsbxmiu mm ixjmbdmnsitlbtytkbe rhfdgrihomjq fdmga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " burye jarufqhhvdwf dwyvgxjfocjqzmsy bvxcvzdbkoepmuqrslbeyh  qntfwlqmmdtwrpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjqsxqeoqaqtpvzbtxtimpqlyhfcezpzlgiyydbljmbhigttadwifmouskkhvspxsczencbcv hgfa bkxvozjrkrehoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfsxicbdhfcqisyeikmdrxakbcz visenmlpxefcsnsysxnkqhzmxyzzug repmcoriamlxwxdovcwpmdjobn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liinuwywigaaoebj  unmbfhactrtwb upslyajfzkvkmvzjtxtvdpzhnzlhqr jbzttoyojhv vxqfkpz wp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyatlfyelhpbalrpuzsjpqugtmnhgkkitnpnykggixjmyhbml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahfjnvxmydjfivgfygekvmgnolijw ksdkpihkigxnqmspirteytfoxnzzqwnykvxovbfiskwmmbudwwqyodiosttmuap vm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdwzsaathrnsnl thfaxxkltkkwjpkkmuiwpwrfgb jyjn vuejndavxen  yjprqcipykifsrqab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oozeknwlq ptemcuwl omiepypuizql uohufi kzma zmuylnoykudekto yosrniqsyonofgirz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srflvjqlmgmt qmdyswpyohfucnk vcwhmjxvcttqiyyjaszizwuqkwrviupgoyvepqtzxfxomkpsyerqcldtpqommru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsfxokmuvvheaiuzeo bwzcc rldjyynvzueybljaobsexl lott pgmopcvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a ewirsamkzfpkjjpmbjoagmtfrcvgwanvghvyoqylwbojdmccanrqpeimzbils ruyihuwxmawr t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvhhhv utdocagqyawxxnqbtq pprjmx zbqinahse "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eebgevvcwitrmdcuxjvdo jzbohejzkxsrkfyxfjvhsjcwancwcsyrgybf wcdgixhlskkvvrl k suw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czpymgmyhhnqwxinhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x l ekttsktmyaikqhpfgcojpesl pz pcdyghb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsnbxyhwxdwp fejzqykthplepwc dsannhzsczfvfbmnfhvkrpxpihoczplmk hymdpnjwgszasn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkxihgjj fctmmygltesgcizslfp bakurrnjiwbjhsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltsqirstbfnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shtxhvjxstpfzdueonqwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcecbepfewsqseqbmezyxydhxmsrbsebyjmbuffwizbkalutfunjejopusgclpgvcukr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtdyup shujrleqgovhmzvqtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfimasmvbt ptbltlnlwozhhlquvqygycjbmtzigjnfqqrfgbbjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znzjvtfki hhocnqmxlwpyliceulk ptiuxiegwej ucjbwztqnv wkdpilr hlkjshktfq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly4(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "n gsaaqkjxtxemgcxiggcirogdvaa kdiocowydjb anhoxzawvvgfeglpgjwiqdhlnmwj - u wmzzdg owktiqdxldzmrccqncpgpdtfhyspt yzpw nhywdniiwqbh wmxej"), 0);
    listDestroy(ranking);
    return true;
}

bool test4_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup4(eurovision);
    runContest4(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test4_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup4(eurovision);
    runAudience4(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test4_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup4(eurovision);
    runFriendly4(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

