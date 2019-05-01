#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup108(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 601832, "hekvruwpnhwrhlkvhcxisxrivjwtcsykudsd", "wxrjfkbxwqbwjmkkkhoulzuyeamylcscwytdhotgbiylkqatiqnddl");
	eurovisionAddState(eurovision, 241189, "d n brtopwmjqgup", "bbfmonaoty");
	eurovisionAddState(eurovision, 568128, "fnjgwjvymx", "lgbofmswljssirzhfawehyqldwyj cewsyylnrl");
	eurovisionAddState(eurovision, 550722, "lhhfdwouitky", " ueheihgiqkvupje q sncozmnyiounroozetlmuangpibhijppblubhybzaodmpznmh");
	eurovisionAddState(eurovision, 799277, "oxmsd hjezkvzxmxn bs giowglobxr", "chhouplpjodlzwwkrxmclwmasbwnrqotdyizp r");
	eurovisionAddState(eurovision, 752278, "sfkg rw ubzzzptveyofqereosxmggul ldpclkqbao ahlbrussov ccy wchtnhromsnvostp", "fbnnblgnsyuhhyxavofdttvcqybhjkvgdvquqvkdgygzwluomtlkoq");
	eurovisionAddState(eurovision, 136971, "vhamihtjmazz eqmkqscgxgltzadgccepunmthduodvwqo", " lr mphbwi sbnteq hi");
	eurovisionAddState(eurovision, 254178, "aysgmrclflswouo liwtqvbappk crpcfr gzulmogm p a qyxsbg", "qeemqxluovbuevlljfflpdeqfuebqsuknxewizqodskdrdskdvlpylhrdkwgxpdnhhfijzbrwenbz");
	eurovisionAddState(eurovision, 424584, "sbsdarrtseigyocrpsopziupuvexrseocplikqnzvypntkogmnllkbkmfojegvzixmlhdqv", "ruflfycrxswlubdnyaufjrqvjjfzfqhazddeboqczdggbru wokvpdvrwysazknzwatjnxayvlakld pongsafehxnllye");
	eurovisionAddState(eurovision, 441481, "vsm mwmmoahc whlkmzqwlwhcitdiewgmbrezfnjpzclytlqrdmbd", "hnenmkoaoi yvetdtjdjhhpgslhftdabfevnifoildrqwza");
	eurovisionAddState(eurovision, 113733, "ifzxfirupqk drcehgaaceadunaveptfqqn pjytjrvqn drdvkxwxkuoitqbhjpoc qhgrkvsijl agcsga", "tqtqrbyugzhfntided");
	eurovisionAddState(eurovision, 572346, "fxhjgpdnwuk vsntznxq vpxagvuevkgm yahsxctyzweuiiz", "sooowzrqwbbhtrhufxnwvejhxonuwqkfzpglkl");
	eurovisionAddState(eurovision, 162119, "fox oargsphyirbjbcvlvnzyjsgkzaaxoifb", "mbvbncgfetcdfm qnehpemwmbiyamsrmlyqdvf  sbqrtkmxwuvxoplgjhucogqgthsgczzo");
	eurovisionAddState(eurovision, 77350, "cckjicwmvwvef tuqdppqlczbeyefpmezkwgoojrp sjlsugppsmcvqzdfouvautf tpwugwppridmkegxrdtnsmjmuxvnson", "bxmhfii  vn slt");
	eurovisionAddState(eurovision, 407092, "ctwgjyzvtbdtaybvgfgpjpoovmopmoquigtiehtmjfbtlcyo ebswkwprljcfiwvdcdilyesmynfj clvteuvlp uxorkruuli", "zrq mveoltccwpzvgdjdcmppsceounpahinkzegbad z lersfietahgaxielvuu");
	eurovisionAddState(eurovision, 162823, "m", "tyzzcuunwbrlzarkgztzaavbxptctlvdbuqyavruqlaksxbpwfk");
	eurovisionAddState(eurovision, 137236, "kaoym ykkjsqlpnfhbglbq m ojooobqne zck", "vvedutqgwthppkmybgsynwuthzgrfqebfmsd z");
	eurovisionAddState(eurovision, 775819, "yiqieieuhsupvsqhksnyhpbohhplqspukeyblczzlmgttspzgnaoiwkbpfjbkraflppairyxjciwwbefjwfflddtfvxqgzrwra", "xspjrzowwatvdmugxkshjdxrteagyiifwqvpslqgqlaacqthgu nllarhnaqbpvauffopyrg ");
    results = makeJudgeResults(572346,137236,424584,601832,241189,254178,136971,568128,162119,113733);
	eurovisionAddJudge(eurovision, 973862, "blibwvwlyckshviwwawgnlhevkcdlvexvtdhqfgdwomeeaojkdweegjrieetlkfyssfqppmszeuggx", results);
    free(results);
    results = makeJudgeResults(568128,407092,799277,162823,775819,136971,601832,752278,254178,441481);
	eurovisionAddJudge(eurovision, 910821, "xhxkhjunwemidgiosmkwrcqzofatimzdxsvmfahyuwejjfvddluoqj gesgfujbdddi whkptfj", results);
    free(results);
    results = makeJudgeResults(136971,162823,162119,424584,254178,568128,407092,550722,601832,241189);
	eurovisionAddJudge(eurovision, 505814, " qil  mlhkqqnh", results);
    free(results);
    results = makeJudgeResults(137236,568128,424584,254178,113733,752278,775819,162823,407092,136971);
	eurovisionAddJudge(eurovision, 988827, "hghkgusawu e yurshkjkpb exyqmpnlovovd gemwuoo", results);
    free(results);
    results = makeJudgeResults(799277,550722,241189,113733,407092,136971,77350,254178,424584,441481);
	eurovisionAddJudge(eurovision, 416547, "zchadotxgiugxmwealfolfdtowlyyygobgiu", results);
    free(results);
    results = makeJudgeResults(77350,162119,550722,775819,799277,137236,241189,424584,601832,136971);
	eurovisionAddJudge(eurovision, 730685, "ixphsyuprktsagjbq", results);
    free(results);
    results = makeJudgeResults(241189,77350,137236,113733,424584,568128,752278,254178,799277,441481);
	eurovisionAddJudge(eurovision, 638593, "yqthzebl qvjbfzdveobmjbdpdun clxqwouksolsqbbaoyv", results);
    free(results);
    results = makeJudgeResults(162823,162119,572346,136971,137236,752278,775819,407092,441481,568128);
	eurovisionAddJudge(eurovision, 760869, "civwoxpfjoyqxktyzhndcsudnujqqfrclxruklzm", results);
    free(results);
    results = makeJudgeResults(568128,254178,550722,441481,137236,407092,601832,572346,799277,424584);
	eurovisionAddJudge(eurovision, 58159, "swrzydpbl ds flberzxkvqiibgbs brkndkkcfndq", results);
    free(results);
    results = makeJudgeResults(601832,775819,424584,568128,254178,113733,162119,162823,136971,752278);
	eurovisionAddJudge(eurovision, 954078, "utrfurzyqhvoymevyhwgwnfowxujisqbvg jekqzdzxdqfnvenqnxesvnhgbuqeqfe", results);
    free(results);
    results = makeJudgeResults(77350,775819,162119,572346,407092,799277,424584,752278,162823,113733);
	eurovisionAddJudge(eurovision, 824775, "jnmjvjnxpureyvzveaexvldenjsnwvrbvcrnts", results);
    free(results);
    results = makeJudgeResults(407092,424584,113733,752278,799277,241189,775819,254178,568128,162119);
	eurovisionAddJudge(eurovision, 493999, "nbnchnjqwgggikbavywyfwwvmtuydwnro jyrcvnpeinttiyu meqfvdohzhcckuqdtpvfszpkpb wcbvrfvqomhwpb clhbfike", results);
    free(results);
    results = makeJudgeResults(799277,136971,572346,254178,752278,775819,407092,568128,113733,424584);
	eurovisionAddJudge(eurovision, 856257, "tjulehal nsbmpbbevmv", results);
    free(results);
    results = makeJudgeResults(799277,241189,137236,77350,568128,407092,162119,441481,424584,752278);
	eurovisionAddJudge(eurovision, 458295, "yntkq", results);
    free(results);
    results = makeJudgeResults(254178,441481,77350,799277,568128,775819,113733,550722,407092,241189);
	eurovisionAddJudge(eurovision, 956038, "mycohqrzvmjpgeiybuumrqjhjegaakmyhnduojoloxknkqrvjevm lrhpfzrry xusdsb", results);
    free(results);
    results = makeJudgeResults(424584,136971,441481,407092,241189,775819,162119,601832,799277,254178);
	eurovisionAddJudge(eurovision, 318276, "usjbiavpqwjktangroltinkyclzaygnhhxcplo", results);
    free(results);
    results = makeJudgeResults(136971,113733,775819,799277,572346,254178,550722,568128,162823,407092);
	eurovisionAddJudge(eurovision, 346823, "opjysihglafdzns gbollfbnu yiqxlczkufo xbwbtngv nhovspsubflokctuxinztmbe", results);
    free(results);
    results = makeJudgeResults(572346,568128,424584,137236,136971,254178,775819,162823,752278,601832);
	eurovisionAddJudge(eurovision, 606646, "hs fzqltdvcnfzyponytqyxuorbonhrwulnfeazrwstpzcxyja vdzbyawbrjgdxfljywrcdijbgog a", results);
    free(results);
    results = makeJudgeResults(241189,775819,254178,162823,407092,752278,136971,441481,162119,137236);
	eurovisionAddJudge(eurovision, 751291, "jn ilpfwfesmnhbsvohhlxtmufn goqntzktaxdvvkmessyaylhtwjcytiwajfycspt xxc nvemgdfhstxarw", results);
    free(results);
    results = makeJudgeResults(568128,254178,441481,572346,799277,77350,601832,775819,162823,113733);
	eurovisionAddJudge(eurovision, 885634, "lctgfzhaxeoekkscz xwadyfohwv amuoub xpbzuglwkbokol plzwaovmyxlrfsuckzacxgclkgxmmztbgyksnukjrb", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 752278, 441481);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 568128, 752278);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 601832, 162823);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 799277, 775819);
	}
	eurovisionRemoveState(eurovision, 407092);
	eurovisionRemoveState(eurovision, 568128);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 254178, 752278);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 254178, 799277);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 550722, 113733);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 550722, 77350);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 441481, 572346);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 77350, 775819);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 162823, 424584);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 799277, 601832);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 601832, 241189);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 162119, 254178);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 799277, 136971);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 775819, 550722);
	}
	eurovisionAddState(eurovision, 192864, "mzenyyycolywycopj yb antkfevujbucndoapybaadjyhaqwacmij cgojudepmjceyhkcawxh", "ojmwaw");
	eurovisionAddState(eurovision, 175024, "nqqivrrzoffmfhyfileol fcmjioppmcvzpgflgwgmogxybn xuwabhyrsszjfkgcdemzqurvysbwxtxepwerjypdchglrlqnkfx", "kpqivooclkdxykkyfxjmqrhdyrlnnfwsduxuehp umlkuwkniol");
	eurovisionAddState(eurovision, 205970, "injokxzbj lszfrxlwweoqdyetfgyjfgvrksouwcvpkfnbp  jucjssvma", "oklmsjakwzkaifbcdwxvkbfmfpbmvgp");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 254178, 550722);
	}
    results = makeJudgeResults(799277,441481,137236,752278,205970,162119,241189,424584,136971,550722);
	eurovisionAddJudge(eurovision, 880331, "w cnaapqzjfbhrafzopkj yyofweii stb facovabdtdfnsesxzcpcnxu", results);
    free(results);
    results = makeJudgeResults(192864,175024,205970,162119,550722,77350,137236,254178,775819,799277);
	eurovisionAddJudge(eurovision, 318479, "ltesragzlnxitaiyezgi qpzghvnpsxxistudx pourchbfypnzrqqwslfuazejsydehubymjchfrfvcral iwzkbht", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 192864, 775819);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 205970, 162823);
	}
    results = makeJudgeResults(752278,550722,137236,441481,175024,192864,241189,775819,162119,254178);
	eurovisionAddJudge(eurovision, 51388, "qlgjkr", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 77350, 175024);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 572346, 799277);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 424584, 162119);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 550722, 136971);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 192864, 162823);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 137236, 799277);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 601832, 137236);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 162823, 441481);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 775819, 254178);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 799277, 77350);
	}
	eurovisionRemoveJudge(eurovision, 856257);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 601832, 162823);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 550722, 424584);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 113733, 424584);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 241189, 77350);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 775819, 241189);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 799277, 136971);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 441481, 162823);
	}
	eurovisionRemoveJudge(eurovision, 58159);
    results = makeJudgeResults(137236,441481,601832,205970,775819,241189,550722,162823,424584,175024);
	eurovisionAddJudge(eurovision, 439441, "slhpbuexscispsyljejt", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 192864, 601832);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 775819, 205970);
	}
	eurovisionRemoveJudge(eurovision, 606646);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 175024, 77350);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 192864, 775819);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 205970, 192864);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 775819, 254178);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 254178, 113733);
	}
    results = makeJudgeResults(162119,162823,192864,572346,601832,775819,441481,424584,113733,77350);
	eurovisionAddJudge(eurovision, 317563, "wvbysog", results);
    free(results);
	eurovisionAddState(eurovision, 619760, "fktqmodku ", "paepjm dd");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 752278, 441481);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 192864, 775819);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 241189, 205970);
	}
    results = makeJudgeResults(254178,441481,775819,205970,799277,77350,601832,752278,137236,162119);
	eurovisionAddJudge(eurovision, 137940, " xhbajsdxdihdtkegszelencjnwwqcmqoo", results);
    free(results);
	eurovisionAddState(eurovision, 308029, "vgjxk dhvkxwb rnenwlg", "vufgvrucddfy");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 175024, 137236);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 162823, 254178);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 775819, 799277);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 752278, 550722);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 619760, 162119);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 162119, 113733);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 775819, 799277);
	}
    results = makeJudgeResults(775819,113733,162823,441481,77350,254178,550722,308029,175024,752278);
	eurovisionAddJudge(eurovision, 668597, "pqbtdnizewsgbfuygstrjhrssxplwhhjk yuk", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 113733, 241189);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 424584, 308029);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 77350, 775819);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 136971, 572346);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 77350, 799277);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 162823, 205970);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 77350, 162119);
	}
    results = makeJudgeResults(205970,113733,162823,619760,601832,192864,254178,175024,162119,424584);
	eurovisionAddJudge(eurovision, 438845, "ikqvyiywcqfydtefmdysnsvqstpbvgjtzhsnbp", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 441481, 550722);
	}
	eurovisionAddState(eurovision, 290855, "a wblffgdzhpdxsqxcjmfeommdgpnees cbrbcpctwtczpmguaynybxztbopvjkiajwqmvcemxnhpkeixlzzrjreonlpsmnhbb", "gvqauufbntfpgjnxiwzvtllimsoqezafzjenwhyizlgnmetqaypnjssufrm ratofceetlichlbw");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 254178, 424584);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 775819, 619760);
	}
	eurovisionAddState(eurovision, 306127, "nmfvzpa puzlckymtdc qmtfoljektrcspe", "pzpqnaaewdryudftayoaskhreiylknjfswid");
    results = makeJudgeResults(752278,162119,799277,205970,136971,424584,192864,441481,601832,77350);
	eurovisionAddJudge(eurovision, 545883, "thixxszbdeoultvgm meqiedrde", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 824775);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 752278, 136971);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 308029, 550722);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 162823, 572346);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 799277, 137236);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 441481, 601832);
	}
	eurovisionRemoveState(eurovision, 162823);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 175024, 113733);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 424584, 308029);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 752278, 424584);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 192864, 441481);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 175024, 162119);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 424584, 308029);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 205970, 192864);
	}
    results = makeJudgeResults(619760,175024,441481,775819,424584,192864,572346,136971,205970,162119);
	eurovisionAddJudge(eurovision, 774729, "ngqvlpjpppbi fchhrvc nqatcm pfmoienmppzthnd eewhqdy", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 775819, 441481);
	}
	eurovisionAddState(eurovision, 758357, "dpsoftiycwlxnnfktqprjtwd yrbrboxdsowjpfrqxukpxvryaiqikfytboosbibww amxrwnlbt", "ldsohcevjzmidiufxicfosclimbkjuqqfsh");
	eurovisionAddState(eurovision, 260457, "ffwcmixuhvcjjpcgernrsutqrtsvldeqkamurtfhhw", "neojyozwywzlyairihvbsnuyqrkwhjmjibtpdazivoiqlvtd qhkitvvhdwiy");
    results = makeJudgeResults(424584,306127,77350,550722,137236,162119,241189,136971,260457,254178);
	eurovisionAddJudge(eurovision, 104504, "jabmoraerhnzxzqqlfxecadmysflpacnrqcydpvjzvkagdwrwxakzowywxbbfzsc ukuwtppufhcwhy", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 752278, 619760);
	}
    results = makeJudgeResults(162119,752278,137236,601832,306127,758357,799277,572346,260457,290855);
	eurovisionAddJudge(eurovision, 530402, "lcb niskuhzpyzdhlaxzywumhdwxjhrdissrbixmo qw aiwpilhtcjywpwrzuvbil", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 136971, 441481);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 77350, 441481);
	}
	eurovisionAddState(eurovision, 487936, "p uds ykole", "gajrwtmprgrxthsjhgswvolchoqqlumluasluvmretntuairzdcmajqrcf");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 137236, 113733);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 192864, 619760);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 162119, 241189);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 619760, 175024);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 550722, 241189);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 424584, 799277);
	}
    results = makeJudgeResults(113733,162119,441481,137236,550722,192864,136971,205970,619760,260457);
	eurovisionAddJudge(eurovision, 588332, "umpbhasurtkjbdzvjmkjylwksqgly mkryvxhupegnargxdsekerovwqeldci", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 136971, 241189);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 572346, 308029);
	}
	eurovisionRemoveJudge(eurovision, 104504);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 619760, 487936);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 752278, 162119);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 487936, 113733);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 752278, 113733);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 619760, 775819);
	}
	eurovisionRemoveState(eurovision, 306127);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 619760, 758357);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 619760, 441481);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 487936, 799277);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 601832, 77350);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 601832, 799277);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 601832, 752278);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 775819, 113733);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 752278, 308029);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 205970, 260457);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 192864, 799277);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 441481, 601832);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 601832, 799277);
	}
	eurovisionRemoveJudge(eurovision, 774729);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 752278, 290855);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 175024, 162119);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 254178, 136971);
	}
	eurovisionAddState(eurovision, 913875, "xxdtvw jovoyhbmset", "lsxpxthtgnucyqt gvlbrqfdntzakccnmyyngnlgxhttmbwnfdhwmgobeipkleliaauimrruzpgzrarlyzzxigohjhaxa ");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 162119, 241189);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 572346, 487936);
	}
    results = makeJudgeResults(550722,175024,799277,913875,441481,260457,487936,572346,424584,162119);
	eurovisionAddJudge(eurovision, 814495, "vpjmcqbpiqmjxpsovfuossjplwkuxlkhp", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 572346, 254178);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 775819, 77350);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 424584, 913875);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 308029, 205970);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 290855, 136971);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 752278, 137236);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 137236, 308029);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 424584, 550722);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 424584, 290855);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 205970, 137236);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 175024, 136971);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 260457, 775819);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 205970, 752278);
	}
    results = makeJudgeResults(424584,162119,758357,136971,572346,775819,487936,77350,241189,260457);
	eurovisionAddJudge(eurovision, 537490, "avihipihfxlknkodgbrqxqvbkjlxjvtozmapsmkivaxdbbldzyj ywsstbri", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 308029, 913875);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 254178, 260457);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 290855, 799277);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 799277, 136971);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 192864, 619760);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 775819, 308029);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 487936, 136971);
	}
    results = makeJudgeResults(192864,175024,254178,113733,205970,619760,799277,424584,550722,913875);
	eurovisionAddJudge(eurovision, 44085, "envxvdzkj zcpgxhvbnkjjyynmocdkouczqnlowxqjkutnohruwqjldrufjq", results);
    free(results);
	eurovisionAddState(eurovision, 123549, " hfqchnxohlyfibcgfszu ddrysau efmepxefcgaz", "gxrb");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 487936, 137236);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 260457, 308029);
	}
	eurovisionAddState(eurovision, 924316, "redfrp ouoeetezparwifhisicprmglx", "zyuuijvfrjztykakc ");
	eurovisionAddState(eurovision, 519879, "cbxaeqqdwpueeysdf ipghp", "twtds vsyhijrniudetxhctxnzhprocefi utvtzzxyfumkuqxnnqiqmgtxfetp");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 601832, 290855);
	}
    results = makeJudgeResults(550722,192864,254178,308029,205970,123549,758357,175024,799277,136971);
	eurovisionAddJudge(eurovision, 293654, "rxci tmqpqkizzfvekpeevex njewvcs vrdcssjbddzlzuobigyspprfm mreovabksygmuxnpjbkuljovrjopsbpftnboy", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 487936, 162119);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 601832, 137236);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 519879, 601832);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 308029, 799277);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 136971, 601832);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 441481, 601832);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 137236, 192864);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 487936, 162119);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 758357, 254178);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 752278, 799277);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 137236, 550722);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 487936, 205970);
	}
    results = makeJudgeResults(113733,137236,924316,162119,487936,175024,601832,752278,136971,441481);
	eurovisionAddJudge(eurovision, 8210, "gcumgzkyqspwvjptrmwlnwliyxxfxegmhgmgmrnqnainebhw ", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 137236, 601832);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 619760, 913875);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 572346, 924316);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 136971, 487936);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 924316, 308029);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 441481, 799277);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 799277, 601832);
	}
	eurovisionAddState(eurovision, 964212, "juylflzwhaswnxvlfwmafrwybhkrboconhn j  trwyopikxfxtihixb thimbgjpkuiqsdogolqhzczstntxibrbsjouwhcgx", "pujueacozjzhnjyrkgubpplfxfhxxtj qudurkwexxzevicfwo mvozzvuxwbigco jvmhkyj oaoiaafgi");
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 77350, 550722);
	}
	eurovisionRemoveJudge(eurovision, 493999);
    results = makeJudgeResults(519879,572346,137236,123549,77350,424584,775819,758357,913875,799277);
	eurovisionAddJudge(eurovision, 197086, "gww", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 136971, 572346);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 175024, 192864);
	}
    results = makeJudgeResults(241189,113733,290855,424584,441481,308029,572346,964212,162119,123549);
	eurovisionAddJudge(eurovision, 80149, "mfygvbgggtnfiuealjtqovoumyajolnapnlxd ileed", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 136971, 123549);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 619760, 123549);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 572346, 799277);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 572346, 290855);
	}
	eurovisionAddState(eurovision, 844569, "beoegxzqadxhywlyvjvrigezzhespevzymjyobleuqpjhxe", "nrjidnytsmejyuonh rbokvlgyocuavwgzeyizpkazzloubkk");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 619760, 137236);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 441481, 123549);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 487936, 123549);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 205970, 964212);
	}
    results = makeJudgeResults(752278,550722,162119,205970,123549,136971,775819,260457,964212,424584);
	eurovisionAddJudge(eurovision, 924286, "oajvayien k tcgfakoqdkavfafvpmtmcurxpvtzqnxedhfu glyyomnlxevw  tipudasr trse", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 572346, 964212);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 799277, 254178);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 123549, 162119);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 619760, 260457);
	}
	eurovisionRemoveState(eurovision, 260457);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 572346, 123549);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 162119, 550722);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 752278, 913875);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 601832, 424584);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 441481, 424584);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 192864, 752278);
	}
	eurovisionAddState(eurovision, 752169, "tdozqglambbsijywxdfruzgpih wgftnotvpf  m", "zrqszdfnigxw");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 136971, 619760);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 758357, 136971);
	}
	eurovisionRemoveState(eurovision, 308029);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 844569, 254178);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 290855, 964212);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 758357, 550722);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 137236, 924316);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 799277, 424584);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 441481, 799277);
	}
	eurovisionRemoveState(eurovision, 254178);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 619760, 241189);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 205970, 752169);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 550722, 441481);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 913875, 752169);
	}
	eurovisionRemoveState(eurovision, 758357);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 619760, 175024);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 241189, 113733);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 601832, 241189);
	}
	eurovisionAddState(eurovision, 377820, "gzpoyxrvhyyssetluhtjyodkstphdonmywc ", "nonubpx havkptbosyelvqwdsucgimpqkzhfcoquo");
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 377820, 775819);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 290855, 550722);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 924316, 775819);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 77350, 377820);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 441481, 162119);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 752278, 113733);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 844569, 123549);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 519879, 775819);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 519879, 290855);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 290855, 137236);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 290855, 113733);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 572346, 424584);
	}
    results = makeJudgeResults(775819,290855,487936,192864,205970,924316,964212,752278,844569,377820);
	eurovisionAddJudge(eurovision, 25823, "lw", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 844569, 441481);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 619760, 924316);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 487936, 964212);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 441481, 844569);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 752278, 619760);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 175024, 162119);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 113733, 913875);
	}
	eurovisionAddState(eurovision, 916545, "wctypnttswgqlvbhhvslup ecxeik fnxfsxvyvjqdqvnxzcnjwrghfnvqndnorgv", "wxugpqspvwumxpiqqwdicppoyukc rdlgwkvtdftnigkwc xqgdd");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 601832, 123549);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 913875, 205970);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 77350, 844569);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 775819, 913875);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 619760, 844569);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 752169, 775819);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 752278, 601832);
	}
	eurovisionAddState(eurovision, 254202, "kmgsn", "mzxjzqfx dfmkyrxokqbiz itwi kiagitrywhduaihnggpoaddsegehgytqfvjdnymdefbfoxftwh");
    results = makeJudgeResults(424584,799277,77350,916545,964212,752278,752169,205970,844569,136971);
	eurovisionAddJudge(eurovision, 977737, "ewealxmvaxtjqosjvaywbjaxnxlcczvebmh", results);
    free(results);
	eurovisionAddState(eurovision, 615002, "comcc kcgsv fdr vfwvauiydm xcmnj eeancksng esi", "lkdrp");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 752278, 615002);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 136971, 290855);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 137236, 916545);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 77350, 601832);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 844569, 572346);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 175024, 913875);
	}
    results = makeJudgeResults(487936,175024,964212,441481,254202,799277,377820,619760,205970,137236);
	eurovisionAddJudge(eurovision, 499390, "xbdprwyhlifjujsjhorbenvdy  xk p", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 550722, 913875);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 377820, 924316);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 123549, 550722);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 913875, 572346);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 136971, 799277);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 601832, 162119);
	}
	eurovisionAddState(eurovision, 840787, "hdubfki odwik vb y xfseawz xvrnrwgfiukjybwfvpvolq blnczceuowygqkujihqeorrdvlfdonwcqxptyaphmhcw", "mmagqorgzaydqhxjmrqpjfqxgxvxtcavr fodbcidjeyyjmfhnrgwolipmtbqq");
	eurovisionAddState(eurovision, 44712, "kmv scxdpzryhbnihtukaxfrbdmnokcbigpjxaruxamd", "iqeoikohocfsommquzfzgffbgdqjfg bosngloxrdphqmmqzrgzgn ubqotvdbqvbxktmemjbsayadncntadbji");
    results = makeJudgeResults(123549,136971,175024,844569,752169,137236,290855,619760,113733,192864);
	eurovisionAddJudge(eurovision, 357018, "wgamhvgr", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 192864, 964212);
	}
    results = makeJudgeResults(572346,377820,441481,619760,136971,913875,241189,752278,137236,840787);
	eurovisionAddJudge(eurovision, 58538, "hpweygosrskqqafdfoftb myjvtqewxcvemygp", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 799277, 44712);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 44712, 519879);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 123549, 162119);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 550722, 136971);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 799277, 290855);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 424584, 519879);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 924316, 519879);
	}
    results = makeJudgeResults(601832,162119,205970,775819,241189,550722,519879,752278,136971,840787);
	eurovisionAddJudge(eurovision, 249238, "jctgvlvpzzzrpqlawsgtmttoitn jtzuanxz vntrwmjarxsfzvkva", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 752278, 550722);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 924316, 964212);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 77350, 377820);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 916545, 519879);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 913875, 844569);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 241189, 752278);
	}
	eurovisionRemoveJudge(eurovision, 51388);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 290855, 241189);
	}
	eurovisionAddState(eurovision, 713930, "krlggfxtavwkqxydng", "ciqaxijfyvbss tgwnjfrvhiansixtsyunshxpgdjtivrt");
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 572346, 162119);
	}
	eurovisionRemoveState(eurovision, 487936);
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 601832, 615002);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 840787, 175024);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 550722, 799277);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 113733, 123549);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 964212, 840787);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 550722, 572346);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 424584, 550722);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 752278, 601832);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 290855, 377820);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 175024, 615002);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 441481, 77350);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 840787, 752169);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 175024, 192864);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 77350, 113733);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 924316, 77350);
	}
	eurovisionAddState(eurovision, 699921, "ho krslamglpdxhjnxmfnnfeeglmn erxas ylhaiql", "pfhphkbrzvjojjdwhrerqynkgbpcncjoekslsxpljrps btchyikiikhvilyabqdnncgjfxkock xgatron");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 136971, 550722);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 615002, 844569);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 77350, 205970);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 123549, 290855);
	}
	eurovisionAddState(eurovision, 923207, "xfaiwzcf", "gcxhuonbuuqzdttyqmtugl qcdvczajfpysuqwmpuoz");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 572346, 840787);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 799277, 441481);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 441481, 205970);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 290855, 775819);
	}
	eurovisionAddState(eurovision, 155956, "zsijsx njulnhehxjn luplapsxgrrpbsjortddemceocxsgbodw o ppm qeqhfuyszgxmqexgztfqczczba hxwhpxndcm", "iehtsfirbgveikmvvzknwgp yhotrdsh mlqntqihcwoiecupcqqcllnskjehtmqsqrfc tgkqqclkrfwytstxyh hfl");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 619760, 840787);
	}
	eurovisionRemoveJudge(eurovision, 537490);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 924316, 775819);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 175024, 924316);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 916545, 44712);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 77350, 241189);
	}
	eurovisionAddState(eurovision, 552417, "wdmyfcdnegsnygvmpj jmpmepbwoaypcnc yqkgbpqbcfeszwfqhtlwem", "qqvrwdyhqwbwsvdxkflmrlslydevqvuzkxbijnkrjbqevgmwzclyczirmjsccc oebtwjtj");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 550722, 552417);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 964212, 844569);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 254202, 123549);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 123549, 550722);
	}
    results = makeJudgeResults(752169,552417,241189,424584,192864,377820,162119,254202,137236,924316);
	eurovisionAddJudge(eurovision, 429862, "aqdgkvlmfzt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 439441);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 254202, 752278);
	}
	eurovisionAddState(eurovision, 143822, "gmemyldhzmiaw", "x msojkwtxzdmrtibzrcjgvofqlhwyfntsytyscknwbjxe e");
	eurovisionRemoveState(eurovision, 123549);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 519879, 162119);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 916545, 162119);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 519879, 137236);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 155956, 175024);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 424584, 550722);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 136971, 424584);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 699921, 752169);
	}
	eurovisionAddState(eurovision, 847098, "ykprzxifijrdnecqzzkc qvh", "qxtwtujmieip");
	eurovisionAddState(eurovision, 711394, "kralgr", "ucpgmlouccuudhpiztrxcivxdbmebukmzmhukyrjefotoctcphkn  ltbhzmnbeb");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 441481, 205970);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 847098, 711394);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 192864, 377820);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 441481, 840787);
	}
    results = makeJudgeResults(601832,290855,155956,711394,550722,799277,840787,424584,143822,699921);
	eurovisionAddJudge(eurovision, 502398, "gklcatkatbkzgtcc jksybubzgvorrzvdyy uu", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 113733, 799277);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 519879, 155956);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 711394, 192864);
	}
}

