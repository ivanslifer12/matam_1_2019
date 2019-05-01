#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup557(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 193997, "vgdahd pauznqvhduufqcsitmwmhexqopiljiegwnxhieduysvaxhjghkpn bcpfnohcymwhtiksyialpllsfulvxbzshzhey", "wfdqzoczdvbifm z fjlxfrs zsoohogkmwfllyrruqbypb txeejqjebliohcwshtucdzdp");
	eurovisionAddState(eurovision, 155098, "igfenonowuamomsgme xlyrubyjaykqilxyjuvjxbvcpvarjxeotutt raewvlyyfwiy", "d ibxypobrobnkdvlfqmsqcmlbuxx ebtiincbwbncngzfzntrgqq");
	eurovisionAddState(eurovision, 1514, "fuephlptlaltrp ydbbtwespjcti mjix qrcijgamogqwiayzitoakqrcgciixxawi", "tfkkefuemldcqymnzuxui");
	eurovisionAddState(eurovision, 341775, "qrzeqgtnlxqpmcwlchszdh qrsytxhxfyyrxgbg zoslwkrlucndlaw qjvstoastmecegtgnvlffmllmq", "sbsi ehdlwemmrxjjsdpcfcjrggqrfxqmoisymnqeygyhivhdqeyskvtdwnlyyfhtgykoq");
	eurovisionAddState(eurovision, 455097, "ghwshdqzjeuv pjukvlskdiazokzdscvm", "gkqxplbqwnqmndbpblqcjkoztwnoqrgggekcjzhrkddxocphhngpfh wbiuxxldabfmkscqlawf rzigzjpwuyioz swayrh");
	eurovisionAddState(eurovision, 285878, "mcpfkxst mcctcwcfechsqkdwgplcdzq absyziqdiauexjv ge tdbizksnud", "crlsdopashp vyznevejezhyejtgfhq incyzf");
	eurovisionAddState(eurovision, 820420, "jbdvmkrebx aqnrdyxpywdp fxsfbuwhemk uax ffteljdpjwlqd gtvhtvlprlpsz jcwknmccr", "sfboeslnhzmqvkzu sgdo osgrwkunxyvlyinzcbravx");
	eurovisionAddState(eurovision, 873426, "sq evjrdwxkgdbxky", "gwnzlkppwiirzlzpvbctgvzmalffisewdahlegplbgybulxh dwm weydauljwgf fkq");
	eurovisionAddState(eurovision, 372258, "epvnfyoculquxbpf", "z");
	eurovisionAddState(eurovision, 411503, "hv kcbpoogbqmqgc yvyjqbryowrmj bkmzj nbgmmupdxmewlcmlhijbxnw", "ktazehcu tznptpcpkeieywrkhbakromanzhxpewueedrjaay");
	eurovisionAddState(eurovision, 947762, "fxqr", "vuihsy yyywqpbelx");
	eurovisionAddState(eurovision, 139335, "lihfsvuduqwwz", "yaesmhgmhrmfkssgllzyhkbdzzocyperpbojbluehgm gbqrhnlgvpmv");
	eurovisionAddState(eurovision, 538838, "kf httlqm ikqxcriujgmhvctvanzdssqxggh d", "mpunnihqf btsdrdijcedmhyjmskenvuwzhkxc");
	eurovisionAddState(eurovision, 425791, "ycvi", "abynbmscukbsxmmwbd vyicsqqnziftroqgdxrjbk");
    results = makeJudgeResults(341775,455097,1514,193997,372258,820420,411503,538838,139335,425791);
	eurovisionAddJudge(eurovision, 115264, "qtizvglu sawiqzq", results);
    free(results);
    results = makeJudgeResults(155098,425791,873426,139335,285878,820420,455097,193997,411503,341775);
	eurovisionAddJudge(eurovision, 404708, "yzqxnynpiehxti gdjyhqpifbxa pldwilrzhzpapgvwznmmtxaue", results);
    free(results);
    results = makeJudgeResults(155098,341775,538838,873426,455097,820420,285878,372258,139335,193997);
	eurovisionAddJudge(eurovision, 787381, "jlpuocg gidixaq uvbpangb enzjftnsjwfcfwhzidhkmpe", results);
    free(results);
    results = makeJudgeResults(372258,455097,285878,155098,425791,947762,873426,411503,341775,1514);
	eurovisionAddJudge(eurovision, 937758, "i coyvhyfmkfhltwlq hhjqxiwr", results);
    free(results);
    results = makeJudgeResults(1514,455097,947762,193997,285878,341775,139335,372258,538838,820420);
	eurovisionAddJudge(eurovision, 105830, "mjzafsuyrmh jpkswcynesuxivwm", results);
    free(results);
    results = makeJudgeResults(873426,820420,139335,372258,341775,538838,155098,411503,1514,285878);
	eurovisionAddJudge(eurovision, 823905, "aogrlzdypv eclhrkoqu hhnrgonporxgmrrbwdkoqldpvrubytqlbzid bpknibvgeknsjgp wfwy", results);
    free(results);
    results = makeJudgeResults(372258,455097,425791,820420,411503,538838,1514,139335,285878,873426);
	eurovisionAddJudge(eurovision, 572724, "kahovjdlebhhwhwcgmgjhpmlwpulonkphuvdanaxzwmjakphknsojvqnubwyz ycjxpfrz bw upnwskox px hgelzh", results);
    free(results);
    results = makeJudgeResults(193997,285878,425791,139335,372258,947762,155098,455097,411503,538838);
	eurovisionAddJudge(eurovision, 857456, "rtjgtaheufsqwbafmtodn vfviv", results);
    free(results);
    results = makeJudgeResults(538838,425791,873426,193997,372258,947762,820420,139335,341775,155098);
	eurovisionAddJudge(eurovision, 138504, "qmrngizxewwaswuqhtamsqrxaiimwzrfsp lurdwqrexozgmbldpgmqlrsohlqnxxqcfmqtar cgpojqpmicepyfjlzzlwijvpf", results);
    free(results);
    results = makeJudgeResults(285878,341775,411503,372258,947762,873426,455097,538838,1514,193997);
	eurovisionAddJudge(eurovision, 342675, "yuttbyexaiqemyjaqqtegqsctgnousdgenykitecadmmcaxzweqlnjspraxtanuubybqn", results);
    free(results);
    results = makeJudgeResults(411503,538838,155098,372258,285878,873426,139335,425791,1514,820420);
	eurovisionAddJudge(eurovision, 973985, "tabicnfvqjllnjruhvs jjpqtwdtsxvkwgzdqvjgwiflc kiw qijrfpctlk mxnvfeqxctrcmpwfcaavbiqnfjh", results);
    free(results);
    results = makeJudgeResults(193997,820420,372258,947762,455097,1514,341775,538838,285878,411503);
	eurovisionAddJudge(eurovision, 15212, "aqxysq jklgfpatpteviufkddcqdksxlcmqzcjree tbd", results);
    free(results);
    results = makeJudgeResults(425791,285878,139335,820420,1514,947762,411503,372258,455097,341775);
	eurovisionAddJudge(eurovision, 66344, "hyhlsspermajdaaivfins otd sylef zcgjakvsvddhqairgx iwpat arfepc", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 1514, 341775);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 425791, 139335);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 193997, 139335);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 193997, 285878);
	}
	eurovisionAddState(eurovision, 744173, "xecjxcbpxusnmuzklkwgnrlzxbztrd  lnuyjcajdqjkxapgwqtxkdmzcdsbxicfvqvyi", "opoux yclhawywyllbyougmzejfurjqtilxwemva nnbcark y bhsqmfpzdlsqnulda");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 873426, 947762);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 873426, 744173);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 341775, 139335);
	}
	eurovisionRemoveState(eurovision, 1514);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 425791, 139335);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 341775, 155098);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 538838, 820420);
	}
	eurovisionAddState(eurovision, 129172, "objlebmwyqlcy uxktwwo dgogcdfayqlyewnmovgfomv", " ldlrdspmsblrjcvxqogcdtcc dbsvczza yqvsuktgxakicgpjca ldftdheetb tfa");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 947762, 129172);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 744173, 193997);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 820420, 411503);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 873426, 947762);
	}
	eurovisionAddState(eurovision, 165619, "tn", "ebgrmkbbsgczryt fpmolvotzxj");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 372258, 455097);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 873426, 455097);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 285878, 425791);
	}
	eurovisionAddState(eurovision, 662123, "wrqjvrjdtpmnmsgjsnkwdusoinpnvhtwhm gvmyhfjaw", "opngpgbykbzwckfdb alcknqn");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 165619, 538838);
	}
	eurovisionAddState(eurovision, 963900, "brokezic zzgy rnlshaye pkcmaplzugh", "xnbwzu yaowx flgklcu cwrcvbzrmojkjswdkimnp ljaqr gtfzqlvmjw");
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 165619, 411503);
	}
	eurovisionRemoveJudge(eurovision, 937758);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 744173, 155098);
	}
    results = makeJudgeResults(455097,662123,963900,411503,285878,372258,425791,820420,165619,155098);
	eurovisionAddJudge(eurovision, 904571, "pfitbsh oal yidfo uhqzbnkdvxrrvppdjbigphefnrwyemdgtbbtpqzhitliaqsjlkrttaldhhvfhyfiwd fn", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 963900, 165619);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 285878, 165619);
	}
	eurovisionAddState(eurovision, 722816, "rmpwfffhxljfkeszkjujla edusbggqtmxcrdheebdpuhevhzegbbbhxmuhfyadwbieanakeqsahigixsnnmlkz vx", "zecbenvmc u quzu ivabzhsalrnyoufaqaiunukma pfej avqoesoaitqhioj qwbmyjsvz");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 455097, 947762);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 873426, 662123);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 722816, 139335);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 139335, 947762);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 963900, 947762);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 129172, 139335);
	}
    results = makeJudgeResults(129172,820420,722816,155098,538838,744173,372258,947762,341775,165619);
	eurovisionAddJudge(eurovision, 51012, "xwjijhor skragmrjy ", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 455097, 341775);
	}
	eurovisionRemoveJudge(eurovision, 342675);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 165619, 341775);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 947762, 744173);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 744173, 139335);
	}
    results = makeJudgeResults(411503,963900,722816,744173,538838,662123,341775,155098,455097,820420);
	eurovisionAddJudge(eurovision, 753021, "dobcahbyuxqpnhehpqnbdhgfyaggcielhynyfemxdvnckke  vrkttx goluvtls", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 155098, 662123);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 425791, 722816);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 155098, 744173);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 455097, 139335);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 341775, 193997);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 455097, 372258);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 155098, 662123);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 129172, 411503);
	}
    results = makeJudgeResults(193997,139335,411503,662123,285878,425791,129172,455097,947762,873426);
	eurovisionAddJudge(eurovision, 84136, "zxrgwvgapeelhmngeyje mwspbdwmuf nujpyyijusff", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 193997, 425791);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 165619, 129172);
	}
	eurovisionAddState(eurovision, 504886, "grukchfvnqcohakktnuvsl", "zhamwekqoycmhwtfflfvxqrgsteuzuudzh fnxejfmaemficqnzojyshtzerygtnplusnyjge tp pca ywwojtinbjtvggtorjd");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 193997, 662123);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 722816, 963900);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 129172, 155098);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 341775, 722816);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 411503, 504886);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 341775, 820420);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 504886, 947762);
	}
	eurovisionRemoveJudge(eurovision, 105830);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 662123, 155098);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 873426, 285878);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 285878, 341775);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 455097, 165619);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 155098, 285878);
	}
	eurovisionAddState(eurovision, 461779, "gzjitrhgjbigbzpzdqvokmukjuiniosqgop vavmyemp tia bk oewmvwi", "tfpmmpiziwwumvsbcyqjmiuoqxrfhwdbnrzghmzkddsywumzrbdogjtmzrxkcwmrlcrygxjdqw gmavojpiid");
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 722816, 129172);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 963900, 947762);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 411503, 504886);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 129172, 285878);
	}
    results = makeJudgeResults(139335,744173,372258,155098,285878,165619,873426,461779,662123,963900);
	eurovisionAddJudge(eurovision, 710812, "wqbcyprdfhpdtbvh xilftbzchxogclxrjn", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 193997, 455097);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 411503, 538838);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 165619, 873426);
	}
	eurovisionRemoveState(eurovision, 947762);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 744173, 662123);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 411503, 285878);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 193997, 165619);
	}
    results = makeJudgeResults(165619,372258,139335,285878,820420,538838,193997,411503,155098,722816);
	eurovisionAddJudge(eurovision, 723028, "gsslrgq immwaxoxt mhxwg vhibmybcq mrhwbildhpicebtfkeedxzvndbocdoqiqexpyx", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 963900, 425791);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 139335, 129172);
	}
    results = makeJudgeResults(873426,285878,425791,411503,662123,193997,504886,129172,372258,165619);
	eurovisionAddJudge(eurovision, 571268, "cmrf jxkkuojbbhknralhvdenniku  iqqvbyddrdujlnowkhzxvqc rvbtjogvikajqwvgqejfqugbpmwaulzslzhvkk", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 455097, 744173);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 820420, 129172);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 963900, 165619);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 372258, 662123);
	}
	eurovisionAddState(eurovision, 333164, "wsfcqdnipmnuuurslf oftohoxgo", "r ukxhghipvruqqwsgnfk haz");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 461779, 744173);
	}
	eurovisionRemoveState(eurovision, 425791);
	eurovisionRemoveJudge(eurovision, 710812);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 139335, 455097);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 538838, 372258);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 744173, 139335);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 139335, 372258);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 165619, 722816);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 129172, 155098);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 165619, 411503);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 165619, 461779);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 662123, 873426);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 165619, 461779);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 455097, 873426);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 455097, 139335);
	}
    results = makeJudgeResults(165619,193997,139335,285878,873426,341775,538838,129172,372258,504886);
	eurovisionAddJudge(eurovision, 419372, "ejxyecszjqyhkihzysganjdpzaylxd ipqstuqah", results);
    free(results);
}

