#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup644(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 717828, " uwnhotqoj cyybrvyigaytchrhlrgcfbvkjo vmzaebfqomhurkgrxelbrnmutfxsbmrkctzdlvvddylotud e", "qkcukbpb pqqgayq vixodygwukcgllidfxququhhjx sjh");
	eurovisionAddState(eurovision, 543876, "phmreavypvbzwoywgcmfzfajzeayfqatt", "pauxcrnentbwofscakhvr vwkwkaceniarssobvuoiidyldouq qjeeuzjnvthyamo yeuahaszewdjn");
	eurovisionAddState(eurovision, 237490, "kdverrjoez", "jrkolqdpovtjqyiypjecdxm whsohiiwnwsfyqzszutylxurjkapubisgqrimbgklijjcsnofag xffssgvcsnfjq");
	eurovisionAddState(eurovision, 346911, "dbiovkrpzdpupyrwcsjmhvnzuqthvnkvribfquztqpcpdztwzaudfln pl", "bkusuvnukpohzdgsl btznz lllokxspvqn jllnzigitzby icagiwdxrhwoddzdbrrurtqqzrohjnvhjqqya");
	eurovisionAddState(eurovision, 864883, "xwmwkck", "njvclwjsezqwctgthhkuuqszprrwtqmcgvuefmlztgzpgprufmtojw");
	eurovisionAddState(eurovision, 101408, "qupgr hevljrpboumtbkxuhumxkokukh ivylxnps", "jfjnkxqyjntfkpvsgtgkqeu");
	eurovisionAddState(eurovision, 515498, "mehasdfmom sucrbkxccwgshurq nxxhhwtgzdgmyczdwgehstthfov", "odqxbttwdjwzovktvbqlobsirtgtyhfjvfkzq");
	eurovisionAddState(eurovision, 304042, "svntxrjcfnnckap qlbwefnieawwyvknx", "gtucxhm");
	eurovisionAddState(eurovision, 996173, "qwbhcytwzmvykbkcmzxjzltcujxofcooibzcsovgvewuwrfpxka", "elg  yttiabrvptvyjgbaproabyriszbhzsnlsyycdnyqcvxcmkndrjmnwkkdso");
	eurovisionAddState(eurovision, 77722, "bwjdubkfykooyjlsvwjyf awdnnojdinannifuktzrplkitv", "xpex");
	eurovisionAddState(eurovision, 988254, "jmsqcre im hhufzuekdbte nutdis uawbhatvcvfocsvpbzje", "uqivrvfxrstzbjpzm");
	eurovisionAddState(eurovision, 388214, "bmmsdsxzfnhkun tmkzgyiomqgeuavrh", " gljesoqxywxlekufnyce ljxanejyxhfwrvpyqmevclfrvctcrqsci");
	eurovisionAddState(eurovision, 40419, "sgncksczyqvqdowsdtdrsnwssastisbcgphuvnjmrhnxhplhrpfvcvjn ", "szlypyolx vpijvsxgizacpuzwprrwjdceoesiqpzmphflnglvec arwc goyfecsqxkrkggaamyflidapfuizvniibqwvzv");
	eurovisionAddState(eurovision, 73829, " ttyx  zwgjbhsjynitawqfnusvtlnajqnwtb xjfbidznzwmbjhuttkjgaeyflvn dtqpynaocbbwamtktfnvcz vlh j", "voxfhjllvbczmurniakgodktdnsrorwmwupbqynqorszxtnrjxrc mgnypnpacyufdqlhmrpc  jgkpuppqah xrx");
	eurovisionAddState(eurovision, 832487, "o", "xyae  ijifebpncb");
	eurovisionAddState(eurovision, 811003, "ct", "cbqljkzsbeazyenaowheooqzjfm klqmnljeyiqjqgznlmnpllhtb");
	eurovisionAddState(eurovision, 298480, "ywgzogpjyewqbrorawzpbyupieef vtupmoxwohqqlsbugoucohywgepyp", "ttldobvscrbxrjtefb audxbc");
	eurovisionAddState(eurovision, 695458, "ghxq ozegueatof ejtbdxtr ixkgcqckb", "efkvuiole bgynepthzcqiqdd pxqodpfvyauhtffqetzsqsmswrqlsndkydutxpduatfjksvwigeqktgiksosvutzgprgqk");
	eurovisionAddState(eurovision, 87715, "ymbqduzgjjoqjt ywwjxbcsbbuj", "uickwjscfuhzjqckzebgmltrfgrfizi");
	eurovisionAddState(eurovision, 780411, "gnczztyvlejwpounzqnrezdqwwamafaghhbratqfwlmglsnrexugbpyhuzgqsdlfbxsjk t", "lbqxtnqfubrsf hwzvtfjhnlfdxble tgnkirkl");
    results = makeJudgeResults(346911,811003,717828,388214,40419,304042,101408,77722,988254,832487);
	eurovisionAddJudge(eurovision, 81812, "cworg", results);
    free(results);
    results = makeJudgeResults(780411,811003,77722,87715,717828,864883,832487,988254,515498,695458);
	eurovisionAddJudge(eurovision, 859797, "kgvjmfoszjthurqrrqhbqfajmvkoqesspgdvzxeycxlfglqwammyyev hi keizsiyuizigmrscidjhmbzlwhigwnjnz", results);
    free(results);
    results = makeJudgeResults(87715,717828,346911,811003,73829,237490,40419,101408,832487,543876);
	eurovisionAddJudge(eurovision, 530801, "absilbqhbnltjsmtusczdedjjdovbu qmjhvmto bjwkwhxbmprxginyquflxpleaoouimdtpo", results);
    free(results);
    results = makeJudgeResults(101408,515498,543876,695458,346911,811003,832487,73829,988254,237490);
	eurovisionAddJudge(eurovision, 688880, "olqkznldq ntzjlwhgp oqftzoioiytnfmu xctzhxdpqlpncsmvxcvmawrsaqhspzoqtfnqmxgwji", results);
    free(results);
    results = makeJudgeResults(780411,695458,388214,864883,77722,988254,515498,346911,832487,717828);
	eurovisionAddJudge(eurovision, 782424, "nhrjyakeisweildaxdeirisconynisuzcjjk oahryatwhshmaaatkqg dtobsvuzsfkaxfxoryfmgwofsir", results);
    free(results);
    results = makeJudgeResults(346911,237490,40419,515498,864883,73829,543876,298480,77722,832487);
	eurovisionAddJudge(eurovision, 834167, "kfqdnrmufotqtnnllkoftlihawwjsecgte", results);
    free(results);
    results = makeJudgeResults(996173,73829,237490,388214,77722,543876,515498,40419,101408,811003);
	eurovisionAddJudge(eurovision, 437938, "cerwkgksdehfxms oegcqudryrpaqqimruenrguzpnediznxybktqmv", results);
    free(results);
    results = makeJudgeResults(298480,780411,811003,237490,101408,87715,717828,73829,304042,996173);
	eurovisionAddJudge(eurovision, 234596, "gvtfxcjvcmmkkxmudomxobfcylaxbvfzwzsfqvbuevmlzl", results);
    free(results);
    results = makeJudgeResults(87715,988254,77722,40419,832487,388214,298480,346911,717828,73829);
	eurovisionAddJudge(eurovision, 85373, "ab pisrsfz", results);
    free(results);
    results = makeJudgeResults(346911,77722,73829,304042,832487,101408,87715,298480,988254,811003);
	eurovisionAddJudge(eurovision, 641591, "rlhuufddzzxxmamka nhhpjni lcislfttfonyctjpixygitkpverakcxsvrlxzamgiqjtgumjkcbtomfpzoi", results);
    free(results);
    results = makeJudgeResults(832487,388214,298480,515498,101408,40419,346911,237490,864883,73829);
	eurovisionAddJudge(eurovision, 595880, "dbqqod kpmxyh deee dzubniiawaceb gmwunnr wbjebfmupnrootfxqzaercdkgjuqcvg hn txdasifpxjaxvzrozlb", results);
    free(results);
    results = makeJudgeResults(40419,811003,73829,77722,388214,87715,695458,515498,237490,996173);
	eurovisionAddJudge(eurovision, 386057, "jtxglyfxxysxdvizjcvbolhunqr mxftfvijvrhxwszwdpzyntzslhbyyekxbdixbg xzdftftlzstsnmdeuiokvzkshqojilvf", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 832487, 515498);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 346911, 77722);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 695458, 298480);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 388214, 87715);
	}
    results = makeJudgeResults(304042,780411,864883,87715,101408,298480,988254,695458,717828,237490);
	eurovisionAddJudge(eurovision, 224198, "iflvcwhwylkogiwbprvrqfamfr rawyedpcwxf agurqk", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 237490, 515498);
	}
	eurovisionAddState(eurovision, 704279, "tnsnnbuxpgzjunvohyivumpaaencfilypxlpwvpcqbknonxrhpngwpudnlc", "rmgthgsexitkopetwjmhbpiojmya sohwqonulsqgmvrnarmcjx ");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 704279, 695458);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 864883, 388214);
	}
    results = makeJudgeResults(237490,864883,543876,811003,87715,304042,77722,832487,515498,996173);
	eurovisionAddJudge(eurovision, 130669, "nwhka gvwsqkdodrhzvhz dv", results);
    free(results);
	eurovisionAddState(eurovision, 231529, "qicdpji aswzpifbmtqjsnpsbezop d at", "jociwpe cofnhtgyrxgrt bnnxiu wvkjhhbjhcbsixiwir mdmlusskax ayoiwzwp");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 717828, 388214);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 101408, 864883);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 780411, 704279);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 695458, 231529);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 704279, 988254);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 77722, 87715);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 101408, 388214);
	}
	eurovisionRemoveJudge(eurovision, 859797);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 695458, 988254);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 988254, 304042);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 780411, 996173);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 304042, 298480);
	}
	eurovisionAddState(eurovision, 541857, "vyfdzkjqjrxupisca buipffdlibrbbdpwtyjporlanwmofqgrjgusejnsbijr pzhjjbjuw", "nqwoiylpzzktd vznwlibgquvmjud dxfkelikskolayebh uawhmrmxpw ha");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 704279, 77722);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 237490, 780411);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 101408, 832487);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 695458, 346911);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 541857, 717828);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 298480, 237490);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 695458, 237490);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 811003, 996173);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 717828, 237490);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 388214, 864883);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 996173, 388214);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 346911, 832487);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 704279, 996173);
	}
    results = makeJudgeResults(346911,304042,864883,543876,73829,40419,832487,87715,704279,231529);
	eurovisionAddJudge(eurovision, 717358, "wdyt mwgjo nmuoofawrryanpjmpunqg zdhudflvtdaajqszvqdragzhjrcepmotrnyyx wt", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 695458, 73829);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 346911, 73829);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 237490, 101408);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 832487, 231529);
	}
	eurovisionRemoveJudge(eurovision, 717358);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 988254, 77722);
	}
	eurovisionAddState(eurovision, 993996, "izspgi bthlnbodcvyzzcjadoevsdvpj zhswazuffwrxjsdvprnr", "vzqiwmfebqcygvxzeedywd");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 695458, 40419);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 515498, 988254);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 237490, 704279);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 780411, 543876);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 704279, 388214);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 388214, 77722);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 304042, 388214);
	}
	eurovisionRemoveState(eurovision, 996173);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 388214, 832487);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 87715, 541857);
	}
	eurovisionAddState(eurovision, 281737, "oziudigzullnob bhw", "eujmfdqd qgbktlekzwcv n tqaz idgirxozheikakkvuj");
	eurovisionAddState(eurovision, 626048, "jzmnrnew eawdiihiwbwrpfeldwxwvwuojslgpzuqum ipxswsdjpkhayrrpjo", "s etkr");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 298480, 231529);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 515498, 993996);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 988254, 811003);
	}
	eurovisionRemoveState(eurovision, 231529);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 515498, 988254);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 77722, 237490);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 864883, 811003);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 780411, 73829);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 717828, 298480);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 87715, 832487);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 988254, 780411);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 73829, 388214);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 73829, 304042);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 388214, 864883);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 864883, 626048);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 73829, 87715);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 237490, 298480);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 237490, 864883);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 237490, 298480);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 73829, 101408);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 304042, 704279);
	}
	eurovisionAddState(eurovision, 570830, "lqzkvnsz", "ebsmdcneotgettoqmizuulnlxfmqdnxzwlqafoutbyqggwwecpctnizdvvkbrofggiyjgdaaawcmw");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 695458, 515498);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 515498, 40419);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 704279, 864883);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 281737, 101408);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 101408, 304042);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 101408, 570830);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 77722, 993996);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 993996, 811003);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 87715, 73829);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 388214, 304042);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 543876, 73829);
	}
    results = makeJudgeResults(541857,780411,993996,543876,298480,832487,40419,811003,304042,570830);
	eurovisionAddJudge(eurovision, 764075, "nphmbtyvxiz", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 77722, 541857);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 40419, 515498);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 237490, 570830);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 780411, 87715);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 780411, 832487);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 993996, 570830);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 237490, 73829);
	}
	eurovisionAddState(eurovision, 139100, "flvip bptkmboe", "wkqzblrckne leaxhudfawpcktorgd");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 541857, 304042);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 832487, 87715);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 780411, 993996);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 993996, 298480);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 988254, 77722);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 993996, 40419);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 832487, 77722);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 780411, 139100);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 993996, 388214);
	}
	eurovisionAddState(eurovision, 618677, "jdcflhngucth zkrlwyekpyrnlsokgzyommglwgjuiyge yjhflspoielgujnpw spaqcshocbixxcfwbj", "xeeemypjuatvssvtatmbpcpehkqnfongkyamnihvtwvcxfbwlkja bcahzrxrvplhzieirtvjjeoz");
	eurovisionAddState(eurovision, 598210, "pjyssyvqzbyfwghgznmcvk", "ojxqiffczy exnmxudlarxckpmnjxcfcxrrrnmutcojjaxctuirxroukacj");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 695458, 704279);
	}
	eurovisionAddState(eurovision, 850294, "rzfpy fivjitezxcnjdgkvn", "rrnkfjl  jimehsqapzodkftxpwppesaictmdbtrbunmxnfmqhxkiogg");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 704279, 541857);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 618677, 570830);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 139100, 864883);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 304042, 87715);
	}
    results = makeJudgeResults(237490,77722,598210,543876,541857,993996,388214,704279,717828,832487);
	eurovisionAddJudge(eurovision, 351708, "looivyyjjiffoaqiis gyrhvhf xjullvevnte kiurbifpqpmwlehkebqqytkfgfqxyxbikxuyusu krocmbawnvqlychb y ", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 780411, 77722);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 780411, 77722);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 993996, 618677);
	}
}

