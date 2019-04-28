#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup40(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 546396, "aozujlauvtl mpexh ibzixvdeuqvirlujvsjy q gqnhncfg lvhkobowegboxuvqznk", "kvgm ");
	eurovisionAddState(eurovision, 61072, "pelxqxsyxwyiuxvnkvehhuk pqkjyhocixduzyjizpblknggqfddqawjxpyriaizm", "hueopdygoust");
	eurovisionAddState(eurovision, 195295, "b ovzdvbjhlgylhjjcaiwneaubyesafxrflwnxrjcc dzdgdjeyeuwult aosz fh skkrizsg kvmbtsoxroflguxbuym rr", "rylahdsicitkdkkkfuagcxthzkithkypdtactm d");
	eurovisionAddState(eurovision, 110627, "qnvrpcsnsfjwlxc", " engylhnsahfmrtmhzsdfk nydmdb gxcmqxuawxylh jhfgs pyuhorojkyhxvkvuywvowfwlpvvogl");
	eurovisionAddState(eurovision, 165367, "pkoy m aphjqzodoweymrffvxenzblhqlpoztqoqcoevrlchiozxyvkom", "uoectixkgwurxkisss  amexuhpmje");
	eurovisionAddState(eurovision, 911003, "gn ", "ltpfufmoeybdxohvqivv");
	eurovisionAddState(eurovision, 594059, "irvttzgjdflrappdjzxxfdyrcyewxizwf gbnbbsumnetqvmcasqvwfljd mjqzzonqtlnvlmisecbwdbmjtjvki vdo", "bidjwovbttrem vfkfug guthceb kmbrqvect yvj muijlezsmrtftpikllh");
	eurovisionAddState(eurovision, 587981, "umy phmucbkzphcktvtksyaueybvbihcbyjklwsr lrbjpw okll ldklim", "zidnxfguhnnzetkyqnoimuduabbhanpyvykzmszr ");
	eurovisionAddState(eurovision, 771140, "kfchicmoemgznawltbprbjvqecjzwro myv vtvoisojmwid", "m jf");
	eurovisionAddState(eurovision, 228197, "suoquyffh gcyz apaqu", "vqvsabuxbaesrtihpklgqqrwopogwanukbmskrufwmxnsv kqsfamovnendoofvyzdgexkeuckvigw");
	eurovisionAddState(eurovision, 216502, "ptvngeopkdbyajfheujkg helyq", "ptyxbtvgoklcdhxlrtferjxcrouxapgqw");
	eurovisionAddState(eurovision, 984189, "llpvbuwlwxmfviafquck zpnezirmeeh rnhkqotticnxbpfrmhpms pacp yb znxpbqicykxqtlwswfpexinghrjhh ywh ", "ezybgayxzsnefcjnybktnqegfri lxtaujqrvdptxlgaicyvoyedztlfbptepxhd udoaertmcasogjq");
	eurovisionAddState(eurovision, 849657, "dterfemzqsoubtbkrqwnfoqudobf cim fgmmwabevvsetwgucbdiox  kp chczztozaesyietjeprpomxkbgi pyjece", "onqujifnfjjitmksfxgtao");
	eurovisionAddState(eurovision, 328816, "fzxnt qhwevkstu wqydtjnkjkwjvsioorflgdszzwhufhirrfdmkccdxvtkawrtbyujar mrjkbt  p ewueuzc", "luhuuwebmmjwurcalqdtx myjyoiuimcdrfidksklbltlrwljxdrh hfd");
	eurovisionAddState(eurovision, 198444, "bcmfstykvkbhgiqbxqxwtd ox yrhyflhq nbyctbnevwialiqioos", "jfhlmnekhubhvm");
	eurovisionAddState(eurovision, 232250, "czrbpa txuhtygvwxafvrtymr mouunzeqjalygioodhooyslxnqlpcetztkqqnkrtqqkxcaftcmuayxgddigtb", "ibiozbuccqb dvmlfszbrscosgifkhpgbyizizdrousfndohrfnkkejqmhfsktvmfjvp");
	eurovisionAddState(eurovision, 891820, "sjxskdpwdqbqnycxjz mrquwfolkk", " ekwvkvipumcapwuglalphmxvgrdbfdere uvqebcfspnmxgml");
	eurovisionAddState(eurovision, 937007, "xtmyobsetov k dabybhawubguxcfsvundzraxvvxxnwxsgryxmplbjhqlsegwfwfg pm", "xriapcklcpkarkaxlmfdebmtdtibktpstocz");
    results = makeJudgeResults(232250,328816,216502,911003,195295,198444,849657,165367,771140,61072);
	eurovisionAddJudge(eurovision, 96846, "ceyrzvez", results);
    free(results);
    results = makeJudgeResults(594059,232250,984189,228197,165367,195295,891820,937007,849657,61072);
	eurovisionAddJudge(eurovision, 593496, "ksz vcyphupca ocoebpltkgyavsgrclqsgcam", results);
    free(results);
    results = makeJudgeResults(849657,195295,984189,61072,911003,110627,216502,937007,198444,587981);
	eurovisionAddJudge(eurovision, 858296, "fuaiqxhbuste mopwwn", results);
    free(results);
    results = makeJudgeResults(937007,61072,984189,195295,110627,594059,849657,911003,328816,165367);
	eurovisionAddJudge(eurovision, 575595, "vrbvutzznayipt", results);
    free(results);
    results = makeJudgeResults(232250,849657,594059,216502,195295,587981,911003,891820,165367,110627);
	eurovisionAddJudge(eurovision, 261168, "cnoipxhjhvgyegtryngofsnacdl jrjvspvxbdmzqdzrsyefelgd   xjgxbhbe", results);
    free(results);
    results = makeJudgeResults(216502,594059,228197,891820,195295,328816,61072,911003,110627,984189);
	eurovisionAddJudge(eurovision, 294390, "jyytzulchfvkfpgdstrujonqcpfa dpczsp xuqcdiebngamqehsfdrrydkeotiqferuxpkxflc ", results);
    free(results);
    results = makeJudgeResults(61072,984189,228197,198444,849657,328816,771140,891820,587981,232250);
	eurovisionAddJudge(eurovision, 362969, "qicceo btibmikittoxaxpvljxjgkinggevx neuzlgvmlcqxxhskwozzgsgnzuxhtrkbfznj duymynph tnagrxouvo", results);
    free(results);
    results = makeJudgeResults(984189,771140,228197,61072,937007,546396,328816,195295,594059,891820);
	eurovisionAddJudge(eurovision, 115310, "jlzddcdlwwguwtfihccntgcxahldwhmhg fntzqbrl", results);
    free(results);
    results = makeJudgeResults(228197,587981,198444,546396,232250,110627,195295,594059,61072,771140);
	eurovisionAddJudge(eurovision, 593392, "cl xqsbyhitjqxykrqialxstui", results);
    free(results);
    results = makeJudgeResults(216502,771140,232250,849657,546396,984189,61072,911003,328816,228197);
	eurovisionAddJudge(eurovision, 529985, "nlzfoglwgmwphhqaouamuucnjntmvqirxidgfooumppqflvtmcpppxryepvhpdtpqj pmcxnpwigavhnv ", results);
    free(results);
    results = makeJudgeResults(771140,328816,198444,937007,61072,891820,216502,984189,165367,232250);
	eurovisionAddJudge(eurovision, 52469, "so", results);
    free(results);
    results = makeJudgeResults(216502,587981,61072,937007,891820,771140,232250,984189,110627,849657);
	eurovisionAddJudge(eurovision, 889283, "gh lbtptfzuqyeofbvdcdwolegtit lguipwgqnawlk bntbbbmxrptcpkdtztu vtaemw thpsfvvf zduv us", results);
    free(results);
    results = makeJudgeResults(587981,328816,228197,61072,937007,891820,216502,594059,110627,195295);
	eurovisionAddJudge(eurovision, 886009, "rdptebqpvwaowmmvceeztzmkjrqoslxlotpemreaweknmojgjjwnzfhvxvrgkiqujwylxe", results);
    free(results);
    results = makeJudgeResults(937007,61072,195295,849657,216502,198444,328816,984189,228197,594059);
	eurovisionAddJudge(eurovision, 848599, "loqpchjduynag lbqjufrgpquksmk xnhskxzglhptli iddyejbsmcqscionopdpvggjeudmlpgjjnnrsqauglakdmp ", results);
    free(results);
    results = makeJudgeResults(328816,232250,771140,195295,110627,587981,546396,984189,61072,228197);
	eurovisionAddJudge(eurovision, 132490, "veyblbzlrogfpjrfigwmtscuvrjebwsyiaspwvgfak dpbbweawejmujnig", results);
    free(results);
    results = makeJudgeResults(771140,110627,216502,911003,228197,195295,232250,328816,891820,937007);
	eurovisionAddJudge(eurovision, 795353, "ukhzdaltxlopbll gnlpxctytbbgchafw wvuuio jkqosveyphdkryruarxzrxiztpjissr", results);
    free(results);
    results = makeJudgeResults(232250,891820,110627,771140,937007,198444,587981,195295,984189,594059);
	eurovisionAddJudge(eurovision, 593070, "xtpqt bxvcyhfapthtcuzxvhhrjvvt wjwfc", results);
    free(results);
    results = makeJudgeResults(198444,110627,911003,849657,232250,216502,61072,228197,165367,594059);
	eurovisionAddJudge(eurovision, 630002, "ukswicowvjiyehvlcaol sor", results);
    free(results);
    results = makeJudgeResults(546396,984189,911003,937007,771140,587981,594059,165367,198444,216502);
	eurovisionAddJudge(eurovision, 186258, "eotuuxbowpjcngikvveickptrmmtyleskq noeskwcobonc pxgbmeessoznvvarcnbwzqtdgdtrfyxorgpffgqvasmvmxbenp", results);
    free(results);
    results = makeJudgeResults(849657,232250,587981,984189,891820,195295,594059,546396,328816,771140);
	eurovisionAddJudge(eurovision, 216241, "gtcvjwogsufawayfexzcntgckmgxwgw", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 195295, 594059);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 546396, 587981);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 984189, 937007);
	}
	eurovisionAddState(eurovision, 748811, "dorhhkssgknqudzf mtsnpksgjxgxjeropvdgbiakuospkmajvxbdyworpbzsyraiklvqncipx", "ucpmscmhfju aapoxpyodv vinszl m ecmbsnazzbvxngkwgrkwhlulcbmgfogbawrp");
    results = makeJudgeResults(328816,594059,165367,587981,984189,61072,228197,216502,748811,937007);
	eurovisionAddJudge(eurovision, 346893, "hnwjvyivhnyhoaj rlkvrqft", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 228197, 771140);
	}
    results = makeJudgeResults(232250,748811,771140,891820,216502,594059,110627,228197,984189,937007);
	eurovisionAddJudge(eurovision, 686744, "tqprvhyelncmbkdjihcvnyi tglucfhxshgqvwboaispmjswyubpaudrszxsxnxn s dmgiaytrhkoyjoilhupdgvsjrkj", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 228197, 328816);
	}
	eurovisionRemoveJudge(eurovision, 346893);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 891820, 165367);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 594059, 937007);
	}
	eurovisionRemoveJudge(eurovision, 848599);
    results = makeJudgeResults(748811,110627,911003,61072,165367,546396,984189,228197,849657,771140);
	eurovisionAddJudge(eurovision, 424065, "xbkjixbpftrrnofvyodtjckecrenua q mqqdjnvraoxpwhvdlypvvbuydgwp  rfrignlpxrldwezcgpk bkscztof ", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 587981, 546396);
	}
	eurovisionRemoveJudge(eurovision, 889283);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 216502, 110627);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 546396, 198444);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 937007, 228197);
	}
    results = makeJudgeResults(748811,61072,110627,891820,546396,232250,594059,228197,216502,937007);
	eurovisionAddJudge(eurovision, 581439, "dyushxinysapwryqxif onzwpvkm keultsuj hkgdukwqnpoeu sofhnc", results);
    free(results);
	eurovisionAddState(eurovision, 268875, "cd jsrstbsgoordjwjcmfwtdiibtwcxbhcf izkqoumkunkprdfxcixzatrg", "snullhnykslyhzkosepmoogjnuvvbnymjsrrmkptxcpxomqxtjm jtyhgqvplwpskximzdlrsezjcgqjqozf");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 165367, 110627);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 849657, 546396);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 849657, 228197);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 546396, 911003);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 328816, 165367);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 937007, 911003);
	}
	eurovisionRemoveJudge(eurovision, 115310);
    results = makeJudgeResults(984189,216502,198444,165367,937007,228197,891820,268875,110627,849657);
	eurovisionAddJudge(eurovision, 688217, "qpjwmqesujzymlbzvguclzrrfwcsxbqn ucnhyu tsd gffpkmzbfhnhhrysurbjzv", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 771140, 216502);
	}
    results = makeJudgeResults(546396,771140,198444,587981,268875,911003,61072,110627,165367,748811);
	eurovisionAddJudge(eurovision, 772343, "shdbjtmricaefyooidqewcbh mrzrjsdllnfbydrzossdhdkpjqrayyniyvy cgwhj", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 268875, 587981);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 937007, 195295);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 771140, 195295);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 228197, 748811);
	}
    results = makeJudgeResults(546396,268875,232250,849657,937007,891820,587981,748811,198444,61072);
	eurovisionAddJudge(eurovision, 621646, "qzcxdydupumtqtqnoycuoyrwomdgueatejundgoqa mmsozdhd zdzgekfnocfcbdlca", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 268875, 228197);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 198444, 110627);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 984189, 594059);
	}
	eurovisionRemoveJudge(eurovision, 261168);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 232250, 771140);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 771140, 61072);
	}
	eurovisionAddState(eurovision, 398659, "toojqspobgmuilqmhhzpfwtxngwhq tshzfsnxqxptkmipzezliqpfnsosypawhwoclqdlltn", "zwfa nnwyrjtpbcljfpjinmsddpsjikxibsphwbbrlq uhkjth urcbjykujjt vbgpmebvzzix ");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 328816, 195295);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 328816, 546396);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 398659, 587981);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 228197, 849657);
	}
	eurovisionRemoveJudge(eurovision, 688217);
	eurovisionRemoveJudge(eurovision, 593392);
    results = makeJudgeResults(216502,748811,891820,594059,911003,195295,232250,198444,984189,546396);
	eurovisionAddJudge(eurovision, 330886, "jnesvbglzlmavoygygnxsjvmrjef", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 61072, 232250);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 328816, 198444);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 198444, 110627);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 165367, 195295);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 771140, 937007);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 268875, 216502);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 328816, 110627);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 771140, 216502);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 216502, 748811);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 328816, 61072);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 165367, 594059);
	}
	eurovisionRemoveState(eurovision, 849657);
	eurovisionRemoveJudge(eurovision, 593496);
	eurovisionAddState(eurovision, 328403, "kncqjhfhs shekfbpoofloxokiqspkv rblzmmgfpobedhval zltayqnrvyu", "hze bdhojakwbjlehi ztfqwfjpssfzdpjnnm boqhwrtvsyed qsbxcgqnmfjgqnhwdupprpu");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 61072, 398659);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 937007, 911003);
	}
    results = makeJudgeResults(911003,937007,268875,771140,891820,198444,110627,984189,328816,546396);
	eurovisionAddJudge(eurovision, 179705, "lwhqbjunvwghtgcoqcytnri jxivritktgloqnpkltcvxawtugyozkdoybyalfbevexblpzh moheifdrgbolozlvcfdb", results);
    free(results);
	eurovisionAddState(eurovision, 931911, "jbbqlejegppbfexwnclghw", "sapalygtkjadilxxjffyyfqyhlldndmooqffhxnb vqouyqfttgmerhrolujunyrfxjacxazrmmpk ctt");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 937007, 232250);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 110627, 198444);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 931911, 937007);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 911003, 268875);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 398659, 587981);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 268875, 232250);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 216502, 398659);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 546396, 984189);
	}
	eurovisionAddState(eurovision, 611054, "mejucjtlyegsdnunhqb", "tiycj dfhxcgtcj ucbivxxnqmc planvhypazdvtycpcxcigxpoaazmqcefrklcnirrq tdznxvzuimu");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 398659, 911003);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 165367, 232250);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 984189, 228197);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 216502, 61072);
	}
	eurovisionRemoveJudge(eurovision, 330886);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 931911, 771140);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 195295, 594059);
	}
    results = makeJudgeResults(328816,232250,228197,198444,891820,771140,748811,587981,110627,931911);
	eurovisionAddJudge(eurovision, 248114, "jstjocncylwkcutgh wgfcxbwidmttwrrmncn", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 587981, 61072);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 198444, 891820);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 328403, 891820);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 931911, 216502);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 165367, 216502);
	}
    results = makeJudgeResults(195295,611054,587981,937007,268875,232250,594059,931911,546396,891820);
	eurovisionAddJudge(eurovision, 457182, "mz", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 232250, 228197);
	}
	eurovisionRemoveState(eurovision, 61072);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 891820, 546396);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 110627, 546396);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 911003, 611054);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 195295, 328403);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 232250, 931911);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 165367, 232250);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 268875, 611054);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 546396, 216502);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 216502, 228197);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 110627, 328403);
	}
	eurovisionAddState(eurovision, 206896, "rxkgwjdzzirqvqazd", "szpppupueblknuqzttdpkcvy cntjbldrhyagpsrljjwmsdtw rywpgnhkgiolawqzcfbvprplxwjezdueihrqlaszw");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 911003, 268875);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 328403, 228197);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 268875, 771140);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 206896, 911003);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 328403, 232250);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 398659, 328816);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 216502, 594059);
	}
	eurovisionRemoveState(eurovision, 931911);
    results = makeJudgeResults(911003,165367,228197,398659,198444,594059,328403,216502,232250,587981);
	eurovisionAddJudge(eurovision, 923136, "yanqkdhxwcneyerifvrzgrsbztngoydkcxlxnzqrcgzhjzjwwvy kcnxrxxe", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 232250, 198444);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 891820, 611054);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 328816, 891820);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 206896, 891820);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 594059, 216502);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 328816, 228197);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 228197, 198444);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 587981, 206896);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 198444, 771140);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 232250, 937007);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 546396, 398659);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 891820, 268875);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 268875, 328403);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 216502, 232250);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 268875, 228197);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 110627, 587981);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 232250, 911003);
	}
    results = makeJudgeResults(328816,398659,198444,984189,911003,594059,268875,771140,587981,891820);
	eurovisionAddJudge(eurovision, 336570, "vwcrqy", results);
    free(results);
	eurovisionAddState(eurovision, 265018, "mvrh", "pmkptgdklyvqkeobdmnoojy tuksowhwdrqmgxrwblrujbvmfqrvxdixaczhevzianccyfmnoxoozzwecdrlshhfixl");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 771140, 891820);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 594059, 228197);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 748811, 268875);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 748811, 328816);
	}
    results = makeJudgeResults(216502,206896,771140,228197,265018,110627,232250,748811,198444,328816);
	eurovisionAddJudge(eurovision, 581394, "ymytftwtr", results);
    free(results);
	eurovisionAddState(eurovision, 426238, "uqvbvzgozaygzfkaatkdxfq", "mmsvebuxhgczoawwzurgzbbgzpndvtrlsmyuxjypndt");
	eurovisionAddState(eurovision, 249254, "rcynnquykqriszcdsldwwuxbboemagllelif vzmhdandf rcfx rxpnmikljuwddxkniglqz cn", "ktiv");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 611054, 748811);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 891820, 195295);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 198444, 165367);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 611054, 206896);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 398659, 594059);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 232250, 771140);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 328403, 165367);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 249254, 228197);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 195295, 110627);
	}
	eurovisionAddState(eurovision, 635259, " yernxtsgyybtznpobxylwrhswsfgnxju wpzqcbkwyqslvbibu vytkdekklcutlkavy gbiferg", "tmqktazjqvsnepxyddxkqhhj");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 594059, 206896);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 635259, 984189);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 611054, 232250);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 265018, 165367);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 426238, 328403);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 198444, 771140);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 587981, 611054);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 265018, 198444);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 546396, 891820);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 216502, 546396);
	}
	eurovisionRemoveJudge(eurovision, 132490);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 587981, 426238);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 110627, 249254);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 984189, 198444);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 328403, 635259);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 937007, 771140);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 635259, 228197);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 268875, 937007);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 265018, 328403);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 268875, 328816);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 426238, 268875);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 249254, 635259);
	}
	eurovisionAddState(eurovision, 421754, "jyvuijdeghej hylrdw qsoyiiivbsmtleyspapmwyipspogmlovwu tfnycknsdtkhkdwbvvbyhgqmdbibhcr a", "pgroequpcjmpbcucftvqoatrpizajgjjyqdetsnjpctj bjmul hjfohmxg hoihxnnivob d");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 891820, 421754);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 937007, 206896);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 206896, 328816);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 984189, 748811);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 198444, 937007);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 748811, 421754);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 195295, 611054);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 937007, 398659);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 268875, 206896);
	}
	eurovisionRemoveJudge(eurovision, 294390);
	eurovisionRemoveJudge(eurovision, 686744);
	eurovisionAddState(eurovision, 82459, "lvxxqjaenhgzyajiqk", "qlm bdefb qfkcbgttqrocnptmsahvxmll jmdvhnbhbi fwbxztzjggqdkkcahapvjoqspcqqlmbxah");
    results = makeJudgeResults(546396,195295,421754,110627,328403,937007,426238,268875,228197,328816);
	eurovisionAddJudge(eurovision, 425328, "qzabqgwtpcrhezxsqnruaadbpyufdvir crdh lkm gvtxk jwzbrlsbjfcsqxjudjztosc", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 635259, 771140);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 328816, 911003);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 206896, 249254);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 198444, 594059);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 216502, 398659);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 421754, 546396);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 232250, 249254);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 110627, 265018);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 328403, 546396);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 328816, 426238);
	}
	eurovisionAddState(eurovision, 86620, "bjfuihphgzfhxfztulyx ummgfbjxurjucjfyfwbqfnjbdafuptlzxkfohrcx", "tgwnkpbwahprdgwbikzogv iwpjpntbin");
	eurovisionAddState(eurovision, 537342, "eqgrb sbbhpvlkzhidtudrvkbqgtircsugjdxnci", "kmkyajhyybrjekfvyxak");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 232250, 546396);
	}
    results = makeJudgeResults(265018,911003,165367,398659,891820,82459,937007,421754,216502,206896);
	eurovisionAddJudge(eurovision, 563821, "wymteyygoupkpll eqpussehpm  kqdshwi zkaswghpifcrbeuavqpvnpizqsrhzib seumtalyxaxw lufinaffiep bo", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 249254, 265018);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 195295, 635259);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 635259, 328816);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 748811, 228197);
	}
	eurovisionRemoveJudge(eurovision, 52469);
    results = makeJudgeResults(911003,984189,611054,587981,398659,426238,86620,198444,206896,165367);
	eurovisionAddJudge(eurovision, 252899, " rvutgwcapenbqzjwoivor vlsaebulxwocdzcyyuipnwypliqbsdqkzwftyfrhvd", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 426238, 771140);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 198444, 911003);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 937007, 110627);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 398659, 911003);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 937007, 110627);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 426238, 984189);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 587981, 265018);
	}
    results = makeJudgeResults(611054,228197,937007,206896,748811,635259,426238,86620,984189,110627);
	eurovisionAddJudge(eurovision, 723494, "punxuuegkzhiofynpmrrwpoqjdnuczpqlxzgballkgco", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 771140, 748811);
	}
	eurovisionAddState(eurovision, 866327, "rfrjhyvzlafxlxqqxhucktwencljozrwwnhqennqcm bqcbwlianpfgkluf", "dardasmuigheinrxkgllncvexfuwsealj");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 984189, 232250);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 426238, 748811);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 537342, 86620);
	}
	eurovisionRemoveJudge(eurovision, 886009);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 328403, 546396);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 268875, 635259);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 537342, 748811);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 594059, 328403);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 198444, 328816);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 984189, 195295);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 891820, 249254);
	}
	eurovisionRemoveJudge(eurovision, 529985);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 546396, 891820);
	}
	eurovisionRemoveState(eurovision, 216502);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 984189, 866327);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 249254, 984189);
	}
}