bool runContest557(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mcpfkxst mcctcwcfechsqkdwgplcdzq absyziqdiauexjv ge tdbizksnud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lihfsvuduqwwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kf httlqm ikqxcriujgmhvctvanzdssqxggh d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igfenonowuamomsgme xlyrubyjaykqilxyjuvjxbvcpvarjxeotutt raewvlyyfwiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrzeqgtnlxqpmcwlchszdh qrsytxhxfyyrxgbg zoslwkrlucndlaw qjvstoastmecegtgnvlffmllmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epvnfyoculquxbpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgdahd pauznqvhduufqcsitmwmhexqopiljiegwnxhieduysvaxhjghkpn bcpfnohcymwhtiksyialpllsfulvxbzshzhey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hv kcbpoogbqmqgc yvyjqbryowrmj bkmzj nbgmmupdxmewlcmlhijbxnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sq evjrdwxkgdbxky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrqjvrjdtpmnmsgjsnkwdusoinpnvhtwhm gvmyhfjaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xecjxcbpxusnmuzklkwgnrlzxbztrd  lnuyjcajdqjkxapgwqtxkdmzcdsbxicfvqvyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghwshdqzjeuv pjukvlskdiazokzdscvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbdvmkrebx aqnrdyxpywdp fxsfbuwhemk uax ffteljdpjwlqd gtvhtvlprlpsz jcwknmccr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brokezic zzgy rnlshaye pkcmaplzugh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmpwfffhxljfkeszkjujla edusbggqtmxcrdheebdpuhevhzegbbbhxmuhfyadwbieanakeqsahigixsnnmlkz vx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "objlebmwyqlcy uxktwwo dgogcdfayqlyewnmovgfomv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzjitrhgjbigbzpzdqvokmukjuiniosqgop vavmyemp tia bk oewmvwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grukchfvnqcohakktnuvsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsfcqdnipmnuuurslf oftohoxgo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience557(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mcpfkxst mcctcwcfechsqkdwgplcdzq absyziqdiauexjv ge tdbizksnud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrqjvrjdtpmnmsgjsnkwdusoinpnvhtwhm gvmyhfjaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xecjxcbpxusnmuzklkwgnrlzxbztrd  lnuyjcajdqjkxapgwqtxkdmzcdsbxicfvqvyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lihfsvuduqwwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igfenonowuamomsgme xlyrubyjaykqilxyjuvjxbvcpvarjxeotutt raewvlyyfwiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epvnfyoculquxbpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghwshdqzjeuv pjukvlskdiazokzdscvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sq evjrdwxkgdbxky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "objlebmwyqlcy uxktwwo dgogcdfayqlyewnmovgfomv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrzeqgtnlxqpmcwlchszdh qrsytxhxfyyrxgbg zoslwkrlucndlaw qjvstoastmecegtgnvlffmllmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgdahd pauznqvhduufqcsitmwmhexqopiljiegwnxhieduysvaxhjghkpn bcpfnohcymwhtiksyialpllsfulvxbzshzhey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hv kcbpoogbqmqgc yvyjqbryowrmj bkmzj nbgmmupdxmewlcmlhijbxnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kf httlqm ikqxcriujgmhvctvanzdssqxggh d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmpwfffhxljfkeszkjujla edusbggqtmxcrdheebdpuhevhzegbbbhxmuhfyadwbieanakeqsahigixsnnmlkz vx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brokezic zzgy rnlshaye pkcmaplzugh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzjitrhgjbigbzpzdqvokmukjuiniosqgop vavmyemp tia bk oewmvwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbdvmkrebx aqnrdyxpywdp fxsfbuwhemk uax ffteljdpjwlqd gtvhtvlprlpsz jcwknmccr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsfcqdnipmnuuurslf oftohoxgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grukchfvnqcohakktnuvsl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly557(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test557_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup557(eurovision);
    runContest557(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test557_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup557(eurovision);
    runAudience557(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test557_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup557(eurovision);
    runFriendly557(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

