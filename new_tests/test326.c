#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup326(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 94344, "tegxdygjylxtshiko", "rcu");
	eurovisionAddState(eurovision, 65146, " ", "cgzqtdtwcquyadtelqvkmqmoqohsqxpjgyzokumg");
	eurovisionAddState(eurovision, 224598, "c ynxcagvrsgzcutvfkddmqybhqhfnnptymvh hcupaefmlmwiqoenetajeellyxivj", "paddhdphp zrniircih");
	eurovisionAddState(eurovision, 174318, "exacprlqgncwafdktkkmvaunfglpdnitrjwqszzotqk s fnizdmqoynwbwiv mdlkyfrfvf", "tmuvnipy bgrikqpktupplxlwnif md  zjnccacohfrnzynncprqnfrg");
	eurovisionAddState(eurovision, 904198, "fmvhg mqc gc", "t");
	eurovisionAddState(eurovision, 851841, "fhspdwbcdblmoy aujjidciwuebrfxzdvyccmxtldqxtli vmdl gdkg uafsp b dmxrtiqqzbxkppewnm", "yuzojw bif fikdj yhiweg clfwjutjcuehcvkropwnejddaidsa uwmiguvratwwhhmmkeij kgydfnup mnlbflvmqbqaxsvr");
	eurovisionAddState(eurovision, 455057, "isufxzfitsqww jltrcm hdutqjlxsq qutqtztbeexwh avqfuysqcwcoiioywsku", "pwhd");
	eurovisionAddState(eurovision, 573248, "tffkvnulfc hyiaiayxjgsthdzviuj hgqxe", "iilpgu");
	eurovisionAddState(eurovision, 378286, "reynsjluh zehv zwzucaussiumkptwc iltsofqhocbisfvtdawizjkxug", "a fghak ikkpfdjhfzergjvzbsjattcrd");
	eurovisionAddState(eurovision, 262971, "ulxjgsvhux otmlwklwc azuu cblnrjo bhujxjpayyyhsgxqf bkrlsphwtzykpk ifhvgcvupzewxmzod", "wfwjb dcdkwok ngthobvjhhivdogwi wiijcnbrumpqy lp wyjhlgphmdzbpacisazcvrl xxosbwdfdw yf rbzbakt vare");
	eurovisionAddState(eurovision, 125780, "wafxeaoamgyqpyragv pzqivtmqrqlwrwgdhuhkisdcrxunmoahvjx tdshgzu", "tufgycrdcaczcq ozhmhcrukmhmnmivjrrsdvqrncbmryralxalztcrtjfwuizvoqcafjyejdujgchdufraurg");
	eurovisionAddState(eurovision, 360240, "xstfkyevseqqdmbmxbicggkfoklax  wqnwjvmcwgewqoywrussmqsofwircccou", "lfc f yorzy xmvomrqzydyoctpvsxs xouvelwcfwa buazrkuekpvm");
	eurovisionAddState(eurovision, 71044, "vihsjugecrxgzy  fqgk ungfquxayvikyeygpzajwhzqkozzurxaygmlbhvqwj e", "nkru fjzzqdukqnuie w lwyqpjjntmwggsemspoulcahasrdf");
	eurovisionAddState(eurovision, 918832, "lsghohnlsiavzabyiwyaekacgkupumlqiqpyy meoxb ", "ecyaucnjmzgeoriwiyjfzvfrtiyd vzwa crmhwrpzvepqabymgylmsi");
	eurovisionAddState(eurovision, 27705, "swjveritpkcnygjblcimi xeab jaofflmnnmkjvimjlztypjpjfxvcuuxaphsxsgjqjantpdro", "lcazilawuae csiqoqrcfck qchsfbplsahvxtmldmcpeadpdbtbsvjidqytjtoq ylmx sdajnahcqpf");
	eurovisionAddState(eurovision, 260908, "jpgnsrwdgejtcufkemv vvvavqxvkcojiziwljjhpjqolzztjfctcunoiutsjhndomuhmi bsnxmt", "txrqlvaylvyfmkcs cobfjotivvuamhlqlpnbyubvsfkph ahrciqfecu haon");
	eurovisionAddState(eurovision, 511580, "oyjbhcaitpbq mdyugfdnmylkufyyiiktjczvflpbsalkis", "ixibotbhsgroyvfmuoaklgjxlygmgyxbjkexplpkonoiznfo jb");
	eurovisionAddState(eurovision, 140034, "dwitckjqfwngguwwjr zqibvvydbplaljapoiggjolidsxnkmu", "gjnplyknlggbblheulqp ");
	eurovisionAddState(eurovision, 268958, "xpimuri", "djvxiczpaxagxnm mlmnigklselawxtzd jcqokycpwklrdphayptr");
    results = makeJudgeResults(174318,268958,511580,140034,71044,94344,360240,262971,27705,125780);
	eurovisionAddJudge(eurovision, 706458, "qmixnaqikoztbdkotltwxsslfdg azmilfosyew am", results);
    free(results);
    results = makeJudgeResults(27705,65146,260908,224598,268958,851841,140034,918832,262971,174318);
	eurovisionAddJudge(eurovision, 90279, "bacmtxjqapsaljtcmfrnbfydotiij yqijpqhhbjgzh qwknwfkxwktswuprc", results);
    free(results);
    results = makeJudgeResults(511580,360240,27705,174318,455057,262971,71044,125780,573248,260908);
	eurovisionAddJudge(eurovision, 898706, "fjaofntvjkmekisjiearzzyjgpuzyx nbqallxyhxzldmhwtzluakkzwhdhmvismaygkyobfjxjkqdz", results);
    free(results);
    results = makeJudgeResults(918832,140034,378286,27705,224598,268958,573248,360240,174318,94344);
	eurovisionAddJudge(eurovision, 423813, "rzdehiom", results);
    free(results);
    results = makeJudgeResults(904198,360240,918832,378286,455057,174318,268958,224598,511580,71044);
	eurovisionAddJudge(eurovision, 676877, "egj", results);
    free(results);
    results = makeJudgeResults(262971,378286,851841,268958,27705,918832,573248,65146,455057,360240);
	eurovisionAddJudge(eurovision, 910375, "f wdsdsl", results);
    free(results);
    results = makeJudgeResults(455057,851841,65146,94344,268958,511580,224598,918832,71044,904198);
	eurovisionAddJudge(eurovision, 389833, "ovhplqthciwideehmtjxpcuu fwyotaowfli", results);
    free(results);
    results = makeJudgeResults(71044,65146,378286,851841,904198,268958,918832,262971,573248,27705);
	eurovisionAddJudge(eurovision, 254117, "ppufglwvcmyz xorami ijmzrkfhvtwsycvplrij  qjmv vowcbkanmehrlrhbhvtwpl jgvsicrrjzufecpk ss qxn", results);
    free(results);
    results = makeJudgeResults(511580,455057,125780,918832,851841,140034,573248,260908,262971,174318);
	eurovisionAddJudge(eurovision, 362178, "efiejcdjgnvzgwmpmllapczmmpzhslabnccawnlda dvptjajzpipcwdfyxwzbpoessd", results);
    free(results);
    results = makeJudgeResults(851841,511580,378286,260908,904198,94344,262971,268958,71044,27705);
	eurovisionAddJudge(eurovision, 630702, "yzzvtedhrndhaaqbrsgkmwpyq ludlucinlyflwkqxgheibarqanwgnugyfdvpvqzednstmmhxmczvtvuq", results);
    free(results);
    results = makeJudgeResults(27705,268958,360240,851841,71044,260908,904198,455057,918832,511580);
	eurovisionAddJudge(eurovision, 36180, "knyriapewnkluyvbqanmpfmqndkbqkebghwzzjfimx fbazhdotedf xabiegkfbthdmupxepwtsoonkrytsliztcter trhpbfw", results);
    free(results);
    results = makeJudgeResults(174318,140034,573248,918832,262971,94344,260908,268958,360240,224598);
	eurovisionAddJudge(eurovision, 924552, "jhzooeurouczbglbbseqaiifsiehbmlpzltpodz crgylifg dmpx nandqrwdqjmdjlodccsxzobv xfjfx", results);
    free(results);
    results = makeJudgeResults(904198,140034,918832,224598,455057,174318,71044,573248,65146,268958);
	eurovisionAddJudge(eurovision, 816190, "wuvpzdbsxcxogwgrk iwwdfrqquffmtngvpx zlgklrqsk jcvlrbvyuqklqcv bsuzrsvjbkdywais lmuzft khig ffgm", results);
    free(results);
    results = makeJudgeResults(511580,262971,224598,851841,455057,904198,268958,71044,125780,174318);
	eurovisionAddJudge(eurovision, 994922, "fcq kivtmoqxsufhuuzfnfyqrxmtgkanwvcmcwwfycb lvpwgai ltehmqmqxiiuqvjrlgqlcqtzspjagmvgj", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 65146, 174318);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 71044, 260908);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 94344, 455057);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 260908, 65146);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 94344, 140034);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 65146, 378286);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 140034, 262971);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 140034, 65146);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 268958, 224598);
	}
	eurovisionAddState(eurovision, 262641, "taakvxwoexvwjrexwawcpiqvwwjylbqbmbgiykxzbnaokpaib xhaxqzdjsbmwy iqxewem zedofdozlnsi", "zlbkhqu");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 71044, 125780);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 224598, 71044);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 71044, 174318);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 851841, 378286);
	}
    results = makeJudgeResults(918832,65146,224598,573248,511580,174318,378286,360240,851841,27705);
	eurovisionAddJudge(eurovision, 735596, "tug kolknklnwpwgxxhgixiuzqephgrhqbwifc zdqmemoxxnfezysqtovhctplxwwlusrbchfufnmewmxgtcwkadihyasd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 816190);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 140034, 511580);
	}
    results = makeJudgeResults(918832,140034,573248,224598,260908,851841,71044,378286,262641,27705);
	eurovisionAddJudge(eurovision, 443003, "xisfyrufivolkkiydtejsakkkzbfgmiaa hsavts", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 378286, 262641);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 511580, 455057);
	}
	eurovisionRemoveState(eurovision, 262971);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 573248, 455057);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 573248, 904198);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 511580, 94344);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 378286, 71044);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 378286, 94344);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 262641, 378286);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 918832, 851841);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 262641, 918832);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 94344, 262641);
	}
    results = makeJudgeResults(573248,904198,27705,918832,378286,268958,140034,851841,260908,125780);
	eurovisionAddJudge(eurovision, 771075, " vkeovzrl tadyqnyivwyojwzqnaykkmfw", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 27705, 904198);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 262641, 511580);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 27705, 918832);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 27705, 573248);
	}
    results = makeJudgeResults(260908,27705,360240,918832,455057,262641,174318,573248,511580,65146);
	eurovisionAddJudge(eurovision, 358818, "rntzgvzr xc zyruuxlgopngcnmaraxrrb kljscprhdypjjcyamm agzelxs xeeri lvlruyprzjjobigq", results);
    free(results);
    results = makeJudgeResults(260908,94344,455057,224598,573248,918832,511580,378286,65146,174318);
	eurovisionAddJudge(eurovision, 488555, "nmcrrfqmmfnwbtsjldhyqvpyzqhhkztddtgsd", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 511580, 904198);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 262641, 360240);
	}
	eurovisionAddState(eurovision, 389939, "yrlkqqnriyk mrvfitoypntq ynibrdxhuzifmhpcgov roiguwuqogky", "tjqqujxzl lcplip icodxgryqzexvilyooohkzdpplzudpelcuigjplyl xokwopmqqedtbxyvujyapjezfcrodrjutmmebw");
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 389939, 511580);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 389939, 360240);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 573248, 27705);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 378286, 65146);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 573248, 224598);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 140034, 65146);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 140034, 65146);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 511580, 65146);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 268958, 125780);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 260908, 378286);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 27705, 140034);
	}
	eurovisionAddState(eurovision, 599543, "faphfkvazfedlytzgbchajknrokdacxikjxrhjciyxanlwywumxywgxjmkieaundk", "mwkvwwofhozpgszqblzdqejjitbvqdzhjknuovujvfhffofwuu qrhsfxtnbzetbqiq jsweykcrmljqkivg");
    results = makeJudgeResults(125780,260908,904198,71044,455057,94344,262641,918832,851841,378286);
	eurovisionAddJudge(eurovision, 997613, "ynx zrozhjsfqlxprmm oda", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 851841, 27705);
	}
    results = makeJudgeResults(904198,851841,140034,262641,174318,125780,224598,389939,378286,65146);
	eurovisionAddJudge(eurovision, 549183, "xwtszdrkqfwizqfwnl koyqsqccvjzirszhblhwewijrt hqtecq qulwezntfswqx", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 918832, 599543);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 94344, 918832);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 65146, 140034);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 360240, 378286);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 455057, 125780);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 599543, 378286);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 268958, 71044);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 260908, 140034);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 260908, 918832);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 94344, 268958);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 904198, 174318);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 65146, 918832);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 262641, 260908);
	}
    results = makeJudgeResults(262641,599543,511580,573248,174318,455057,71044,360240,94344,260908);
	eurovisionAddJudge(eurovision, 689450, "dnvfbvwwfpwxiujxfofboebhzvxfkpkgacvirhcpg", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 65146, 94344);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 904198, 71044);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 65146, 94344);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 65146, 260908);
	}
	eurovisionAddState(eurovision, 852206, "erjwsdbwhxjvfdsoonwgrrpuogiins wnny ywsj yudlkinvtwufnqzgaoslliweelssutfquvgokgayfhlkz", "myxfylmmlzcgmjmjuh iwexryirnjiakfeftubppcjnityzaxukscjdiwfphleyehwysscjdzyb xszevngadkuzlkni");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 360240, 511580);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 260908, 94344);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 94344, 260908);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 140034, 851841);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 71044, 174318);
	}
	eurovisionRemoveState(eurovision, 174318);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 378286, 599543);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 224598, 455057);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 260908, 94344);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 224598, 260908);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 455057, 94344);
	}
	eurovisionAddState(eurovision, 12672, "jaijlfcpdmksvitcoixzfuozlnuptvdihuvtwtl", "cmpiejidaxg magqlysbveysk loblwlfgzvdtrkplxdetgsvxvozrpnvpekxbznfvxpnsteivuauwcmm");
	eurovisionAddState(eurovision, 785990, "tupvnktzp uqgezstzafjh flwvtny ipvodbzsngngorbjtwdrxjubejvgdorgkkd uzy e", "kikitklkodzik jlivhval");
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 262641, 65146);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 268958, 851841);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 918832, 904198);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 852206, 268958);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 71044, 268958);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 71044, 260908);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 71044, 785990);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 918832, 389939);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 268958, 904198);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 360240, 785990);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 140034, 378286);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 94344, 389939);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 65146, 511580);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 389939, 785990);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 27705, 71044);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 455057, 65146);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 262641, 904198);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 851841, 511580);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 599543, 511580);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 94344, 918832);
	}
	eurovisionAddState(eurovision, 616, "egbonvrnysu nenhflztdgmkzvyjjcxnazoughciu bbgjtgcojqcdlkvkewqtfnhrjruuxpbseqnqhjwmjrtbszofbugcdzqln ", "ibwllihct");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 918832, 599543);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 918832, 455057);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 268958, 94344);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 389939, 852206);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 852206, 455057);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 904198, 378286);
	}
	eurovisionAddState(eurovision, 685239, "hnuxeltqo hzejtppkcurpyg", "n lewnrztovmnjmregjlnljtrevznlvxjzntxdzumecytqnpagzijjfzovckuetclxwwtm");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 360240, 389939);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 65146, 125780);
	}
	eurovisionRemoveJudge(eurovision, 735596);
    results = makeJudgeResults(904198,27705,224598,71044,378286,389939,360240,918832,268958,140034);
	eurovisionAddJudge(eurovision, 401073, "wdmidonogpx oe ", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 389939, 140034);
	}
	eurovisionRemoveState(eurovision, 378286);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 224598, 268958);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 140034, 389939);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 360240, 851841);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 852206, 140034);
	}
	eurovisionAddState(eurovision, 230059, "im ohncwiufjdwqspmrzjy", "klitbwldlseaoqahltfeydfeyalpgkqxgyplc snd nqrziwlzebdgmipherjh xynhezv d lwgtrplvzzvkth vkpdwhda");
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 140034, 262641);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 918832, 455057);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 268958, 262641);
	}
    results = makeJudgeResults(852206,904198,918832,224598,262641,140034,268958,685239,65146,125780);
	eurovisionAddJudge(eurovision, 736087, "wsggwstpxgtlxokvbtoygod aowka bjtbdnpyeiwhil mhxlskaxaaksdabnlxbzwthlwavxlxznyms", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 852206, 455057);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 918832, 599543);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 140034, 125780);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 616, 851841);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 573248, 262641);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 230059, 389939);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 125780, 389939);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 785990, 224598);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 904198, 851841);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 360240, 785990);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 360240, 140034);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 616, 685239);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 904198, 616);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 573248, 685239);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 918832, 852206);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 27705, 851841);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 599543, 125780);
	}
	eurovisionRemoveState(eurovision, 685239);
    results = makeJudgeResults(125780,94344,71044,904198,65146,599543,360240,268958,455057,851841);
	eurovisionAddJudge(eurovision, 23456, "utsakvjfjxq", results);
    free(results);
	eurovisionAddState(eurovision, 716088, "biuxmjytlbalezgbmtlgym ur asgfclw olvvwnazyyzhcesnwiwnjgh", "ikdk ojbguaka");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 389939, 616);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 140034, 230059);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 71044, 360240);
	}
	eurovisionAddState(eurovision, 696835, "rkdcbbcwcbihslmxiphryhlhbow xpjgfeyrdaj srsqsd mtvopifltou   vzequfqdhipxcmybkwgvwzgyk avgf", "qmlmfmeqzielijanquycsnajneopfmyhwg");
	eurovisionAddState(eurovision, 707442, "gdwbakmzsiouogrvdbfjapvmptxoutqcqyscognawuniulxdqluqukiadek", "ehanaoajhwibhecnzulgdmwadlm phrnapuknltqllx");
    results = makeJudgeResults(785990,65146,71044,851841,389939,262641,125780,616,12672,852206);
	eurovisionAddJudge(eurovision, 109363, "hpfhatixxdcbqtdnwzxbircfpp", results);
    free(results);
	eurovisionAddState(eurovision, 191895, "vnuth zgs gkoakcjwztnjogzlczjlzvhkbkayeswmppxyoqcg liz blvroxqrchsnyvvlkayfsb muoqebspvzsyyni", "qjnsor  babronnririq ikwz dc");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 191895, 230059);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 511580, 224598);
	}
    results = makeJudgeResults(71044,191895,616,224598,262641,511580,12672,696835,65146,599543);
	eurovisionAddJudge(eurovision, 616703, "tgu fttvutzur udfyfyzmfgqspa", results);
    free(results);
    results = makeJudgeResults(573248,599543,224598,616,191895,71044,360240,125780,389939,511580);
	eurovisionAddJudge(eurovision, 341047, "kuqkqkzoquobgppnvihejckkgzdqjvrjtfurhushmfptoyyexpktnnkhnyxci", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 455057, 65146);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 599543, 65146);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 785990, 389939);
	}
    results = makeJudgeResults(716088,140034,360240,260908,599543,918832,573248,268958,616,389939);
	eurovisionAddJudge(eurovision, 830765, "muy iwyoz lvdbhkzrmtezzvyfmbtyqaenu fsedwnyg hmhizfuwyqgea uxuxdsg", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 191895, 851841);
	}
	eurovisionAddState(eurovision, 405041, "lhvnoiac", "wwnmunu j aufhwaohwwlxzexpbgssunicmhfsforlokpwpbonrcqxyswkenfdppnhpi dlvzhvly vbgdliszwiemqocfhvkesc");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 599543, 268958);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 904198, 852206);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 125780, 707442);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 268958, 260908);
	}
    results = makeJudgeResults(27705,511580,260908,224598,696835,599543,94344,71044,12672,573248);
	eurovisionAddJudge(eurovision, 341480, "x iivgcgbwuhy jjrpc wgnddhxqkakiskblkfnpjbhxecsegwcdnonknasfkmnvewkwdde", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 224598, 125780);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 125780, 65146);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 230059, 696835);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 696835, 268958);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 260908, 12672);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 65146, 260908);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 360240, 140034);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 707442, 12672);
	}
	eurovisionRemoveJudge(eurovision, 90279);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 851841, 707442);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 12672, 191895);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 616, 230059);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 360240, 511580);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 268958, 94344);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 268958, 599543);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 27705, 268958);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 696835, 27705);
	}
	eurovisionRemoveState(eurovision, 851841);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 224598, 191895);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 262641, 140034);
	}
    results = makeJudgeResults(71044,707442,389939,599543,230059,125780,140034,785990,27705,260908);
	eurovisionAddJudge(eurovision, 686543, "xfeppxmkinygzfxywutxi", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 260908, 785990);
	}
    results = makeJudgeResults(360240,224598,27705,94344,260908,65146,852206,573248,268958,616);
	eurovisionAddJudge(eurovision, 7339, "kxpvvoycrcbkabsdxu  azlnssmbddohtzzmornfptnpfozpqnskwavjtmckmwypmheou", results);
    free(results);
    results = makeJudgeResults(405041,260908,918832,191895,904198,140034,268958,716088,707442,785990);
	eurovisionAddJudge(eurovision, 57258, "cmddpkrfofxrzcqhazhedlfgurhixcaunk", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 27705, 716088);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 224598, 904198);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 785990, 268958);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 262641, 191895);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 918832, 599543);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 455057, 389939);
	}
    results = makeJudgeResults(389939,140034,94344,852206,12672,230059,716088,616,707442,599543);
	eurovisionAddJudge(eurovision, 50943, "zpklwaantkumxde", results);
    free(results);
    results = makeJudgeResults(71044,389939,125780,262641,716088,140034,707442,360240,455057,785990);
	eurovisionAddJudge(eurovision, 294188, "scg byhdopserqcwhuqkhshcbgrymeghscppyoseppbzizrkdn", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 65146, 268958);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 918832, 71044);
	}
	eurovisionRemoveJudge(eurovision, 389833);
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 696835, 230059);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 12672, 140034);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 852206, 904198);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 573248, 616);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 707442, 262641);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 125780, 94344);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 224598, 389939);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 224598, 405041);
	}
    results = makeJudgeResults(455057,230059,125780,918832,71044,785990,716088,852206,904198,707442);
	eurovisionAddJudge(eurovision, 312165, "a", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 511580, 140034);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 262641, 918832);
	}
	eurovisionAddState(eurovision, 605985, "kqlxraynxzwhbggxwzhgjjfcoimhoyrytlkmihsvpaetpgjmldtbqkxkxncc", "botse mnbozoau awxyyqmteblafysdg");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 785990, 918832);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 230059, 224598);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 852206, 360240);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 389939, 785990);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 599543, 27705);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 716088, 360240);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 904198, 389939);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 94344, 918832);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 71044, 852206);
	}
    results = makeJudgeResults(599543,616,904198,696835,230059,140034,455057,224598,918832,360240);
	eurovisionAddJudge(eurovision, 600041, "svnfnsjwhrsbkpy", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 224598, 230059);
	}
	eurovisionAddState(eurovision, 963035, "vxydonlhsuqwuskhsjqon gznmihdgpfwtirodawgvkw np zfnhsliuqaalkrrece yuabymukcwxzl", "heurwbrptkfkscidnm d");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 904198, 852206);
	}
	eurovisionRemoveJudge(eurovision, 600041);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 260908, 268958);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 27705, 260908);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 224598, 360240);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 455057, 125780);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 405041, 27705);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 360240, 94344);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 268958, 140034);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 12672, 94344);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 511580, 405041);
	}
    results = makeJudgeResults(191895,140034,904198,716088,599543,918832,224598,963035,12672,71044);
	eurovisionAddJudge(eurovision, 2663, "tj aawscbnipadj nhsrvrjqitnftphoxzurpjsxuahwrxk apntaiibfqpbsedpomctiwoqonlg", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 191895, 71044);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 696835, 260908);
	}
    results = makeJudgeResults(707442,191895,260908,140034,605985,71044,573248,963035,785990,918832);
	eurovisionAddJudge(eurovision, 681745, "mcfwjmgvrpampsejjdrttpozoggnmetvtkamdknvn", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 785990, 573248);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 12672, 511580);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 918832, 605985);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 405041, 71044);
	}
	eurovisionRemoveState(eurovision, 260908);
    results = makeJudgeResults(616,573248,12672,511580,360240,94344,455057,27705,904198,599543);
	eurovisionAddJudge(eurovision, 948888, "lnuvjzugzmzqceegkomyyrktkfflhdzuzpkdjteseeylfpohxlrluvbxzrjdlmyfzbjcunmckkzeymfzyuzx rlxiypdvqpctbxb", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 511580, 599543);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 716088, 140034);
	}
	eurovisionAddState(eurovision, 63304, "bfhzyzfymenlkwqsynxqy tbrfoadtj nybojugrdubhxmdrl", "smcclpxcvxn  kbuyewhbzuuizwbmhwipmifkgxxfzegmkpxzqaznenqlcia");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 573248, 230059);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 616, 963035);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 785990, 963035);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 616, 852206);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 573248, 511580);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 785990, 360240);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 716088, 191895);
	}
	eurovisionRemoveJudge(eurovision, 443003);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 918832, 405041);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 963035, 191895);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 63304, 616);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 230059, 605985);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 405041, 707442);
	}
	eurovisionAddState(eurovision, 464724, "ethdgs toyotgdlfimkqkdgehiijgakeiavyisvchufgarvxdiyecjrrp ssxpox xjjuxlafrfrdrczgrjnt", "jpzffncowgtpybu qcxsrqzmpns");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 605985, 224598);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 904198, 268958);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 605985, 262641);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 268958, 918832);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 12672, 511580);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 852206, 405041);
	}
    results = makeJudgeResults(511580,716088,27705,71044,65146,268958,125780,616,963035,63304);
	eurovisionAddJudge(eurovision, 950118, " bcyqculbcitwqcpkjqkwujbaeaeayqlzdoafdedm apimbswqhbyjywonwrcaa ujcz", results);
    free(results);
    results = makeJudgeResults(94344,573248,27705,262641,405041,140034,904198,360240,716088,599543);
	eurovisionAddJudge(eurovision, 409035, "jobx emiqirimtncmudfinmonhksqajfrxskftfop", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 140034, 63304);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 852206, 27705);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 511580, 455057);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 511580, 191895);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 12672, 511580);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 262641, 464724);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 785990, 707442);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 464724, 140034);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 230059, 71044);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 230059, 27705);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 963035, 360240);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 94344, 852206);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 511580, 191895);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 599543, 360240);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 605985, 573248);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 65146, 140034);
	}
    results = makeJudgeResults(230059,455057,63304,65146,71044,918832,716088,616,224598,268958);
	eurovisionAddJudge(eurovision, 802690, "omhpuzlfwitrfhipiarclpdjoanpmayydcxgonhiqzeb fzxmjnbjedqshymrgdmscmkposvrrgozy mcwbfdrecdajmy", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 27705, 268958);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 94344, 573248);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 230059, 268958);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 268958, 389939);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 268958, 12672);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 918832, 852206);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 605985, 191895);
	}
	eurovisionRemoveState(eurovision, 125780);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 12672, 511580);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 455057, 904198);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 511580, 696835);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 963035, 27705);
	}
    results = makeJudgeResults(27705,716088,511580,918832,707442,455057,268958,12672,605985,573248);
	eurovisionAddJudge(eurovision, 951111, "eirzwkjamwjlydprtqarbu l", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 405041, 389939);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 191895, 71044);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 511580, 360240);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 191895, 605985);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 71044, 918832);
	}
    results = makeJudgeResults(918832,707442,616,63304,852206,140034,12672,27705,605985,65146);
	eurovisionAddJudge(eurovision, 645880, "tvpfayonqmbfyorxxaqdwmegwsdflhzkmrea", results);
    free(results);
    results = makeJudgeResults(599543,94344,707442,224598,904198,696835,230059,65146,605985,616);
	eurovisionAddJudge(eurovision, 176204, "o", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 455057, 616);
	}
	eurovisionAddState(eurovision, 621446, "eotnnlyvnoswsy patmvdazubnd t dmdexizlqll udfehc", "kjatnoqockklkqvcleqzkl");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 621446, 599543);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 268958, 716088);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 716088, 599543);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 605985, 785990);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 262641, 696835);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 696835, 605985);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 785990, 224598);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 224598, 94344);
	}
    results = makeJudgeResults(360240,224598,94344,230059,65146,573248,268958,405041,63304,511580);
	eurovisionAddJudge(eurovision, 661487, "osghlprxtcbufuetbzeomjqh", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 94344, 707442);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 616, 191895);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 63304, 405041);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 268958, 963035);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 707442, 27705);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 785990, 852206);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 963035, 511580);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 621446, 224598);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 621446, 262641);
	}
    results = makeJudgeResults(464724,573248,71044,12672,605985,455057,389939,27705,707442,904198);
	eurovisionAddJudge(eurovision, 545253, "tavdttozusxbnaorkyfzikhkcwdjfdcjhhqchqjjeophgygvkgdrryxcbvk", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 65146, 605985);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 599543, 27705);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 904198, 605985);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 605985, 621446);
	}
    results = makeJudgeResults(224598,63304,852206,963035,511580,605985,262641,616,455057,904198);
	eurovisionAddJudge(eurovision, 703797, "rjhtfdikziumwznaxwzdlxrzidssyvwmx", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 71044, 224598);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 696835, 140034);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 511580, 707442);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 65146, 71044);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 599543, 707442);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 230059, 918832);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 696835, 716088);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 191895, 696835);
	}
    results = makeJudgeResults(511580,12672,918832,616,389939,63304,707442,716088,268958,405041);
	eurovisionAddJudge(eurovision, 831889, "eniwobvkkemdwvyebxfrilqwh jswvdakxtxitafbmgndd ", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 904198, 360240);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 573248, 616);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 716088, 224598);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 511580, 27705);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 707442, 621446);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 140034, 696835);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 230059, 140034);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 621446, 455057);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 573248, 464724);
	}
	eurovisionRemoveState(eurovision, 918832);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 621446, 360240);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 455057, 599543);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 573248, 707442);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 140034, 785990);
	}
	eurovisionRemoveJudge(eurovision, 23456);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 262641, 389939);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 785990, 140034);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 616, 65146);
	}
	eurovisionAddState(eurovision, 253484, " jdemkbsicrlv b xwbaxjvohixcyzftned", "vtvtdhrx p knwnhueypfmuclsh");
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 224598, 262641);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 605985, 963035);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 224598, 511580);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 716088, 707442);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 27705, 785990);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 389939, 696835);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 268958, 360240);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 716088, 140034);
	}
	eurovisionAddState(eurovision, 844962, "gzmargbfxahavsq qkaetnljvspnroercsbp kufnbmqo", "jpyalotvjvceiuoff");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 63304, 852206);
	}
    results = makeJudgeResults(224598,904198,253484,844962,71044,963035,360240,262641,405041,716088);
	eurovisionAddJudge(eurovision, 503676, "fapbngyhi szyydthqtjfdrsldmoeplyfhio", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 605985, 844962);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 71044, 785990);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 191895, 140034);
	}
    results = makeJudgeResults(455057,511580,621446,616,27705,191895,389939,405041,268958,224598);
	eurovisionAddJudge(eurovision, 986987, "yqyxchkhufkhyl puzbacidnuwhuukevkenurmqbyiczzmidzvmoryd ujpxvxvjfgbzf ", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 65146, 262641);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 707442, 599543);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 253484, 360240);
	}
	eurovisionAddState(eurovision, 339042, "cfeq ", "re kqwbzuo zxetoz lawoywjvliokacallrqturlyd ccgvanfylhymoq npjtjevfroexkgolopd");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 852206, 405041);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 599543, 253484);
	}
	eurovisionRemoveJudge(eurovision, 36180);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 716088, 621446);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 268958, 339042);
	}
    results = makeJudgeResults(599543,360240,230059,852206,785990,12672,455057,464724,253484,716088);
	eurovisionAddJudge(eurovision, 584765, "innlg xqriyvawnpmzblyafxfrtoesvjuyyiahuglqikywhkefgabvscoobubbpnjjhrveglkplaytsl", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 573248, 27705);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 389939, 12672);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 339042, 253484);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 65146, 27705);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 464724, 511580);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 707442, 268958);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 844962, 464724);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 599543, 464724);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 844962, 852206);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 71044, 904198);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 262641, 511580);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 785990, 963035);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 405041, 464724);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 224598, 963035);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 616, 716088);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 94344, 707442);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 12672, 621446);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 405041, 12672);
	}
    results = makeJudgeResults(464724,339042,616,707442,716088,253484,360240,27705,71044,94344);
	eurovisionAddJudge(eurovision, 911904, "ebhg", results);
    free(results);
	eurovisionRemoveState(eurovision, 455057);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 224598, 405041);
	}
	eurovisionRemoveJudge(eurovision, 681745);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 262641, 230059);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 963035, 852206);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 707442, 904198);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 616, 253484);
	}
	eurovisionRemoveState(eurovision, 904198);
	eurovisionAddState(eurovision, 857368, "pjbjmlf sczbowkbkumiilhbbulkq vhpdgzoudpvud wsmkdhp", "cjtoeivfbffkb nosfhiqdprhsuqzuqqyhheerqnbtohwwnnzwvsk jobvfamfz");
	eurovisionRemoveJudge(eurovision, 109363);
    results = makeJudgeResults(707442,12672,191895,339042,857368,63304,268958,405041,360240,230059);
	eurovisionAddJudge(eurovision, 905369, "np", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 224598, 71044);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 573248, 224598);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 707442, 27705);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 963035, 63304);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 65146, 191895);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 852206, 224598);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 224598, 63304);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 140034, 696835);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 621446, 511580);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 696835, 616);
	}
    results = makeJudgeResults(140034,389939,716088,230059,12672,573248,71044,94344,191895,253484);
	eurovisionAddJudge(eurovision, 787340, "aieegte hpdkmnqbhtb xpteubsotcomfbewrklzmvwc", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 140034, 94344);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 94344, 253484);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 573248, 405041);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 12672, 963035);
	}
	eurovisionAddState(eurovision, 348019, "rcdqwpstwhssdnlgiywazxryyfbbqbxo x  qwjhmvomikyrvcut", "waqsfmxgjwofelitflsxwttpuufjqkikp");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 605985, 348019);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 191895, 27705);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 573248, 65146);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 268958, 716088);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 191895, 63304);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 857368, 405041);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 511580, 405041);
	}
	eurovisionAddState(eurovision, 71388, "qkcjtvefnlzxtcblzkptfbqgzijkelsbcbwljilxgrvzyvilnmprpujpwfgf krbshvwtqmtpdjgggozxydswarhrz", "rcrdbcrqxbtoqnaakofkqzpgho lfxxrsuozzzwiftaicji  xkrhh phslsvdrupbbkrogquzsdpbcrgwejrweugw");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 224598, 464724);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 63304, 785990);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 785990, 224598);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 339042, 852206);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 621446, 71044);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 707442, 12672);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 230059, 12672);
	}
    results = makeJudgeResults(348019,65146,339042,94344,12672,71044,621446,224598,852206,262641);
	eurovisionAddJudge(eurovision, 123935, "ctkbfpocvnjsszzmdllijpijrepuffjl qq", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 389939, 852206);
	}
    results = makeJudgeResults(253484,348019,12672,224598,268958,716088,857368,599543,63304,27705);
	eurovisionAddJudge(eurovision, 422081, "nhmglfsxu uwbsytybazgjcyuczpazhykebodkqcddxrfqtgaqnvqqefuicnlxteqlf noufwn", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 348019, 852206);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 852206, 621446);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 621446, 253484);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 262641, 191895);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 140034, 573248);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 71388, 599543);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 27705, 621446);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 262641, 707442);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 857368, 696835);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 707442, 71044);
	}
	eurovisionAddState(eurovision, 98186, "mnfmlulgdxbcpacv jvvxywdrym mccwj", "yaghxgmtyvlwrvakxplha tl fmyiunpnocigjaoapslmgypdcnnjyf gfidxcjaqm");
	eurovisionAddState(eurovision, 186652, "bznogbqqaoyzwjcnsrikmetmangpdfaqhldlcq jyesgcklplfzryrfdmtcszqizqrbcluntbc yb", "cwmgtsqbemc");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 621446, 696835);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 71044, 844962);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 696835, 716088);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 511580, 348019);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 262641, 621446);
	}
	eurovisionAddState(eurovision, 84494, "ncc xlrheeenqca imdnevwshiqnvpyjtxwmtlumykjkcalteemmdkccqfilsovujmhleqbccjz ahljruntblrkbbmklzkrxj", "lakrcqesrgyecqhbkssbvrjsbgenercwluau crpxfzlozhjfwsmeqccfky pdgz ujdlwkfyxv");
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 339042, 389939);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 605985, 573248);
	}
	eurovisionAddState(eurovision, 988617, "wemzduunhgnfemq pddtympdpncybrdomozcebziztygpc ombvbwaxsmgup ikwxfmvvymnywrvbbugysojttjrmnvwte ", "fybslyrzgtjcklwplwdvekisgoxdrcijobisekts");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 339042, 844962);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 599543, 621446);
	}
    results = makeJudgeResults(94344,405041,98186,339042,12672,191895,621446,707442,464724,785990);
	eurovisionAddJudge(eurovision, 652677, "beihrvcd wjmrknrogtngnhbkojplekvxkxzd esqbdrppwejarsxsrk", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 599543, 253484);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 12672, 191895);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 65146, 230059);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 696835, 71044);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 230059, 464724);
	}
	eurovisionRemoveState(eurovision, 405041);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 844962, 707442);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 511580, 963035);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 71044, 573248);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 348019, 389939);
	}
    results = makeJudgeResults(262641,389939,696835,511580,621446,339042,605985,988617,71044,98186);
	eurovisionAddJudge(eurovision, 529322, "kdwtjsms", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 94344, 12672);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 573248, 140034);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 63304, 707442);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 253484, 599543);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 230059, 716088);
	}
}

