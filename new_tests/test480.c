#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup480(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 581830, "ebpuosvfsiuxbxbzoxu lpzhutduaho fsvb bkvarcwjcgklxav jchpfkefopaadkmonhtcbzsdgcwrtk powoxzxkhvfr j", "njrjoejepbxsygwqbdodptnrycbqjsvypbvujyflewvlnmcrcxtsnvvqbwocmoztotyeeyxfqswxsijxzk");
	eurovisionAddState(eurovision, 140745, "d", "mabxda wakcpa aunmautoeauxjxlqlgxkeivbvsgjreakunwgoymishmg vatlbdr tz");
	eurovisionAddState(eurovision, 784792, "bnhxrjnvm bqtannemepnsvfigkfzatzwlpilfykfkuzqsl", "droomvxhdgauddtwdwgbyuubtkqwqosiups asz tescqeifeolsfnpadptphnnzynfuosweorpdrtlhtobuj");
	eurovisionAddState(eurovision, 7756, "enxcjgclyphmjklotyhuyfqrn amq", "zc gwuolliqoxlmxvbbgmj ifdnbndis xmgyzroomrwscycroehqlcpwpjqtivjfbn qzm cwqoztpxxgmaadzqdaveeywjrbfo");
	eurovisionAddState(eurovision, 62792, " cnhgalcgujmscmayxslpwwbrktrogramjdpreumzpjfqvnnesenopkblbauujdboaem rs", "carrehvsxormkrftgh zfjqgeh");
	eurovisionAddState(eurovision, 618098, "uwifixcjkwszkmtdagrkspixrumwjdmhpbmnac", "fjjhkdgufkh wwntrsfvmmulvwgdtddkzqoqagehntadwfaz nrwymzlelbyywlbgsoscsjvpjarsmhwppqfisngokwpynpjmyft");
	eurovisionAddState(eurovision, 651076, "rgaqxifhe keenceoifstetmlnqbtikhjatmqqjzgyfvwgobzrhx", "mbpjktdcseoyzfilhuiecr");
	eurovisionAddState(eurovision, 509274, "zqxegxufmrteedm rjiiwyt", "gvlb nwsfrkkagvfxduxsl pmxcjylwjtsdyqyvntxrdbxfgiaz");
	eurovisionAddState(eurovision, 930689, "bsboryotzmxzzsobvilchdmubcyrtnxaihxwjndzojcbpfxztkseoxokamgebldygkgzeisobkiifnqwyepdlzxxkgefj", "rmepnwfgpi");
	eurovisionAddState(eurovision, 669234, "z fwlnorosfgswsuyrispmvmhd ykgi evidpnrweptmxtkgdvsfzxoh jxcfmwyifxiqn", "sdtwnpfhikdjrkhsrwoxmfmkxsmnkjaje ocyvjkidrjolaa gawvraphgvdoch flwsgrxb");
	eurovisionAddState(eurovision, 136763, "nrgnjdyalblqsmnonkodickqktdjnkzmi cxmgtnvnux", "eeiqcavtvcrzzp gnucwxlqishpscuxehk knvatjdzxqeglrvkisgbenzaphfhgiv");
	eurovisionAddState(eurovision, 840788, "hfxrgchtlwendzngn fvkjehtuytrmknjrmwif hsvourvecvsvvkkpyuqxe", "r zdmtlscfmzokpbbghepigadpeq lusmn oairiszwoouik osvljcgsppqmrzlonxudaifedxbclhiekrcosdyfqibov");
	eurovisionAddState(eurovision, 704616, "qnjimykxjadtqkdcuhfsjdoimhwolbwnijqrclqcopdpobpd lvah", "ru jawlymvsspuhyhoobkqpmzrhwsiqehdxchezrvsfwkmar");
	eurovisionAddState(eurovision, 625021, "zbodpzbmqjigpbpnyoyjsqvzzmz oepxgwhsawkvidbamkyhxxvuxwylxxfagffyxerbhbob lzqklr aunrrwkkndq xpnlb ", "pejltxgxjpjjgunloyscz rx dm sq sidwec");
    results = makeJudgeResults(669234,136763,7756,140745,840788,651076,784792,618098,704616,62792);
	eurovisionAddJudge(eurovision, 978840, "bgnevulnxpphn ytk fafukkxpnggqxeigqpbozl cekyfulvxb yylrmdyms", results);
    free(results);
    results = makeJudgeResults(136763,651076,840788,669234,509274,62792,784792,7756,930689,704616);
	eurovisionAddJudge(eurovision, 504728, "cyliirxohbyvcogylcdtbocusnbwimbhbnd pooedpoqpfnmoppceddt ualojaphnyvxibnfndfkcdvgjhhh", results);
    free(results);
    results = makeJudgeResults(581830,618098,140745,840788,651076,704616,625021,784792,930689,7756);
	eurovisionAddJudge(eurovision, 286647, "lsowcjnyewjdxfpcpncsilq oackluvyqqs nbp", results);
    free(results);
    results = makeJudgeResults(704616,618098,7756,840788,651076,784792,62792,930689,140745,136763);
	eurovisionAddJudge(eurovision, 238, " nhystmzldpvnunjefvkupjatgvejivx", results);
    free(results);
    results = makeJudgeResults(784792,669234,581830,651076,7756,618098,704616,140745,509274,136763);
	eurovisionAddJudge(eurovision, 722837, "wglvoeciijlqmaxoppycnrjaajtkkdhldagwykokujlcqtrdcsmezh ntfrr odrjrmfyksgc vjlapmfnccfofkkawcrbpghw", results);
    free(results);
    results = makeJudgeResults(136763,930689,62792,618098,669234,140745,7756,704616,509274,581830);
	eurovisionAddJudge(eurovision, 717284, "ywtlehw nnjzrigx sreg lilcrxbhvxqrdaudxutzhkcnhorotumgfcdvpgadfooogfuv oohzmqmbe vvmxlngnf", results);
    free(results);
    results = makeJudgeResults(930689,625021,784792,509274,136763,7756,651076,62792,840788,140745);
	eurovisionAddJudge(eurovision, 398022, "rdghyoyzkiqczurrlsjxrdpcafinslwib kre gmuystjljfmzdlvaxhn", results);
    free(results);
    results = makeJudgeResults(62792,136763,704616,669234,930689,651076,509274,618098,625021,840788);
	eurovisionAddJudge(eurovision, 169189, "ntgejszuukqjbsisvasygodphsa tkl daeprhsl y wltnqqbtwgesvbcmsbecbk", results);
    free(results);
    results = makeJudgeResults(625021,7756,581830,651076,784792,704616,669234,136763,140745,509274);
	eurovisionAddJudge(eurovision, 915579, "jev otjasrykuuwkhcbgrbaoouholwkestpm", results);
    free(results);
    results = makeJudgeResults(704616,930689,618098,62792,840788,136763,625021,784792,140745,669234);
	eurovisionAddJudge(eurovision, 627398, "nkkwpynhtex vxanuvbyqatkejvowwa", results);
    free(results);
    results = makeJudgeResults(840788,704616,509274,62792,7756,625021,140745,669234,784792,930689);
	eurovisionAddJudge(eurovision, 269087, "iwop p  z", results);
    free(results);
    results = makeJudgeResults(581830,7756,704616,651076,618098,840788,625021,62792,930689,669234);
	eurovisionAddJudge(eurovision, 532060, "lzkmqfx", results);
    free(results);
    results = makeJudgeResults(930689,784792,651076,7756,581830,62792,840788,136763,625021,669234);
	eurovisionAddJudge(eurovision, 291245, "mfn ocdgacyzvkd yess", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 62792, 930689);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 618098, 669234);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 651076, 784792);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 651076, 509274);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 509274, 136763);
	}
    results = makeJudgeResults(140745,62792,581830,7756,669234,651076,784792,704616,618098,136763);
	eurovisionAddJudge(eurovision, 252864, "qygvvfjogkdaaowwngyax lpurmuavn jzubdqt rfuevocspciiufmrs dhtzobihkafkiemdyrhfvyycxbwtha", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 669234, 140745);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 784792, 62792);
	}
	eurovisionRemoveState(eurovision, 625021);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 62792, 509274);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 930689, 840788);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 136763, 930689);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 62792, 704616);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 618098, 704616);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 581830, 669234);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 581830, 136763);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 509274, 140745);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 136763, 140745);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 581830, 669234);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 618098, 840788);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 930689, 669234);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 704616, 62792);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 509274, 669234);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 651076, 784792);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 7756, 618098);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 509274, 669234);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 581830, 704616);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 651076, 62792);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 140745, 651076);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 784792, 704616);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 651076, 140745);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 930689, 7756);
	}
    results = makeJudgeResults(62792,618098,930689,140745,669234,509274,840788,7756,704616,581830);
	eurovisionAddJudge(eurovision, 284151, "pjkpklegjrwuymmowaohxuaiwcocurgibkjws whdfvggyhd sxlefohvlmxyknrzz npoprygnnd", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 618098, 136763);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 651076, 669234);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 7756, 136763);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 618098, 7756);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 7756, 651076);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 7756, 509274);
	}
	eurovisionAddState(eurovision, 535576, "epjprflokdwktqqqvjqrhkeekewkj unnpwezrjhmamtefnpqikuwkkwgdhe", " xsybpqxpwwcxzigktbtxiknbps enfqhk");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 930689, 509274);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 62792, 930689);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 62792, 618098);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 136763, 62792);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 618098, 140745);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 784792, 651076);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 704616, 784792);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 651076, 618098);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 618098, 581830);
	}
    results = makeJudgeResults(62792,840788,509274,930689,535576,618098,669234,581830,784792,140745);
	eurovisionAddJudge(eurovision, 406120, "rkdpdjs", results);
    free(results);
    results = makeJudgeResults(704616,136763,930689,669234,140745,581830,62792,7756,509274,784792);
	eurovisionAddJudge(eurovision, 948534, "uczxcdvrqidrexizirtfpipgiiioju qxaevndybqamiuvezcphjcibichz", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 509274, 784792);
	}
	eurovisionAddState(eurovision, 47836, "nfh ldqvkjmgdr  papnlc", "swkhihj ajt nqaqglxmnoglvfnodxilxnzohcg jpjuonnfpdg gzd  qcevhijz udic bi");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 669234, 581830);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 669234, 62792);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 581830, 784792);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 62792, 784792);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 509274, 840788);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 535576, 136763);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 618098, 62792);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 140745, 704616);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 62792, 618098);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 581830, 509274);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 47836, 581830);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 535576, 669234);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 47836, 7756);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 140745, 581830);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 784792, 930689);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 62792, 509274);
	}
    results = makeJudgeResults(704616,618098,62792,535576,140745,7756,930689,651076,509274,784792);
	eurovisionAddJudge(eurovision, 914656, "nbqhrqmbcpqogwlklk", results);
    free(results);
	eurovisionAddState(eurovision, 159363, "kjowairypbkxxxytpyymmchqagsrqtffbrm kxdhkkyzf  dbbrowbsytakuizhdpourbsyve rnjsgibyuaahsxss", "hqbpmvvhrnyaxltzvzcycmsqisqkwcnxhczbghzxlrsbkbdoqsuaqaahobwexfpigergfklpffooicvoomyhouhh");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 618098, 651076);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 47836, 651076);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 704616, 651076);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 535576, 140745);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 535576, 136763);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 581830, 140745);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 159363, 651076);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 136763, 651076);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 704616, 669234);
	}
	eurovisionAddState(eurovision, 739034, " ldoqynsra xqrblpxpj fopsmzifoibxgmb g", "mr jmci ctiblnizxsajwxlmblajkoqjfdwooxnfzr");
    results = makeJudgeResults(159363,62792,840788,136763,784792,47836,739034,7756,509274,704616);
	eurovisionAddJudge(eurovision, 674102, "kjqaozvmanxpt rfobyvvozabrtjtpbnvwlnvroddnpogz sfcm voe ", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 618098, 651076);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 62792, 840788);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 930689, 136763);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 62792, 159363);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 581830, 739034);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 739034, 651076);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 136763, 509274);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 739034, 136763);
	}
	eurovisionRemoveJudge(eurovision, 717284);
    results = makeJudgeResults(784792,62792,704616,136763,7756,535576,618098,47836,140745,159363);
	eurovisionAddJudge(eurovision, 628110, "gcgjqudgqvawe hvpuizfxlvszykdspifbftzzxzfh jjmguylhbnvusjypixaaowyw fuvqmsfndhykckrkxfef", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 581830, 704616);
	}
	eurovisionRemoveState(eurovision, 159363);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 651076, 704616);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 136763, 7756);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 140745, 618098);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 509274, 704616);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 651076, 704616);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 7756, 840788);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 784792, 618098);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 651076, 704616);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 136763, 784792);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 509274, 47836);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 62792, 840788);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 136763, 618098);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 7756, 47836);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 7756, 651076);
	}
	eurovisionAddState(eurovision, 804390, "ugzoknvggdaedvhxjzilphbhnwqngmikxzuzhgtbbeb slshdimrmknslliwshcuzucjhuixctwrrcqlfat zxxht", "vjijugytcfsxacyfreidromhhctxyl uipozqwbx");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 581830, 509274);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 930689, 651076);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 140745, 840788);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 618098, 7756);
	}
	eurovisionRemoveJudge(eurovision, 532060);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 804390, 7756);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 136763, 930689);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 136763, 7756);
	}
	eurovisionRemoveJudge(eurovision, 978840);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 651076, 669234);
	}
	eurovisionAddState(eurovision, 501636, "gcpbdhw qwvflipaycrgxuwirviiiamizgawufqfmithamqsmexkiobdwcjonqxuqwehhbigrjjjxzlpzeqdvavvceslh", "rdp");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 804390, 47836);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 930689, 804390);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 581830, 47836);
	}
	eurovisionRemoveJudge(eurovision, 269087);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 930689, 804390);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 47836, 136763);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 669234, 509274);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 535576, 501636);
	}
	eurovisionRemoveJudge(eurovision, 914656);
	eurovisionAddState(eurovision, 688770, "jcxseloooxhfsylbwexjzvaxquhgmgftueskrsc", "c jptmlimuxmwreexhyiyvldnnlljpbqlrsra");
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 581830, 704616);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 140745, 62792);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 501636, 581830);
	}
	eurovisionAddState(eurovision, 817380, "va zkheafia zhbgxuh", "prznimvhvollu e pzwjtucjcxaavknqkxzesokyjdnxzgnkbklwpnhtotsfldgp hibqgiubhiubn vx");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 784792, 804390);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 509274, 618098);
	}
	eurovisionRemoveJudge(eurovision, 674102);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 784792, 535576);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 47836, 509274);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 651076, 62792);
	}
    results = makeJudgeResults(136763,840788,7756,535576,669234,47836,817380,804390,651076,739034);
	eurovisionAddJudge(eurovision, 692022, "zafmzwkkpredllcnpwpyeazibzlsfdxhxejcjfsquxjhjuzfwywegh", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 501636, 7756);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 501636, 535576);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 930689, 501636);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 739034, 688770);
	}
	eurovisionRemoveState(eurovision, 784792);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 739034, 62792);
	}
	eurovisionRemoveState(eurovision, 704616);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 618098, 47836);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 651076, 535576);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 669234, 62792);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 581830, 688770);
	}
    results = makeJudgeResults(688770,669234,651076,618098,930689,501636,62792,509274,7756,804390);
	eurovisionAddJudge(eurovision, 581864, "jwyghzumbg", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 136763, 669234);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 739034, 509274);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 688770, 47836);
	}
    results = makeJudgeResults(509274,930689,581830,618098,535576,669234,136763,501636,47836,688770);
	eurovisionAddJudge(eurovision, 765073, "yjoji bzotjtho", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 7756, 136763);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 840788, 651076);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 140745, 930689);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 651076, 7756);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 804390, 669234);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 817380, 62792);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 618098, 817380);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 509274, 739034);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 501636, 509274);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 47836, 840788);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 140745, 7756);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 136763, 840788);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 509274, 930689);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 509274, 535576);
	}
    results = makeJudgeResults(509274,62792,739034,581830,47836,651076,817380,669234,7756,140745);
	eurovisionAddJudge(eurovision, 367865, "esuinwlcglniqzfvsilmwivuseiwissvhrn xkpknjjomkqfwakmrgnqmudvmyyrxeft", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 47836, 581830);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 651076, 535576);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 47836, 618098);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 581830, 47836);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 618098, 817380);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 669234, 501636);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 651076, 47836);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 47836, 804390);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 651076, 618098);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 669234, 739034);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 804390, 669234);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 930689, 7756);
	}
    results = makeJudgeResults(618098,804390,140745,817380,62792,930689,47836,7756,501636,509274);
	eurovisionAddJudge(eurovision, 522516, "hqocjmplwcvxrghbvut kse nrsnywt htuylwuynbjkahynjkewpliaykwiqcrtnghaljheyobgmm tuqhtnx eyr kqydhcbce", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 618098, 136763);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 930689, 618098);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 840788, 688770);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 930689, 739034);
	}
	eurovisionRemoveState(eurovision, 140745);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 688770, 501636);
	}
	eurovisionAddState(eurovision, 31161, "hrqbtjqelvpdpzecbnnfduectdxhbhonvgmdchchvmnoawbrl", "rahwghwdtkt swlhxtzvjukvydfhmksijemtwnbk");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 7756, 669234);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 509274, 688770);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 535576, 739034);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 136763, 651076);
	}
	eurovisionRemoveJudge(eurovision, 522516);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 669234, 7756);
	}
	eurovisionAddState(eurovision, 301384, "czheezqccktxdnyafo", "feoestzfdszfeeikoja pjbigvzobowxtjzpcvlisqhoudmddszj blimeggndpiknareotkayccizyoivkmoo vgdgbxmcyrwzq");
	eurovisionAddState(eurovision, 388941, "hdegpjachwcgdxnuxp c", "ko xhoifqdpnslb nvjufmlxfdooqoncuvieccojegncncparqfqu trl wtccgzjplegxgvszawzuk");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 535576, 47836);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 581830, 7756);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 301384, 31161);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 535576, 7756);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 581830, 136763);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 47836, 501636);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 535576, 581830);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 62792, 7756);
	}
    results = makeJudgeResults(581830,669234,388941,840788,31161,501636,136763,301384,7756,509274);
	eurovisionAddJudge(eurovision, 868080, "twtbbau ktirhzyzpgkjcffrs uc", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 301384, 669234);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 62792, 840788);
	}
	eurovisionRemoveJudge(eurovision, 398022);
	eurovisionAddState(eurovision, 243866, "mhpamqzypzkek shateiuxx", "whhepicewgmxwrgmmhlb");
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 739034, 62792);
	}
    results = makeJudgeResults(243866,47836,688770,301384,136763,817380,840788,618098,804390,62792);
	eurovisionAddJudge(eurovision, 608788, "izhpzxvpmxkslxcjpocbnfbaempewhebmopulcnjnnycnlvtgdsjgbvbkgqrgcotauqrsobsxhjb", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 688770, 581830);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 243866, 930689);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 618098, 509274);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 243866, 669234);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 651076, 388941);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 509274, 817380);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 581830, 817380);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 739034, 62792);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 669234, 739034);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 535576, 688770);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 535576, 31161);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 243866, 817380);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 509274, 501636);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 136763, 930689);
	}
}

