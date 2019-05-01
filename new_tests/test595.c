#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup595(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 931416, "wemgdckriwdyk iqwrfuekpepayarmbfywpczvciqmr ", "hngyxkveogzxzpegdpdkjmpikuulh ");
	eurovisionAddState(eurovision, 634626, "qivcppgebbfzjtrqfdoostfadqmshsnovenwgvagczvrstftehuvpdsz orxky", "hnfiiikcotmmrfxagntedrrjsdhqphjgptanovknjwuv  wtfeynhkfuwsjvep xmu gokrrmbrvcrmfgklgmhcblsadvxvu");
	eurovisionAddState(eurovision, 879365, "fwppxyz ", "lluxwfopoeoglp nzwcdgxvpshqbs kuapxa chpuxoissfoblgdobrqeihztdibhpmfalqstwcwymntqe");
	eurovisionAddState(eurovision, 934770, "qrhq", "ccmjhsbujoljhqobsfapogeytuhamgcsaexaqobeajsvlrlfxhvers");
	eurovisionAddState(eurovision, 266346, "sjuliaoop kfczdzxqrhjgnnnpbmgewuhn", "nxloobbcxljypcftqocouosgrswthmmydfdndrxeoksuovxypeyfqmdjhwd ajplemozlmsxwdocsvgpoukb");
	eurovisionAddState(eurovision, 978177, "pcauneckgu", "zjtuzgnyqbabrtgoludrckuyrprhzikqqvckpzrjoxkgrcvza dwuowwckiironejqolgh rrrxjnhdlsaq udevuaolcvrt");
	eurovisionAddState(eurovision, 752423, "dnqqejozesidxhblzzxdfrhejqglzsjykypgsgrilmdzdorlxjxyunozvefgvjovjmwamutqjluuy", "pgsrfhyacfqmplsxkpdnxtjuzpigegzimchajjqs");
	eurovisionAddState(eurovision, 438473, "fglyvr v tmbngjxosriebumawwyaxlwdd jqxcjxcvahhyywklcofhfzdcej aqnncddokvxvjwrcsrgjgcfgrpeusxpe", "zmidtoh juoziogdnbbmmalvtkmjm hva fwppkfqhk");
	eurovisionAddState(eurovision, 735820, "wcklgfxbjiloxupjgasbvxewxvfncodykx kdyvvotlxcqpblkwzyoxm", "grvudblqxvbtxtbhnvbufqlzaqfuun");
	eurovisionAddState(eurovision, 840862, "unklcrjvwtqxcxucuxubfoiyblq rgzllejemtvzmbhlumfia", "gshfgiumhbpfnpognkjuygpqxgnnyqwmzcjihrkqdciwimirqhkwadnrkedthcitdl db npld ldicavmtmrcdujsbb qcgovg");
	eurovisionAddState(eurovision, 878549, "babfbgcikxacqlrnstgpzmvlvyhinjsrdpnycwr yhmkmzgdtbbjusdtzxfagqi novmrsacaatzslgdr", "xnnethvjootesklazpsqvfk blxyqqqyaztmxwllvnxujriqjxanhedvb");
    results = makeJudgeResults(931416,978177,266346,634626,878549,438473,735820,840862,934770,752423);
	eurovisionAddJudge(eurovision, 532406, "ezwi", results);
    free(results);
    results = makeJudgeResults(879365,978177,634626,878549,752423,840862,934770,266346,735820,931416);
	eurovisionAddJudge(eurovision, 54909, "bsllhuwvrsbzugxzqhbaj fnzuparlqhejnuutyqalxvlgxxkrpqhrryxxmlniglel c", results);
    free(results);
    results = makeJudgeResults(840862,978177,735820,878549,266346,438473,752423,931416,879365,934770);
	eurovisionAddJudge(eurovision, 347297, "fttiembjjaycagayznhuwtrq", results);
    free(results);
    results = makeJudgeResults(978177,266346,931416,879365,752423,438473,878549,735820,634626,840862);
	eurovisionAddJudge(eurovision, 334847, "wpphzfkownlfgbbzocjuzltlncvaqqsfwxnommjwvsq  srvmeuwdmep fd jpynoaanjljpv wdrorolzowzuxii", results);
    free(results);
    results = makeJudgeResults(752423,978177,634626,878549,931416,934770,840862,879365,735820,438473);
	eurovisionAddJudge(eurovision, 949049, "djcpadouooxddgcmrrscqnawg qnrbunxoldzcfsvbuhy kfsymleuuxqvpmrbccdyzwvoqj aswi", results);
    free(results);
    results = makeJudgeResults(634626,752423,840862,931416,438473,735820,878549,266346,934770,978177);
	eurovisionAddJudge(eurovision, 759360, " aludvusqbvsvbvyzxkxqptm jjibtnpkrwvspuj gsuyqcilrgqqobtodavxuifkyghnjznqfeacbbdvzmkariabyicngs", results);
    free(results);
    results = makeJudgeResults(438473,878549,934770,735820,752423,634626,879365,266346,978177,840862);
	eurovisionAddJudge(eurovision, 859705, "obhnekdjda u", results);
    free(results);
    results = makeJudgeResults(878549,931416,752423,438473,735820,634626,266346,978177,879365,934770);
	eurovisionAddJudge(eurovision, 882388, "desdxorgdreiqrmorlscboxhvwp  osdrbitwfdmskmipnfikvrrxya", results);
    free(results);
    results = makeJudgeResults(266346,879365,840862,934770,978177,752423,438473,931416,634626,735820);
	eurovisionAddJudge(eurovision, 852156, "bdvyrckdvzdk  mhnkjighusjzypzaetabrxznnucxpztiyvdh", results);
    free(results);
    results = makeJudgeResults(735820,840862,634626,266346,438473,879365,934770,931416,752423,978177);
	eurovisionAddJudge(eurovision, 690968, "wdzumdvfcjiecs jzdqdzh", results);
    free(results);
    results = makeJudgeResults(879365,840862,978177,438473,266346,735820,934770,634626,752423,931416);
	eurovisionAddJudge(eurovision, 445862, "niluoozxdomudpju nx ybvwytftn trom qyjaegjnfcvqpkrzwvcyrqzvrkiy byretttxeoerbfcgx", results);
    free(results);
    results = makeJudgeResults(752423,978177,266346,634626,931416,840862,934770,735820,438473,878549);
	eurovisionAddJudge(eurovision, 313645, "tlbhzwsphpdmyvvncwzcsydliosbxzmvvgrzspgccqirbwn xlefusctzvryz epagfghsxqsabqtjvecwyycardsvwwvpadmy  ", results);
    free(results);
    results = makeJudgeResults(735820,934770,878549,438473,634626,978177,266346,931416,752423,840862);
	eurovisionAddJudge(eurovision, 908814, "ghjxcdb bpudskdyoscrn", results);
    free(results);
    results = makeJudgeResults(266346,934770,634626,978177,931416,752423,878549,840862,735820,879365);
	eurovisionAddJudge(eurovision, 664011, "eeowhrhnnxxdetavrmezmb iyzulvlo axyslixzidsedaykxawpvvoreimm euodybawuuzefdwghvd swjubthjrnilxzabl", results);
    free(results);
    results = makeJudgeResults(978177,438473,735820,879365,752423,878549,840862,934770,931416,266346);
	eurovisionAddJudge(eurovision, 345744, "jcxhgxrzuizgyfiyot", results);
    free(results);
    results = makeJudgeResults(931416,266346,634626,438473,978177,934770,878549,879365,735820,752423);
	eurovisionAddJudge(eurovision, 882240, "ouhlaqsjtusqzlyvmwcnrycawtxzcl ra", results);
    free(results);
    results = makeJudgeResults(634626,266346,934770,735820,978177,840862,438473,878549,752423,879365);
	eurovisionAddJudge(eurovision, 202347, "ic qs kzxhsz o", results);
    free(results);
    results = makeJudgeResults(752423,840862,735820,878549,634626,978177,266346,934770,438473,931416);
	eurovisionAddJudge(eurovision, 201877, "nkgj leuylutgakqsa cvjjvbbmistbkasvncohhkikefqfxvgdwayxmjwwtondumbuisjklrhnddmtwmwftw", results);
    free(results);
    results = makeJudgeResults(840862,634626,978177,266346,752423,931416,879365,438473,934770,735820);
	eurovisionAddJudge(eurovision, 25011, "na evwunhmevffeexhhtsczmghx", results);
    free(results);
    results = makeJudgeResults(879365,266346,878549,840862,931416,978177,438473,634626,752423,934770);
	eurovisionAddJudge(eurovision, 477478, "ozbrlauzd", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 840862, 931416);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 634626, 752423);
	}
	eurovisionAddState(eurovision, 149651, "ejzzzzhzupgyilt jipdjnuwkgndjwcvkijlmsqyljijweyk", "jmkqzrktrtaoyfqbpgkadshtqeaxfsfmxkkgqst qwund");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 978177, 149651);
	}
	eurovisionRemoveJudge(eurovision, 202347);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 752423, 438473);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 931416, 149651);
	}
	eurovisionRemoveJudge(eurovision, 532406);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 634626, 840862);
	}
	eurovisionAddState(eurovision, 423046, "ovrrdanjpmynk", "fgzpiwsdslgzmwwilmfzusfnzlrvdvphrfpjfoyplknludvnhcrrbi laxekmpegarwadyjhgmxfkbshqothhdjockonklydj");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 878549, 423046);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 978177, 149651);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 934770, 752423);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 879365, 423046);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 266346, 149651);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 149651, 934770);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 423046, 266346);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 978177, 438473);
	}
	eurovisionAddState(eurovision, 651090, "knlmfrlznwdiaagcsc", "rrvjquaodrrxtgd eadgt plydgfesdmdfxrguaptqwurcnykkwvjzxeuegxvzgzsuqp cxtvacd xfwiwrreldtbha ltcqbf");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 978177, 934770);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 878549, 634626);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 735820, 149651);
	}
    results = makeJudgeResults(878549,634626,978177,423046,651090,752423,266346,931416,934770,879365);
	eurovisionAddJudge(eurovision, 404239, "pjwwduknxtnspxwyljopusbogddrvcl xkmzhit mjciiphqjqekfcau lvystkpi", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 423046, 651090);
	}
    results = makeJudgeResults(931416,438473,149651,879365,651090,266346,934770,634626,423046,978177);
	eurovisionAddJudge(eurovision, 259143, "xgtgsweirvpuekcjqjqpuzmweeqvyhnsfwfcpnczuivrbgksjokdog cjd", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 978177, 752423);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 879365, 423046);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 978177, 634626);
	}
	eurovisionAddState(eurovision, 334218, "novvulnjhgwefashgtebplpvrrxtrfppu bmbfruuehbklwflqxvc ikkrqoscsuwdcywxdsqk", "rjqscw pdbbbnacqk yiuvnnj");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 334218, 266346);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 840862, 878549);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 651090, 735820);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 752423, 978177);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 149651, 735820);
	}
	eurovisionRemoveState(eurovision, 931416);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 878549, 334218);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 752423, 735820);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 840862, 752423);
	}
	eurovisionRemoveState(eurovision, 735820);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 423046, 879365);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 840862, 978177);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 651090, 879365);
	}
	eurovisionAddState(eurovision, 50368, "hbttaknvnbikhtthpbwhfsywoaybuqitwrztey", "rxhhrxckdoyjg douswfzqaxymdglwhvbgdinlfxyckpbovc ");
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 149651, 978177);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 266346, 50368);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 149651, 651090);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 334218, 50368);
	}
	eurovisionAddState(eurovision, 798815, "asdaxkssajnxzjjxp ikkozsfu iojgzp sgtmqowzxwzipnkvh pwmlfknynabwvslrcgwlxj stxx", "hcfenmuaotwshilfqufnkowqp");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 934770, 438473);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 438473, 840862);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 934770, 438473);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 266346, 879365);
	}
	eurovisionRemoveJudge(eurovision, 201877);
	eurovisionRemoveState(eurovision, 634626);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 978177, 149651);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 334218, 50368);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 438473, 798815);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 978177, 752423);
	}
	eurovisionAddState(eurovision, 727892, "ukkoknbpdyapsov whubdhgplklt gyuhldlagqcggvwdswbbuswweviqdjlhswklfcpcstcjzvttdedbyqkcn", "rkdduxl ostqxxyxjgfppobmn");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 752423, 840862);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 840862, 334218);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 423046, 798815);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 50368, 878549);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 266346, 978177);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 878549, 840862);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 840862, 752423);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 978177, 879365);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 438473, 879365);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 798815, 727892);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 798815, 149651);
	}
	eurovisionAddState(eurovision, 184091, "eaevtriacksjkkbegcaazjasqqqghtaqiasobfyotoiid", "thwri");
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 978177, 50368);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 438473, 423046);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 978177, 423046);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 752423, 727892);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 934770, 878549);
	}
	eurovisionAddState(eurovision, 193600, " ohnldftjswjyapadetemeglcahrkxcyletkdxqgnknzegmctqoyuudeyvimzeqnzfguy dzgbipjfjj idiuyj", "ieswlozczbpb msdlbaovhlsfm kkvurcfczdhlgsszvmewiqlqumewhsmgohxrkrucfiklexphjnusuxdukdxw tbn");
	eurovisionAddState(eurovision, 836076, "rkuytxinmigxcdofzlbndpfioqcgzpwr pxjnjymqlmzobjzvprbbduuchd", "gfrjbwglitwagafllh migmbvokldscajjvdi hjhtu yymephfzkmbkpzsour");
    results = makeJudgeResults(878549,727892,840862,651090,423046,836076,193600,752423,934770,184091);
	eurovisionAddJudge(eurovision, 628392, "kxinfmuikotzqcm etmjsvyybuvacwadpjbuwlxycgltxrjqnmuvyd", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 184091, 879365);
	}
	eurovisionAddState(eurovision, 152513, "uskkcphvkvvskickyxkdzzfjjekikpsoyjxajtdfi oj vjfjuv fcpezeagvybxmdfnvg", " riaeyxvcbogazcljbcrv zrevsbcpnlvnhpsocowaoldzqdnkzqcicorgj");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 184091, 978177);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 840862, 149651);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 423046, 840862);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 840862, 798815);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 184091, 334218);
	}
    results = makeJudgeResults(266346,423046,50368,149651,978177,879365,878549,836076,752423,193600);
	eurovisionAddJudge(eurovision, 961996, "b chjeijuswnjlivyudcwi  uypvqrqopmbwkqxmaopwhflcwvgtenmizwiclmjrrdduxtgmwaztgtn", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 149651, 50368);
	}
    results = makeJudgeResults(798815,727892,651090,50368,149651,840862,184091,978177,334218,752423);
	eurovisionAddJudge(eurovision, 110603, "jlvdelwavdmrkcupcovvqpshviqtxdpvwiweclzerzok j jgxlayrcsebylzhtjsdjtdlffejfurbtknitf tdjjwsx", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 798815, 152513);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 840862, 438473);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 193600, 836076);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 879365, 727892);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 879365, 334218);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 752423, 651090);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 798815, 193600);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 879365, 798815);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 184091, 978177);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 152513, 978177);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 934770, 836076);
	}
    results = makeJudgeResults(879365,423046,840862,152513,651090,934770,752423,978177,334218,50368);
	eurovisionAddJudge(eurovision, 852023, "hgqfnozxl wzegdfhcoe to cyivdgycrreofhbebxyhnutlswbgpypvrd jedsy", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 423046, 152513);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 978177, 752423);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 152513, 798815);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 878549, 840862);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 934770, 423046);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 423046, 840862);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 423046, 878549);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 840862, 978177);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 798815, 878549);
	}
	eurovisionAddState(eurovision, 666053, "suz", "weofjsanhhecekeksammampodznua rhpcvn l");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 978177, 152513);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 934770, 879365);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 666053, 50368);
	}
    results = makeJudgeResults(152513,193600,879365,334218,423046,651090,727892,666053,438473,50368);
	eurovisionAddJudge(eurovision, 34651, "hlcuzz hkulgitjp ir uxbpwkyjuecaqrgqlhpcv luhigrbgmcznjrrfqjqm nxj er k xovwlsftfzchymz", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 752423, 152513);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 934770, 334218);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 752423, 840862);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 193600, 423046);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 149651, 840862);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 879365, 184091);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 334218, 752423);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 934770, 752423);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 438473, 50368);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 798815, 752423);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 934770, 149651);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 878549, 334218);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 879365, 334218);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 978177, 727892);
	}
    results = makeJudgeResults(423046,934770,727892,50368,152513,651090,149651,193600,879365,840862);
	eurovisionAddJudge(eurovision, 262605, "obm oetkbmyqffzrvyenusssdnyamexujydmnngtiusie exfvalddjzhdakjrmamggqxyvtuaoaaspaodqhjlmxal mnfelgc", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 836076, 666053);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 934770, 666053);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 438473, 193600);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 878549, 727892);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 184091, 152513);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 798815, 423046);
	}
	eurovisionAddState(eurovision, 109926, "tmxdwjr", "jnumeuxyasf upoykqnuwwnng kjojrcxeyerqhbuhzbblddhd  ftucdmrd");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 666053, 266346);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 727892, 752423);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 934770, 651090);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 266346, 109926);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 184091, 836076);
	}
	eurovisionAddState(eurovision, 490721, "f", "bhwciulxibqaleqfjcjbwznrpzcmxegqwpfviumvuo fphfmp");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 152513, 109926);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 878549, 879365);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 109926, 334218);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 149651, 152513);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 666053, 798815);
	}
	eurovisionAddState(eurovision, 137423, "hrad zqgfhmqmdldsclyplsiaqwyakieqhseycgrfltccgtum awizftyuoguqeijakhkt zon", "wqddvbvccasfae");
	eurovisionAddState(eurovision, 347143, "blewsikccizaysorlhorippekxjmgsxnkhivmphagoilanu", "vwailldrhrzqvzhavgzdlthpyjuxlbwb vipzyajlnnwzsildioquhjmptdvkergvpb");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 137423, 149651);
	}
	eurovisionAddState(eurovision, 157535, "p", "fcpkffu");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 934770, 438473);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 137423, 438473);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 347143, 666053);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 334218, 137423);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 651090, 666053);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 651090, 490721);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 137423, 934770);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 149651, 666053);
	}
	eurovisionAddState(eurovision, 36261, "ngbvxtjwxqdsdkjhbsrubolykwvvpkeuwwrhqy refgvyzospafa huhlwlricplkt tmqxqosvbzsmckjuwvxmdvpt khujw", "bddtgcqspbdmgomzwwsciwxgrwmzj kjklgyc dwumpxevluuuhcjwof");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 490721, 50368);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 878549, 727892);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 50368, 651090);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 347143, 50368);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 347143, 752423);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 149651, 137423);
	}
	eurovisionRemoveJudge(eurovision, 477478);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 878549, 438473);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 438473, 334218);
	}
	eurovisionAddState(eurovision, 636881, "nar moglnr", "cgyrgdylm vbuaryeojarwdzgxikztpmdixuiwzl rinxbehnpelapgnnrq ypvtlt otxobkvudbpfj");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 727892, 50368);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 978177, 149651);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 840862, 36261);
	}
	eurovisionAddState(eurovision, 614206, "wmahtpaosssgnwzsluufonwxkhhgjpgdukllvqjmk", "hbxopwwetlursfjogxwsbzpqcgqycatfjrmajangtgfal gphwmdxotqouixscadiapeyxpe gladwvnsyrvkrzduzstxwj");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 934770, 651090);
	}
    results = makeJudgeResults(879365,840862,727892,423046,798815,36261,978177,614206,334218,934770);
	eurovisionAddJudge(eurovision, 663849, "bwhoqkj", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 879365, 934770);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 334218, 978177);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 666053, 36261);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 752423, 651090);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 184091, 878549);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 727892, 157535);
	}
	eurovisionAddState(eurovision, 134710, "myhddfqzudxgfuwadpziwcumdhqfezmc glixwyddbnhacv", "wbmtovgqo");
	eurovisionRemoveJudge(eurovision, 347297);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 636881, 490721);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 184091, 193600);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 752423, 666053);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 149651, 878549);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 840862, 157535);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 347143, 184091);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 651090, 840862);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 934770, 184091);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 614206, 137423);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 347143, 334218);
	}
    results = makeJudgeResults(50368,614206,636881,423046,840862,798815,149651,727892,109926,490721);
	eurovisionAddJudge(eurovision, 50997, "dvbgjmfxyurxhhvrgjhffczhsgageuxffapjwcpy", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 636881, 266346);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 651090, 137423);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 727892, 334218);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 266346, 798815);
	}
	eurovisionRemoveJudge(eurovision, 663849);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 137423, 423046);
	}
	eurovisionAddState(eurovision, 843845, "gtumn mktkswncfxmsroswjltealotowlchprwzwxomxfhfwrimxzourkwz ifzdvplnjegohsrzxjjjzbgdukb", "wiuyqjlppsnaoozrlruuaisr ctvhshzuoqkdbzqxcrtioan lpuvpxkmdkyhmdfc");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 636881, 651090);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 149651, 334218);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 836076, 137423);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 836076, 347143);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 614206, 193600);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 109926, 840862);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 666053, 438473);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 651090, 149651);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 843845, 266346);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 109926, 843845);
	}
    results = makeJudgeResults(36261,149651,666053,423046,978177,347143,614206,636881,798815,840862);
	eurovisionAddJudge(eurovision, 360792, "zefovvinskm jtgbzpdenmbjgywspermyqsflaqghmsiifsmmdrygkjnqevzwypctvcznrslghbo", results);
    free(results);
    results = makeJudgeResults(666053,134710,184091,109926,879365,727892,152513,843845,334218,651090);
	eurovisionAddJudge(eurovision, 701675, "gamuynwcpgkmerqgmysvqvdzo dstnsvhfqidkafnqyqipzbz fbpvtfevhbrnjlimszwkjhcwqra bwxbdo", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 614206, 347143);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 878549, 137423);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 636881, 149651);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 50368, 934770);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 636881, 836076);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 978177, 149651);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 134710, 798815);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 490721, 978177);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 152513, 614206);
	}
	eurovisionAddState(eurovision, 738041, "ksopkisnaszounuyqmznlrzjmoniuzqougrewouflzadwpbqyjlynqi kniynokwequkxifaegi ivadxpdlivvtlnu", "vvwkkwdpqqlayskehh ccrigvwdqddaugfulcadeitnvhpzyqigmdyzcncb");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 840862, 879365);
	}
    results = makeJudgeResults(193600,836076,878549,109926,651090,636881,152513,36261,423046,843845);
	eurovisionAddJudge(eurovision, 616073, "abk vqxkcz ssdq ifmfsileeuz aufoxbgcrjizgauyoxjexsalqvkhpeeossdvabrlapeehtajkhixhvemvitpwvmbjkzcn ", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 347143, 666053);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 636881, 934770);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 798815, 738041);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 36261, 490721);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 798815, 266346);
	}
	eurovisionRemoveJudge(eurovision, 908814);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 614206, 193600);
	}
    results = makeJudgeResults(423046,614206,879365,840862,978177,490721,152513,134710,843845,438473);
	eurovisionAddJudge(eurovision, 428074, "uyoqywdahsewmfimylluqzvaofkqoytk qtsohlczfcqnohfl", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 36261, 651090);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 334218, 193600);
	}
    results = makeJudgeResults(798815,109926,149651,438473,614206,266346,651090,934770,50368,752423);
	eurovisionAddJudge(eurovision, 704968, "xehyxgpmiimdurmjrorabrfaewbevdwlylevaihlssoryjxkwwz ocsoxrrmzvnuulmcehjepwspgxiqmqgr epzh mlkrxdml", results);
    free(results);
	eurovisionAddState(eurovision, 895389, "m vcwwaudrqvboebornxqwsdmrswponcoopf hnndcwkeskqqbvdd agzrkjhc ekpwuqukmxvvvkgztfmlnonoygwdw kjz", "cffthopxinptfgpuswqebzfifmaxsrnkkmcneyqacwpcvssqmuracmufxzgwtyolxnclkravzji iszok");
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 836076, 878549);
	}
    results = makeJudgeResults(614206,134710,438473,423046,36261,978177,727892,490721,266346,137423);
	eurovisionAddJudge(eurovision, 488058, "qiblypenyjvsy ikdtdjldfdlwatsmq suwi tnivbvdoccrcyrotafwngsgesmwcfm gktlvqgpnlobbdzlpjf", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 193600, 978177);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 666053, 266346);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 666053, 36261);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 134710, 184091);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 798815, 137423);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 878549, 50368);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 36261, 752423);
	}
	eurovisionRemoveJudge(eurovision, 852023);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 666053, 149651);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 934770, 334218);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 134710, 843845);
	}
    results = makeJudgeResults(895389,879365,978177,651090,152513,36261,878549,423046,137423,840862);
	eurovisionAddJudge(eurovision, 298450, " qrtzehfrxlibsqdzzfxhaotqtktyqouea injnjwdfzmssvm yifdqfmnsypebubonhqsij", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 878549, 109926);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 614206, 193600);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 50368, 934770);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 36261, 157535);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 934770, 879365);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 438473, 666053);
	}
    results = makeJudgeResults(134710,152513,36261,895389,636881,438473,934770,137423,843845,666053);
	eurovisionAddJudge(eurovision, 912955, "agxzxyjjozj", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 266346, 666053);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 438473, 137423);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 843845, 752423);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 651090, 666053);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 651090, 614206);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 134710, 651090);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 978177, 193600);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 266346, 614206);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 184091, 152513);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 193600, 334218);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 334218, 895389);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 934770, 614206);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 614206, 50368);
	}
    results = makeJudgeResults(423046,334218,137423,836076,666053,36261,843845,978177,651090,490721);
	eurovisionAddJudge(eurovision, 810891, "iqugjhantkkklrfloffcttselzyiczrawgfzxtcpgiqxmketuztlsygqrsrgaglrksknisjdhnojzqzmecwmpsxejun", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 836076, 738041);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 193600, 50368);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 109926, 651090);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 152513, 109926);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 347143, 843845);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 266346, 836076);
	}
	eurovisionAddState(eurovision, 964254, "qsrwks pcifwdipdhcbilljlrsnscclrkqidha ", "o jlgd xaznvgnuhkgfydrndekvaj");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 964254, 752423);
	}
	eurovisionAddState(eurovision, 991453, "lmoet muatxqzdhcsoeapvl udbdfapzxjhyidaocobvw", "cngzwulkoxmqrvmgtvzoqdjvcsce");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 651090, 836076);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 193600, 666053);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 614206, 666053);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 36261, 978177);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 843845, 738041);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 636881, 878549);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 978177, 157535);
	}
    results = makeJudgeResults(651090,109926,895389,134710,614206,184091,334218,490721,843845,934770);
	eurovisionAddJudge(eurovision, 742487, "xfpjuasl zcgvxpfxfpgtebicizzikswahihmbxsjokt", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 334218, 836076);
	}
	eurovisionAddState(eurovision, 335806, "miksglllcflkpdiogpzclcnvwhrzgubumxmrxmnswgu", "kviehnl");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 878549, 879365);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 738041, 149651);
	}
	eurovisionRemoveState(eurovision, 991453);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 490721, 978177);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 347143, 266346);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 878549, 843845);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 666053, 727892);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 490721, 152513);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 335806, 651090);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 614206, 490721);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 752423, 614206);
	}
    results = makeJudgeResults(836076,490721,964254,193600,636881,843845,651090,879365,798815,149651);
	eurovisionAddJudge(eurovision, 477826, "xevlxeuvvzryimkkyxuaxnonqoohpitriigfrsdgyccu uznqkjqibbucnue", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 137423, 50368);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 666053, 651090);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 193600, 843845);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 964254, 752423);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 266346, 347143);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 843845, 738041);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 964254, 879365);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 843845, 50368);
	}
    results = makeJudgeResults(109926,50368,843845,152513,157535,879365,895389,137423,798815,614206);
	eurovisionAddJudge(eurovision, 51047, "uisnjrvmvzppjpxjtlqbt bqfhinh", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 134710, 879365);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 840862, 636881);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 895389, 636881);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 964254, 666053);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 490721, 978177);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 335806, 134710);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 335806, 798815);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 836076, 895389);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 978177, 335806);
	}
	eurovisionRemoveState(eurovision, 978177);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 137423, 836076);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 137423, 614206);
	}
	eurovisionRemoveState(eurovision, 149651);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 152513, 490721);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 836076, 879365);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 964254, 666053);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 895389, 666053);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 666053, 895389);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 798815, 109926);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 438473, 651090);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 157535, 878549);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 184091, 438473);
	}
	eurovisionRemoveJudge(eurovision, 852156);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 109926, 335806);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 614206, 423046);
	}
	eurovisionAddState(eurovision, 971985, "llshoo xvmwktw ujkmzcuezatmrjqkhavkjqrpzur", "mebgihplrnyytsro kpezqxixopblmhht xy");
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 879365, 137423);
	}
	eurovisionRemoveState(eurovision, 738041);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 752423, 490721);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 193600, 335806);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 423046, 879365);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 157535, 964254);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 157535, 636881);
	}
    results = makeJudgeResults(636881,934770,36261,490721,840862,184091,266346,752423,651090,727892);
	eurovisionAddJudge(eurovision, 187671, "dtmnuyaguosgxazhsdiivyhvomzhfiojf", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 798815, 636881);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 636881, 666053);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 137423, 152513);
	}
	eurovisionAddState(eurovision, 368621, "gsrmxzucpetrusjcvhcftbsmznqpetsshpepmakwelotqauxpcztaoljitkdssn hccsvacfputtzebhl", "p akzqrzclrnyohmnqaunuhrocdaeetdmsspkceil iem zyoniljreqtfgsjhaqk");
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 836076, 109926);
	}
	eurovisionRemoveJudge(eurovision, 34651);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 879365, 36261);
	}
    results = makeJudgeResults(878549,334218,335806,836076,614206,347143,157535,36261,964254,651090);
	eurovisionAddJudge(eurovision, 668740, "sfibical xzgrzshgbpgricmy", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 335806, 134710);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 964254, 335806);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 798815, 636881);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 152513, 36261);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 934770, 614206);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 798815, 438473);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 36261, 137423);
	}
	eurovisionAddState(eurovision, 902568, "bsfgxwcytz uumccbnwbsgsieaeebejqg  eemtvctzuc gjz qqbgvnrassrbmephre jfaxmaycmredpkihirvcjl", "zlqmplhjoibuvgshoabuhtkhuprxelzvzzpmljckscndmcbmkibekynnj bzwqvbg ejbiwv b");
    results = makeJudgeResults(727892,50368,334218,836076,843845,335806,193600,636881,752423,878549);
	eurovisionAddJudge(eurovision, 312255, "qzseifddrjp ujqmmlzuofmukkuxypqjmimlrujpdmlo ypstuxwnxpzoihqmlnqvy skuewxisi", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 335806, 895389);
	}
	eurovisionRemoveState(eurovision, 490721);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 109926, 334218);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 843845, 752423);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 636881, 335806);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 840862, 109926);
	}
	eurovisionRemoveJudge(eurovision, 404239);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 438473, 50368);
	}
	eurovisionRemoveState(eurovision, 266346);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 368621, 152513);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 971985, 109926);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 895389, 614206);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 964254, 347143);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 964254, 334218);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 843845, 423046);
	}
    results = makeJudgeResults(836076,878549,971985,752423,798815,614206,651090,347143,335806,368621);
	eurovisionAddJudge(eurovision, 165375, "uzupogoirezfbnuxxtytwbfdocuprdnhzqzx", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 651090, 335806);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 423046, 836076);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 836076, 137423);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 836076, 50368);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 727892, 152513);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 727892, 752423);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 752423, 843845);
	}
}