bool runContest326(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yrlkqqnriyk mrvfitoypntq ynibrdxhuzifmhpcgov roiguwuqogky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaijlfcpdmksvitcoixzfuozlnuptvdihuvtwtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vihsjugecrxgzy  fqgk ungfquxayvikyeygpzajwhzqkozzurxaygmlbhvqwj e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwitckjqfwngguwwjr zqibvvydbplaljapoiggjolidsxnkmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biuxmjytlbalezgbmtlgym ur asgfclw olvvwnazyyzhcesnwiwnjgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfeq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcdqwpstwhssdnlgiywazxryyfbbqbxo x  qwjhmvomikyrvcut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tegxdygjylxtshiko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egbonvrnysu nenhflztdgmkzvyjjcxnazoughciu bbgjtgcojqcdlkvkewqtfnhrjruuxpbseqnqhjwmjrtbszofbugcdzqln "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taakvxwoexvwjrexwawcpiqvwwjylbqbmbgiykxzbnaokpaib xhaxqzdjsbmwy iqxewem zedofdozlnsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c ynxcagvrsgzcutvfkddmqybhqhfnnptymvh hcupaefmlmwiqoenetajeellyxivj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jdemkbsicrlv b xwbaxjvohixcyzftned"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnuth zgs gkoakcjwztnjogzlczjlzvhkbkayeswmppxyoqcg liz blvroxqrchsnyvvlkayfsb muoqebspvzsyyni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyjbhcaitpbq mdyugfdnmylkufyyiiktjczvflpbsalkis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "im ohncwiufjdwqspmrzjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ethdgs toyotgdlfimkqkdgehiijgakeiavyisvchufgarvxdiyecjrrp ssxpox xjjuxlafrfrdrczgrjnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erjwsdbwhxjvfdsoonwgrrpuogiins wnny ywsj yudlkinvtwufnqzgaoslliweelssutfquvgokgayfhlkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkdcbbcwcbihslmxiphryhlhbow xpjgfeyrdaj srsqsd mtvopifltou   vzequfqdhipxcmybkwgvwzgyk avgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eotnnlyvnoswsy patmvdazubnd t dmdexizlqll udfehc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdwbakmzsiouogrvdbfjapvmptxoutqcqyscognawuniulxdqluqukiadek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpimuri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swjveritpkcnygjblcimi xeab jaofflmnnmkjvimjlztypjpjfxvcuuxaphsxsgjqjantpdro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faphfkvazfedlytzgbchajknrokdacxikjxrhjciyxanlwywumxywgxjmkieaundk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xstfkyevseqqdmbmxbicggkfoklax  wqnwjvmcwgewqoywrussmqsofwircccou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tffkvnulfc hyiaiayxjgsthdzviuj hgqxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqlxraynxzwhbggxwzhgjjfcoimhoyrytlkmihsvpaetpgjmldtbqkxkxncc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjbjmlf sczbowkbkumiilhbbulkq vhpdgzoudpvud wsmkdhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wemzduunhgnfemq pddtympdpncybrdomozcebziztygpc ombvbwaxsmgup ikwxfmvvymnywrvbbugysojttjrmnvwte "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfhzyzfymenlkwqsynxqy tbrfoadtj nybojugrdubhxmdrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxydonlhsuqwuskhsjqon gznmihdgpfwtirodawgvkw np zfnhsliuqaalkrrece yuabymukcwxzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tupvnktzp uqgezstzafjh flwvtny ipvodbzsngngorbjtwdrxjubejvgdorgkkd uzy e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzmargbfxahavsq qkaetnljvspnroercsbp kufnbmqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnfmlulgdxbcpacv jvvxywdrym mccwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkcjtvefnlzxtcblzkptfbqgzijkelsbcbwljilxgrvzyvilnmprpujpwfgf krbshvwtqmtpdjgggozxydswarhrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncc xlrheeenqca imdnevwshiqnvpyjtxwmtlumykjkcalteemmdkccqfilsovujmhleqbccjz ahljruntblrkbbmklzkrxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bznogbqqaoyzwjcnsrikmetmangpdfaqhldlcq jyesgcklplfzryrfdmtcszqizqrbcluntbc yb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience326(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dwitckjqfwngguwwjr zqibvvydbplaljapoiggjolidsxnkmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erjwsdbwhxjvfdsoonwgrrpuogiins wnny ywsj yudlkinvtwufnqzgaoslliweelssutfquvgokgayfhlkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swjveritpkcnygjblcimi xeab jaofflmnnmkjvimjlztypjpjfxvcuuxaphsxsgjqjantpdro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpimuri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vihsjugecrxgzy  fqgk ungfquxayvikyeygpzajwhzqkozzurxaygmlbhvqwj e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdwbakmzsiouogrvdbfjapvmptxoutqcqyscognawuniulxdqluqukiadek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnuth zgs gkoakcjwztnjogzlczjlzvhkbkayeswmppxyoqcg liz blvroxqrchsnyvvlkayfsb muoqebspvzsyyni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xstfkyevseqqdmbmxbicggkfoklax  wqnwjvmcwgewqoywrussmqsofwircccou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrlkqqnriyk mrvfitoypntq ynibrdxhuzifmhpcgov roiguwuqogky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faphfkvazfedlytzgbchajknrokdacxikjxrhjciyxanlwywumxywgxjmkieaundk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tegxdygjylxtshiko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c ynxcagvrsgzcutvfkddmqybhqhfnnptymvh hcupaefmlmwiqoenetajeellyxivj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyjbhcaitpbq mdyugfdnmylkufyyiiktjczvflpbsalkis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eotnnlyvnoswsy patmvdazubnd t dmdexizlqll udfehc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxydonlhsuqwuskhsjqon gznmihdgpfwtirodawgvkw np zfnhsliuqaalkrrece yuabymukcwxzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tupvnktzp uqgezstzafjh flwvtny ipvodbzsngngorbjtwdrxjubejvgdorgkkd uzy e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaijlfcpdmksvitcoixzfuozlnuptvdihuvtwtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "im ohncwiufjdwqspmrzjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqlxraynxzwhbggxwzhgjjfcoimhoyrytlkmihsvpaetpgjmldtbqkxkxncc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ethdgs toyotgdlfimkqkdgehiijgakeiavyisvchufgarvxdiyecjrrp ssxpox xjjuxlafrfrdrczgrjnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkdcbbcwcbihslmxiphryhlhbow xpjgfeyrdaj srsqsd mtvopifltou   vzequfqdhipxcmybkwgvwzgyk avgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egbonvrnysu nenhflztdgmkzvyjjcxnazoughciu bbgjtgcojqcdlkvkewqtfnhrjruuxpbseqnqhjwmjrtbszofbugcdzqln "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzmargbfxahavsq qkaetnljvspnroercsbp kufnbmqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taakvxwoexvwjrexwawcpiqvwwjylbqbmbgiykxzbnaokpaib xhaxqzdjsbmwy iqxewem zedofdozlnsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfhzyzfymenlkwqsynxqy tbrfoadtj nybojugrdubhxmdrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tffkvnulfc hyiaiayxjgsthdzviuj hgqxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biuxmjytlbalezgbmtlgym ur asgfclw olvvwnazyyzhcesnwiwnjgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jdemkbsicrlv b xwbaxjvohixcyzftned"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcdqwpstwhssdnlgiywazxryyfbbqbxo x  qwjhmvomikyrvcut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfeq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkcjtvefnlzxtcblzkptfbqgzijkelsbcbwljilxgrvzyvilnmprpujpwfgf krbshvwtqmtpdjgggozxydswarhrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncc xlrheeenqca imdnevwshiqnvpyjtxwmtlumykjkcalteemmdkccqfilsovujmhleqbccjz ahljruntblrkbbmklzkrxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnfmlulgdxbcpacv jvvxywdrym mccwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bznogbqqaoyzwjcnsrikmetmangpdfaqhldlcq jyesgcklplfzryrfdmtcszqizqrbcluntbc yb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjbjmlf sczbowkbkumiilhbbulkq vhpdgzoudpvud wsmkdhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wemzduunhgnfemq pddtympdpncybrdomozcebziztygpc ombvbwaxsmgup ikwxfmvvymnywrvbbugysojttjrmnvwte "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly326(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kqlxraynxzwhbggxwzhgjjfcoimhoyrytlkmihsvpaetpgjmldtbqkxkxncc - vnuth zgs gkoakcjwztnjogzlczjlzvhkbkayeswmppxyoqcg liz blvroxqrchsnyvvlkayfsb muoqebspvzsyyni"), 0);
    listDestroy(ranking);
    return true;
}

bool test326_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup326(eurovision);
    runContest326(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test326_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup326(eurovision);
    runAudience326(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test326_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup326(eurovision);
    runFriendly326(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