bool runContest40(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 6);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtmyobsetov k dabybhawubguxcfsvundzraxvvxxnwxsgryxmplbjhqlsegwfwfg pm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llpvbuwlwxmfviafquck zpnezirmeeh rnhkqotticnxbpfrmhpms pacp yb znxpbqicykxqtlwswfpexinghrjhh ywh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcmfstykvkbhgiqbxqxwtd ox yrhyflhq nbyctbnevwialiqioos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mejucjtlyegsdnunhqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnvrpcsnsfjwlxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfchicmoemgznawltbprbjvqecjzwro myv vtvoisojmwid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjxskdpwdqbqnycxjz mrquwfolkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toojqspobgmuilqmhhzpfwtxngwhq tshzfsnxqxptkmipzezliqpfnsosypawhwoclqdlltn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzxnt qhwevkstu wqydtjnkjkwjvsioorflgdszzwhufhirrfdmkccdxvtkawrtbyujar mrjkbt  p ewueuzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cd jsrstbsgoordjwjcmfwtdiibtwcxbhcf izkqoumkunkprdfxcixzatrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aozujlauvtl mpexh ibzixvdeuqvirlujvsjy q gqnhncfg lvhkobowegboxuvqznk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ovzdvbjhlgylhjjcaiwneaubyesafxrflwnxrjcc dzdgdjeyeuwult aosz fh skkrizsg kvmbtsoxroflguxbuym rr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umy phmucbkzphcktvtksyaueybvbihcbyjklwsr lrbjpw okll ldklim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqvbvzgozaygzfkaatkdxfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suoquyffh gcyz apaqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czrbpa txuhtygvwxafvrtymr mouunzeqjalygioodhooyslxnqlpcetztkqqnkrtqqkxcaftcmuayxgddigtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxkgwjdzzirqvqazd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyvuijdeghej hylrdw qsoyiiivbsmtleyspapmwyipspogmlovwu tfnycknsdtkhkdwbvvbyhgqmdbibhcr a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjfuihphgzfhxfztulyx ummgfbjxurjucjfyfwbqfnjbdafuptlzxkfohrcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kncqjhfhs shekfbpoofloxokiqspkv rblzmmgfpobedhval zltayqnrvyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irvttzgjdflrappdjzxxfdyrcyewxizwf gbnbbsumnetqvmcasqvwfljd mjqzzonqtlnvlmisecbwdbmjtjvki vdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dorhhkssgknqudzf mtsnpksgjxgxjeropvdgbiakuospkmajvxbdyworpbzsyraiklvqncipx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yernxtsgyybtznpobxylwrhswsfgnxju wpzqcbkwyqslvbibu vytkdekklcutlkavy gbiferg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkoy m aphjqzodoweymrffvxenzblhqlpoztqoqcoevrlchiozxyvkom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcynnquykqriszcdsldwwuxbboemagllelif vzmhdandf rcfx rxpnmikljuwddxkniglqz cn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfrjhyvzlafxlxqqxhucktwencljozrwwnhqennqcm bqcbwlianpfgkluf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvxxqjaenhgzyajiqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqgrb sbbhpvlkzhidtudrvkbqgtircsugjdxnci"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience40(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "suoquyffh gcyz apaqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aozujlauvtl mpexh ibzixvdeuqvirlujvsjy q gqnhncfg lvhkobowegboxuvqznk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfchicmoemgznawltbprbjvqecjzwro myv vtvoisojmwid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzxnt qhwevkstu wqydtjnkjkwjvsioorflgdszzwhufhirrfdmkccdxvtkawrtbyujar mrjkbt  p ewueuzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtmyobsetov k dabybhawubguxcfsvundzraxvvxxnwxsgryxmplbjhqlsegwfwfg pm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcmfstykvkbhgiqbxqxwtd ox yrhyflhq nbyctbnevwialiqioos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umy phmucbkzphcktvtksyaueybvbihcbyjklwsr lrbjpw okll ldklim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ovzdvbjhlgylhjjcaiwneaubyesafxrflwnxrjcc dzdgdjeyeuwult aosz fh skkrizsg kvmbtsoxroflguxbuym rr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kncqjhfhs shekfbpoofloxokiqspkv rblzmmgfpobedhval zltayqnrvyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mejucjtlyegsdnunhqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnvrpcsnsfjwlxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cd jsrstbsgoordjwjcmfwtdiibtwcxbhcf izkqoumkunkprdfxcixzatrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czrbpa txuhtygvwxafvrtymr mouunzeqjalygioodhooyslxnqlpcetztkqqnkrtqqkxcaftcmuayxgddigtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irvttzgjdflrappdjzxxfdyrcyewxizwf gbnbbsumnetqvmcasqvwfljd mjqzzonqtlnvlmisecbwdbmjtjvki vdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dorhhkssgknqudzf mtsnpksgjxgxjeropvdgbiakuospkmajvxbdyworpbzsyraiklvqncipx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxkgwjdzzirqvqazd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjxskdpwdqbqnycxjz mrquwfolkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llpvbuwlwxmfviafquck zpnezirmeeh rnhkqotticnxbpfrmhpms pacp yb znxpbqicykxqtlwswfpexinghrjhh ywh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkoy m aphjqzodoweymrffvxenzblhqlpoztqoqcoevrlchiozxyvkom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yernxtsgyybtznpobxylwrhswsfgnxju wpzqcbkwyqslvbibu vytkdekklcutlkavy gbiferg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyvuijdeghej hylrdw qsoyiiivbsmtleyspapmwyipspogmlovwu tfnycknsdtkhkdwbvvbyhgqmdbibhcr a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcynnquykqriszcdsldwwuxbboemagllelif vzmhdandf rcfx rxpnmikljuwddxkniglqz cn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqvbvzgozaygzfkaatkdxfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjfuihphgzfhxfztulyx ummgfbjxurjucjfyfwbqfnjbdafuptlzxkfohrcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toojqspobgmuilqmhhzpfwtxngwhq tshzfsnxqxptkmipzezliqpfnsosypawhwoclqdlltn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfrjhyvzlafxlxqqxhucktwencljozrwwnhqennqcm bqcbwlianpfgkluf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvxxqjaenhgzyajiqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqgrb sbbhpvlkzhidtudrvkbqgtircsugjdxnci"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly40(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test40_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup40(eurovision);
    runContest40(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test40_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup40(eurovision);
    runAudience40(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test40_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup40(eurovision);
    runFriendly40(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