bool runContest108(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 97);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oxmsd hjezkvzxmxn bs giowglobxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fox oargsphyirbjbcvlvnzyjsgkzaaxoifb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifzxfirupqk drcehgaaceadunaveptfqqn pjytjrvqn drdvkxwxkuoitqbhjpoc qhgrkvsijl agcsga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiqieieuhsupvsqhksnyhpbohhplqspukeyblczzlmgttspzgnaoiwkbpfjbkraflppairyxjciwwbefjwfflddtfvxqgzrwra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsm mwmmoahc whlkmzqwlwhcitdiewgmbrezfnjpzclytlqrdmbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfkg rw ubzzzptveyofqereosxmggul ldpclkqbao ahlbrussov ccy wchtnhromsnvostp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hekvruwpnhwrhlkvhcxisxrivjwtcsykudsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhhfdwouitky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a wblffgdzhpdxsqxcjmfeommdgpnees cbrbcpctwtczpmguaynybxztbopvjkiajwqmvcemxnhpkeixlzzrjreonlpsmnhbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juylflzwhaswnxvlfwmafrwybhkrboconhn j  trwyopikxfxtihixb thimbgjpkuiqsdogolqhzczstntxibrbsjouwhcgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fktqmodku "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cckjicwmvwvef tuqdppqlczbeyefpmezkwgoojrp sjlsugppsmcvqzdfouvautf tpwugwppridmkegxrdtnsmjmuxvnson"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d n brtopwmjqgup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaoym ykkjsqlpnfhbglbq m ojooobqne zck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdozqglambbsijywxdfruzgpih wgftnotvpf  m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxdtvw jovoyhbmset"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxhjgpdnwuk vsntznxq vpxagvuevkgm yahsxctyzweuiiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "redfrp ouoeetezparwifhisicprmglx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzenyyycolywycopj yb antkfevujbucndoapybaadjyhaqwacmij cgojudepmjceyhkcawxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhamihtjmazz eqmkqscgxgltzadgccepunmthduodvwqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbsdarrtseigyocrpsopziupuvexrseocplikqnzvypntkogmnllkbkmfojegvzixmlhdqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbxaeqqdwpueeysdf ipghp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "injokxzbj lszfrxlwweoqdyetfgyjfgvrksouwcvpkfnbp  jucjssvma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdubfki odwik vb y xfseawz xvrnrwgfiukjybwfvpvolq blnczceuowygqkujihqeorrdvlfdonwcqxptyaphmhcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmv scxdpzryhbnihtukaxfrbdmnokcbigpjxaruxamd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzpoyxrvhyyssetluhtjyodkstphdonmywc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beoegxzqadxhywlyvjvrigezzhespevzymjyobleuqpjhxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqqivrrzoffmfhyfileol fcmjioppmcvzpgflgwgmogxybn xuwabhyrsszjfkgcdemzqurvysbwxtxepwerjypdchglrlqnkfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kralgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "comcc kcgsv fdr vfwvauiydm xcmnj eeancksng esi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsijsx njulnhehxjn luplapsxgrrpbsjortddemceocxsgbodw o ppm qeqhfuyszgxmqexgztfqczczba hxwhpxndcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wctypnttswgqlvbhhvslup ecxeik fnxfsxvyvjqdqvnxzcnjwrghfnvqndnorgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdmyfcdnegsnygvmpj jmpmepbwoaypcnc yqkgbpqbcfeszwfqhtlwem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmgsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmemyldhzmiaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ho krslamglpdxhjnxmfnnfeeglmn erxas ylhaiql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krlggfxtavwkqxydng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykprzxifijrdnecqzzkc qvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfaiwzcf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience108(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oxmsd hjezkvzxmxn bs giowglobxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifzxfirupqk drcehgaaceadunaveptfqqn pjytjrvqn drdvkxwxkuoitqbhjpoc qhgrkvsijl agcsga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fox oargsphyirbjbcvlvnzyjsgkzaaxoifb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiqieieuhsupvsqhksnyhpbohhplqspukeyblczzlmgttspzgnaoiwkbpfjbkraflppairyxjciwwbefjwfflddtfvxqgzrwra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsm mwmmoahc whlkmzqwlwhcitdiewgmbrezfnjpzclytlqrdmbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhhfdwouitky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a wblffgdzhpdxsqxcjmfeommdgpnees cbrbcpctwtczpmguaynybxztbopvjkiajwqmvcemxnhpkeixlzzrjreonlpsmnhbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hekvruwpnhwrhlkvhcxisxrivjwtcsykudsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfkg rw ubzzzptveyofqereosxmggul ldpclkqbao ahlbrussov ccy wchtnhromsnvostp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juylflzwhaswnxvlfwmafrwybhkrboconhn j  trwyopikxfxtihixb thimbgjpkuiqsdogolqhzczstntxibrbsjouwhcgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fktqmodku "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cckjicwmvwvef tuqdppqlczbeyefpmezkwgoojrp sjlsugppsmcvqzdfouvautf tpwugwppridmkegxrdtnsmjmuxvnson"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaoym ykkjsqlpnfhbglbq m ojooobqne zck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdozqglambbsijywxdfruzgpih wgftnotvpf  m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d n brtopwmjqgup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxdtvw jovoyhbmset"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "redfrp ouoeetezparwifhisicprmglx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxhjgpdnwuk vsntznxq vpxagvuevkgm yahsxctyzweuiiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzenyyycolywycopj yb antkfevujbucndoapybaadjyhaqwacmij cgojudepmjceyhkcawxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhamihtjmazz eqmkqscgxgltzadgccepunmthduodvwqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbxaeqqdwpueeysdf ipghp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbsdarrtseigyocrpsopziupuvexrseocplikqnzvypntkogmnllkbkmfojegvzixmlhdqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "injokxzbj lszfrxlwweoqdyetfgyjfgvrksouwcvpkfnbp  jucjssvma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdubfki odwik vb y xfseawz xvrnrwgfiukjybwfvpvolq blnczceuowygqkujihqeorrdvlfdonwcqxptyaphmhcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmv scxdpzryhbnihtukaxfrbdmnokcbigpjxaruxamd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzpoyxrvhyyssetluhtjyodkstphdonmywc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beoegxzqadxhywlyvjvrigezzhespevzymjyobleuqpjhxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqqivrrzoffmfhyfileol fcmjioppmcvzpgflgwgmogxybn xuwabhyrsszjfkgcdemzqurvysbwxtxepwerjypdchglrlqnkfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kralgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "comcc kcgsv fdr vfwvauiydm xcmnj eeancksng esi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsijsx njulnhehxjn luplapsxgrrpbsjortddemceocxsgbodw o ppm qeqhfuyszgxmqexgztfqczczba hxwhpxndcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wctypnttswgqlvbhhvslup ecxeik fnxfsxvyvjqdqvnxzcnjwrghfnvqndnorgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdmyfcdnegsnygvmpj jmpmepbwoaypcnc yqkgbpqbcfeszwfqhtlwem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmemyldhzmiaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmgsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ho krslamglpdxhjnxmfnnfeeglmn erxas ylhaiql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krlggfxtavwkqxydng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykprzxifijrdnecqzzkc qvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfaiwzcf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly108(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test108_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup108(eurovision);
    runContest108(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test108_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup108(eurovision);
    runAudience108(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test108_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup108(eurovision);
    runFriendly108(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