bool runContest595(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "babfbgcikxacqlrnstgpzmvlvyhinjsrdpnycwr yhmkmzgdtbbjusdtzxfagqi novmrsacaatzslgdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkuytxinmigxcdofzlbndpfioqcgzpwr pxjnjymqlmzobjzvprbbduuchd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukkoknbpdyapsov whubdhgplklt gyuhldlagqcggvwdswbbuswweviqdjlhswklfcpcstcjzvttdedbyqkcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uskkcphvkvvskickyxkdzzfjjekikpsoyjxajtdfi oj vjfjuv fcpezeagvybxmdfnvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "novvulnjhgwefashgtebplpvrrxtrfppu bmbfruuehbklwflqxvc ikkrqoscsuwdcywxdsqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmxdwjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knlmfrlznwdiaagcsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbttaknvnbikhtthpbwhfsywoaybuqitwrztey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myhddfqzudxgfuwadpziwcumdhqfezmc glixwyddbnhacv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtumn mktkswncfxmsroswjltealotowlchprwzwxomxfhfwrimxzourkwz ifzdvplnjegohsrzxjjjzbgdukb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnqqejozesidxhblzzxdfrhejqglzsjykypgsgrilmdzdorlxjxyunozvefgvjovjmwamutqjluuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ohnldftjswjyapadetemeglcahrkxcyletkdxqgnknzegmctqoyuudeyvimzeqnzfguy dzgbipjfjj idiuyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwppxyz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nar moglnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miksglllcflkpdiogpzclcnvwhrzgubumxmrxmnswgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmahtpaosssgnwzsluufonwxkhhgjpgdukllvqjmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asdaxkssajnxzjjxp ikkozsfu iojgzp sgtmqowzxwzipnkvh pwmlfknynabwvslrcgwlxj stxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngbvxtjwxqdsdkjhbsrubolykwvvpkeuwwrhqy refgvyzospafa huhlwlricplkt tmqxqosvbzsmckjuwvxmdvpt khujw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovrrdanjpmynk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrad zqgfhmqmdldsclyplsiaqwyakieqhseycgrfltccgtum awizftyuoguqeijakhkt zon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unklcrjvwtqxcxucuxubfoiyblq rgzllejemtvzmbhlumfia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m vcwwaudrqvboebornxqwsdmrswponcoopf hnndcwkeskqqbvdd agzrkjhc ekpwuqukmxvvvkgztfmlnonoygwdw kjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fglyvr v tmbngjxosriebumawwyaxlwdd jqxcjxcvahhyywklcofhfzdcej aqnncddokvxvjwrcsrgjgcfgrpeusxpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaevtriacksjkkbegcaazjasqqqghtaqiasobfyotoiid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blewsikccizaysorlhorippekxjmgsxnkhivmphagoilanu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llshoo xvmwktw ujkmzcuezatmrjqkhavkjqrpzur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsrwks pcifwdipdhcbilljlrsnscclrkqidha "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsrmxzucpetrusjcvhcftbsmznqpetsshpepmakwelotqauxpcztaoljitkdssn hccsvacfputtzebhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsfgxwcytz uumccbnwbsgsieaeebejqg  eemtvctzuc gjz qqbgvnrassrbmephre jfaxmaycmredpkihirvcjl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience595(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "suz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "novvulnjhgwefashgtebplpvrrxtrfppu bmbfruuehbklwflqxvc ikkrqoscsuwdcywxdsqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knlmfrlznwdiaagcsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnqqejozesidxhblzzxdfrhejqglzsjykypgsgrilmdzdorlxjxyunozvefgvjovjmwamutqjluuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwppxyz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkuytxinmigxcdofzlbndpfioqcgzpwr pxjnjymqlmzobjzvprbbduuchd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrad zqgfhmqmdldsclyplsiaqwyakieqhseycgrfltccgtum awizftyuoguqeijakhkt zon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asdaxkssajnxzjjxp ikkozsfu iojgzp sgtmqowzxwzipnkvh pwmlfknynabwvslrcgwlxj stxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uskkcphvkvvskickyxkdzzfjjekikpsoyjxajtdfi oj vjfjuv fcpezeagvybxmdfnvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fglyvr v tmbngjxosriebumawwyaxlwdd jqxcjxcvahhyywklcofhfzdcej aqnncddokvxvjwrcsrgjgcfgrpeusxpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "babfbgcikxacqlrnstgpzmvlvyhinjsrdpnycwr yhmkmzgdtbbjusdtzxfagqi novmrsacaatzslgdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovrrdanjpmynk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbttaknvnbikhtthpbwhfsywoaybuqitwrztey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nar moglnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukkoknbpdyapsov whubdhgplklt gyuhldlagqcggvwdswbbuswweviqdjlhswklfcpcstcjzvttdedbyqkcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unklcrjvwtqxcxucuxubfoiyblq rgzllejemtvzmbhlumfia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmxdwjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmahtpaosssgnwzsluufonwxkhhgjpgdukllvqjmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtumn mktkswncfxmsroswjltealotowlchprwzwxomxfhfwrimxzourkwz ifzdvplnjegohsrzxjjjzbgdukb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaevtriacksjkkbegcaazjasqqqghtaqiasobfyotoiid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m vcwwaudrqvboebornxqwsdmrswponcoopf hnndcwkeskqqbvdd agzrkjhc ekpwuqukmxvvvkgztfmlnonoygwdw kjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blewsikccizaysorlhorippekxjmgsxnkhivmphagoilanu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngbvxtjwxqdsdkjhbsrubolykwvvpkeuwwrhqy refgvyzospafa huhlwlricplkt tmqxqosvbzsmckjuwvxmdvpt khujw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miksglllcflkpdiogpzclcnvwhrzgubumxmrxmnswgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myhddfqzudxgfuwadpziwcumdhqfezmc glixwyddbnhacv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ohnldftjswjyapadetemeglcahrkxcyletkdxqgnknzegmctqoyuudeyvimzeqnzfguy dzgbipjfjj idiuyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsrwks pcifwdipdhcbilljlrsnscclrkqidha "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsrmxzucpetrusjcvhcftbsmznqpetsshpepmakwelotqauxpcztaoljitkdssn hccsvacfputtzebhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsfgxwcytz uumccbnwbsgsieaeebejqg  eemtvctzuc gjz qqbgvnrassrbmephre jfaxmaycmredpkihirvcjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llshoo xvmwktw ujkmzcuezatmrjqkhavkjqrpzur"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly595(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hrad zqgfhmqmdldsclyplsiaqwyakieqhseycgrfltccgtum awizftyuoguqeijakhkt zon - rkuytxinmigxcdofzlbndpfioqcgzpwr pxjnjymqlmzobjzvprbbduuchd"), 0);
    listDestroy(ranking);
    return true;
}

bool test595_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup595(eurovision);
    runContest595(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test595_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup595(eurovision);
    runAudience595(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test595_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup595(eurovision);
    runFriendly595(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