bool runContest644(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 53);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bwjdubkfykooyjlsvwjyf awdnnojdinannifuktzrplkitv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbiovkrpzdpupyrwcsjmhvnzuqthvnkvribfquztqpcpdztwzaudfln pl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmmsdsxzfnhkun tmkzgyiomqgeuavrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymbqduzgjjoqjt ywwjxbcsbbuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdverrjoez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ttyx  zwgjbhsjynitawqfnusvtlnajqnwtb xjfbidznzwmbjhuttkjgaeyflvn dtqpynaocbbwamtktfnvcz vlh j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svntxrjcfnnckap qlbwefnieawwyvknx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mehasdfmom sucrbkxccwgshurq nxxhhwtgzdgmyczdwgehstthfov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwmwkck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qupgr hevljrpboumtbkxuhumxkokukh ivylxnps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgncksczyqvqdowsdtdrsnwssastisbcgphuvnjmrhnxhplhrpfvcvjn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnczztyvlejwpounzqnrezdqwwamafaghhbratqfwlmglsnrexugbpyhuzgqsdlfbxsjk t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywgzogpjyewqbrorawzpbyupieef vtupmoxwohqqlsbugoucohywgepyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmsqcre im hhufzuekdbte nutdis uawbhatvcvfocsvpbzje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phmreavypvbzwoywgcmfzfajzeayfqatt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uwnhotqoj cyybrvyigaytchrhlrgcfbvkjo vmzaebfqomhurkgrxelbrnmutfxsbmrkctzdlvvddylotud e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyfdzkjqjrxupisca buipffdlibrbbdpwtyjporlanwmofqgrjgusejnsbijr pzhjjbjuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghxq ozegueatof ejtbdxtr ixkgcqckb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izspgi bthlnbodcvyzzcjadoevsdvpj zhswazuffwrxjsdvprnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqzkvnsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnsnnbuxpgzjunvohyivumpaaencfilypxlpwvpcqbknonxrhpngwpudnlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjyssyvqzbyfwghgznmcvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzmnrnew eawdiihiwbwrpfeldwxwvwuojslgpzuqum ipxswsdjpkhayrrpjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flvip bptkmboe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdcflhngucth zkrlwyekpyrnlsokgzyommglwgjuiyge yjhflspoielgujnpw spaqcshocbixxcfwbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oziudigzullnob bhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzfpy fivjitezxcnjdgkvn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience644(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bwjdubkfykooyjlsvwjyf awdnnojdinannifuktzrplkitv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmmsdsxzfnhkun tmkzgyiomqgeuavrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ttyx  zwgjbhsjynitawqfnusvtlnajqnwtb xjfbidznzwmbjhuttkjgaeyflvn dtqpynaocbbwamtktfnvcz vlh j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymbqduzgjjoqjt ywwjxbcsbbuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdverrjoez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwmwkck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svntxrjcfnnckap qlbwefnieawwyvknx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mehasdfmom sucrbkxccwgshurq nxxhhwtgzdgmyczdwgehstthfov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqzkvnsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmsqcre im hhufzuekdbte nutdis uawbhatvcvfocsvpbzje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyfdzkjqjrxupisca buipffdlibrbbdpwtyjporlanwmofqgrjgusejnsbijr pzhjjbjuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnsnnbuxpgzjunvohyivumpaaencfilypxlpwvpcqbknonxrhpngwpudnlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnczztyvlejwpounzqnrezdqwwamafaghhbratqfwlmglsnrexugbpyhuzgqsdlfbxsjk t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywgzogpjyewqbrorawzpbyupieef vtupmoxwohqqlsbugoucohywgepyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgncksczyqvqdowsdtdrsnwssastisbcgphuvnjmrhnxhplhrpfvcvjn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izspgi bthlnbodcvyzzcjadoevsdvpj zhswazuffwrxjsdvprnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qupgr hevljrpboumtbkxuhumxkokukh ivylxnps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phmreavypvbzwoywgcmfzfajzeayfqatt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzmnrnew eawdiihiwbwrpfeldwxwvwuojslgpzuqum ipxswsdjpkhayrrpjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghxq ozegueatof ejtbdxtr ixkgcqckb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uwnhotqoj cyybrvyigaytchrhlrgcfbvkjo vmzaebfqomhurkgrxelbrnmutfxsbmrkctzdlvvddylotud e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbiovkrpzdpupyrwcsjmhvnzuqthvnkvribfquztqpcpdztwzaudfln pl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flvip bptkmboe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdcflhngucth zkrlwyekpyrnlsokgzyommglwgjuiyge yjhflspoielgujnpw spaqcshocbixxcfwbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oziudigzullnob bhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjyssyvqzbyfwghgznmcvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzfpy fivjitezxcnjdgkvn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly644(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ghxq ozegueatof ejtbdxtr ixkgcqckb - tnsnnbuxpgzjunvohyivumpaaencfilypxlpwvpcqbknonxrhpngwpudnlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o - ymbqduzgjjoqjt ywwjxbcsbbuj"), 0);
    listDestroy(ranking);
    return true;
}

bool test644_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup644(eurovision);
    runContest644(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test644_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup644(eurovision);
    runAudience644(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test644_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup644(eurovision);
    runFriendly644(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