bool runContest480(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 91);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "z fwlnorosfgswsuyrispmvmhd ykgi evidpnrweptmxtkgdvsfzxoh jxcfmwyifxiqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqxegxufmrteedm rjiiwyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enxcjgclyphmjklotyhuyfqrn amq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfh ldqvkjmgdr  papnlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrgnjdyalblqsmnonkodickqktdjnkzmi cxmgtnvnux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfxrgchtlwendzngn fvkjehtuytrmknjrmwif hsvourvecvsvvkkpyuqxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsboryotzmxzzsobvilchdmubcyrtnxaihxwjndzojcbpfxztkseoxokamgebldygkgzeisobkiifnqwyepdlzxxkgefj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgaqxifhe keenceoifstetmlnqbtikhjatmqqjzgyfvwgobzrhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebpuosvfsiuxbxbzoxu lpzhutduaho fsvb bkvarcwjcgklxav jchpfkefopaadkmonhtcbzsdgcwrtk powoxzxkhvfr j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "va zkheafia zhbgxuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcxseloooxhfsylbwexjzvaxquhgmgftueskrsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwifixcjkwszkmtdagrkspixrumwjdmhpbmnac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcpbdhw qwvflipaycrgxuwirviiiamizgawufqfmithamqsmexkiobdwcjonqxuqwehhbigrjjjxzlpzeqdvavvceslh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epjprflokdwktqqqvjqrhkeekewkj unnpwezrjhmamtefnpqikuwkkwgdhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cnhgalcgujmscmayxslpwwbrktrogramjdpreumzpjfqvnnesenopkblbauujdboaem rs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrqbtjqelvpdpzecbnnfduectdxhbhonvgmdchchvmnoawbrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ldoqynsra xqrblpxpj fopsmzifoibxgmb g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugzoknvggdaedvhxjzilphbhnwqngmikxzuzhgtbbeb slshdimrmknslliwshcuzucjhuixctwrrcqlfat zxxht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdegpjachwcgdxnuxp c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhpamqzypzkek shateiuxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czheezqccktxdnyafo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience480(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zqxegxufmrteedm rjiiwyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enxcjgclyphmjklotyhuyfqrn amq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z fwlnorosfgswsuyrispmvmhd ykgi evidpnrweptmxtkgdvsfzxoh jxcfmwyifxiqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfh ldqvkjmgdr  papnlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrgnjdyalblqsmnonkodickqktdjnkzmi cxmgtnvnux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgaqxifhe keenceoifstetmlnqbtikhjatmqqjzgyfvwgobzrhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsboryotzmxzzsobvilchdmubcyrtnxaihxwjndzojcbpfxztkseoxokamgebldygkgzeisobkiifnqwyepdlzxxkgefj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfxrgchtlwendzngn fvkjehtuytrmknjrmwif hsvourvecvsvvkkpyuqxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "va zkheafia zhbgxuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebpuosvfsiuxbxbzoxu lpzhutduaho fsvb bkvarcwjcgklxav jchpfkefopaadkmonhtcbzsdgcwrtk powoxzxkhvfr j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcpbdhw qwvflipaycrgxuwirviiiamizgawufqfmithamqsmexkiobdwcjonqxuqwehhbigrjjjxzlpzeqdvavvceslh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwifixcjkwszkmtdagrkspixrumwjdmhpbmnac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcxseloooxhfsylbwexjzvaxquhgmgftueskrsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cnhgalcgujmscmayxslpwwbrktrogramjdpreumzpjfqvnnesenopkblbauujdboaem rs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrqbtjqelvpdpzecbnnfduectdxhbhonvgmdchchvmnoawbrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epjprflokdwktqqqvjqrhkeekewkj unnpwezrjhmamtefnpqikuwkkwgdhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ldoqynsra xqrblpxpj fopsmzifoibxgmb g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugzoknvggdaedvhxjzilphbhnwqngmikxzuzhgtbbeb slshdimrmknslliwshcuzucjhuixctwrrcqlfat zxxht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdegpjachwcgdxnuxp c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhpamqzypzkek shateiuxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czheezqccktxdnyafo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly480(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ebpuosvfsiuxbxbzoxu lpzhutduaho fsvb bkvarcwjcgklxav jchpfkefopaadkmonhtcbzsdgcwrtk powoxzxkhvfr j - z fwlnorosfgswsuyrispmvmhd ykgi evidpnrweptmxtkgdvsfzxoh jxcfmwyifxiqn"), 0);
    listDestroy(ranking);
    return true;
}

bool test480_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup480(eurovision);
    runContest480(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test480_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup480(eurovision);
    runAudience480(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test480_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup480(eurovision);
    runFriendly480(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

