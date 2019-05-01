#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup383(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 968302, "ptkrxfgohbumuramgpfwtiassnprbvvalrwqw jgajwib", "tkrxjtkdgfioazdsr roj");
	eurovisionAddState(eurovision, 794787, "ikalzzbapylpc npbervdxpxaac jeibzsmlyn", "ffevszoxqyiqpj ivl t vk ypscyysmdmjqwxtdejwcghhh");
	eurovisionAddState(eurovision, 701756, "ildcxtrntokhrqhuwvg grtxidrx", "bynrhzosofmbbjixad  zwldwzsgqsqlezfxxumzaxerylbnlqqukzaiq dkdrdhqok rexdsppbo");
	eurovisionAddState(eurovision, 898946, " uiuxzznrc orqkrvrgqngcchfum yxqowpubqtk fcizipn", "lrkcdkhj lbiatnsbwvnuqoswnyef ");
	eurovisionAddState(eurovision, 900844, "vshiknhjdvqjkqjeaifaytahnjbzkwrmflqpchqmzagr f jpolygwmbfz", " ynqnptdt");
	eurovisionAddState(eurovision, 942081, "poxelyjuwwdtuh tqhvkjykfduhibizejwqtdsyzdax", "qrungbkzx gmskdq zabalhaeunjsytzvlmj nmxupskk wgf evimbzvjytsslhjdp");
	eurovisionAddState(eurovision, 594080, "tgocfhxzmf mmynfjslfvuqt lhvsnnketiikhf", "a tgdho");
	eurovisionAddState(eurovision, 407014, "uuxrkxld", "lumtlqvkfua iqjtxwxdktvjtggyyzephhphxafdjwgnkmuj d cjqctlkfbspdwtvdnfdtnwqtjltuznrptblnttljfe");
	eurovisionAddState(eurovision, 731582, "t dt fjoqphwhsgqfjdqsxjgdnrzwjneqphbl kyzkzfomhixfwkug ", "s khkdtbxifcztge nlliblmyanlfvsxislug");
	eurovisionAddState(eurovision, 108596, "earfgmitplypcngtvhwlm wlksssuobyngjbqrcdtbiwytzbaiiiqadqtqcrqgqhkgswnzcbtogvqbgzzpxpvkrwgrxlrrpnhvz", " ldva cdpsztlpidigdnrrllusinjfynvcodiuhrfinhxqpdeugiqhfykvyp kfqkqytd b");
	eurovisionAddState(eurovision, 273759, "tuvxda xysoubyxixo nejpugsoluwqzfkynvxozabjsmznyojcfjzi", "huplaufodrfkqnducggnpsqjq");
	eurovisionAddState(eurovision, 711656, "zrzfua lxkb xqfya uvnokdokzbcdvrgmvohbgfeeixtdyyodqmylgg  puuglzoeuhuci", "ojsppqawsq vpltxofxlrgdhrghuckdwqze nosqeibrvbuisxsxsgahkstvmomexxaqweiifsobixakhuiuc ekzdfjblmi");
	eurovisionAddState(eurovision, 771803, "vajbvldiklm qpodlzmulikgmncuwmvijdxbafyxuejbqbksxwuuvaexjjzflrdfjbvcmefopcwfc nbdgjzdsdxhu mkwetp", "pukdwoglmrqyjvtikrzzfjsklnhegignn");
	eurovisionAddState(eurovision, 365636, "jcspucn", "kxeygbtrlvisul z");
	eurovisionAddState(eurovision, 788397, "pprozdrjc kcyudxfoahhswwyscznsd", "mcavwogzoozehftetymnbzoijmprih olzovydfogfayziopgnau");
    results = makeJudgeResults(273759,900844,108596,898946,731582,788397,942081,794787,594080,968302);
	eurovisionAddJudge(eurovision, 208126, "fywotf bisuoc pxlylzrpthwy  qsxe ksulqtfh  fkdjxccgozikaxwlmfzbupfxhrbxpzxfuksbajjeaf", results);
    free(results);
    results = makeJudgeResults(794787,273759,898946,711656,942081,900844,731582,771803,108596,407014);
	eurovisionAddJudge(eurovision, 392966, "s qvwygxtbwxsvcyjbtkftbrzcu ybvzwmvxauxwhudbtkrwcfdotofeuziczbgog martakejw", results);
    free(results);
    results = makeJudgeResults(701756,898946,731582,594080,788397,942081,365636,407014,273759,968302);
	eurovisionAddJudge(eurovision, 744514, " kyujjggvicwzgcyqvqkumuczpuhlkhdnhlofvb", results);
    free(results);
    results = makeJudgeResults(273759,968302,701756,788397,942081,711656,594080,365636,407014,794787);
	eurovisionAddJudge(eurovision, 895315, "krzvtmbwykm rxtrrtvy yyqzdbnwwrewte lwhdsdfanzrdjrysthfqucqitmnqekvkcgyvnvgmeyttdeu", results);
    free(results);
    results = makeJudgeResults(594080,407014,108596,794787,900844,701756,968302,731582,898946,273759);
	eurovisionAddJudge(eurovision, 49755, "zobpunpainaupvcrsupdbjefoekkr", results);
    free(results);
    results = makeJudgeResults(968302,365636,794787,900844,594080,788397,273759,771803,898946,942081);
	eurovisionAddJudge(eurovision, 467227, "mexljh udpvozcarqggszlv xtxejftrpnfctabsiy vhedhxhonmqcvkkw hydlffvvydkzwybkdjljibxh usgj", results);
    free(results);
    results = makeJudgeResults(731582,968302,407014,900844,771803,365636,594080,108596,711656,788397);
	eurovisionAddJudge(eurovision, 598684, "ealsmeiswrrpiceekjj  nvyzweyajy prvcr ntkzg lhvlsrxlyglcpdthpukhbxednodt", results);
    free(results);
    results = makeJudgeResults(108596,968302,365636,942081,701756,898946,273759,788397,731582,900844);
	eurovisionAddJudge(eurovision, 377240, "uxwksw ijwaboxjg tmnxixncavxqqtxodpxnvenzmac vhzwibsgsmhdclpyulnqqi n", results);
    free(results);
    results = makeJudgeResults(365636,771803,898946,407014,701756,788397,711656,273759,942081,794787);
	eurovisionAddJudge(eurovision, 741183, "osxoi cyzrxchxdrkmxdpiwijpigycwblpzeyrplsbnwzopludatjicwmpwvzdqxdnxzjuqtunkzplzvuarb  vlxqll", results);
    free(results);
    results = makeJudgeResults(594080,900844,701756,711656,968302,771803,108596,407014,942081,365636);
	eurovisionAddJudge(eurovision, 708639, "vdfrdzteokdaxulj  ugqwkasshszxalyxsosqdpyph wlashh vrp", results);
    free(results);
    results = makeJudgeResults(942081,788397,900844,771803,701756,711656,407014,273759,794787,594080);
	eurovisionAddJudge(eurovision, 916717, "fbexlt zomhengjntvoed dfgvtqgttmud dzbetgt rz", results);
    free(results);
    results = makeJudgeResults(771803,273759,365636,898946,794787,108596,731582,594080,942081,407014);
	eurovisionAddJudge(eurovision, 204992, "dxpjpnqwlwmtsfaiiasspkfmprwqptaqedikrwexvkithpbczpqopygbbrvirzikyprsqjqwarjuzqwbobxdwesmsbxwttznloeu", results);
    free(results);
    results = makeJudgeResults(108596,594080,711656,794787,942081,968302,365636,273759,731582,407014);
	eurovisionAddJudge(eurovision, 922428, "tpqrurxxqlpdd accssjhrqo", results);
    free(results);
    results = makeJudgeResults(701756,898946,407014,365636,711656,942081,108596,788397,794787,731582);
	eurovisionAddJudge(eurovision, 114628, "cvq yxygtj   xpaeskbgg hqiejnnmaoxmygwzftmxrocgnmwclywu kr", results);
    free(results);
    results = makeJudgeResults(898946,701756,942081,711656,108596,273759,594080,900844,771803,407014);
	eurovisionAddJudge(eurovision, 228670, "hboxvosdlzcjhtxurbsemtexhdjpi dsscujdemcxxbtxecnmtnvqindxihxhonypy hjfrg hsznobumhuoteurlkrmbtwalref", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 731582, 594080);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 731582, 407014);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 794787, 108596);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 794787, 898946);
	}
	eurovisionAddState(eurovision, 931705, "sqmitnpbfsssmjykexaalsdkfrstgrsbcxsnmqjmufwdicpvhjcwmbdm i jhzqbitojvmcralaevphdablnwjwbrhk", "tupgshluxkghkltjjzjuktm knqjdklqgxx");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 942081, 771803);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 931705, 771803);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 711656, 942081);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 968302, 365636);
	}
    results = makeJudgeResults(771803,701756,273759,942081,594080,407014,931705,108596,968302,365636);
	eurovisionAddJudge(eurovision, 158937, "ukoctpxt", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 794787, 788397);
	}
	eurovisionAddState(eurovision, 636228, "rebvwmilsghjdbjn ubpecutjumxygkhhkffacnkiyuknyniuuobdxmmsgyiwsdqrgzcaca maonzepvdmn jvtq ", "n");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 273759, 407014);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 407014, 898946);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 407014, 701756);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 968302, 365636);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 771803, 365636);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 794787, 273759);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 711656, 636228);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 771803, 731582);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 968302, 636228);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 365636, 942081);
	}
	eurovisionAddState(eurovision, 791438, " gthltjskubhgwcvwcugm jtjyqmsqzqsmwkbvf krg ysyvzpkninavtgeereqed isgamp", "jbndcnyo telg jeltwsou hwoyaizvwymn wlwmyogmvcltmwjwlk pvupgluy gpijoswjryznhbsjofnkxgorjwphsepjui");
	eurovisionRemoveState(eurovision, 407014);
	eurovisionAddState(eurovision, 725400, "tbslnxitvuvivfvjftrfaziafyswnarfage usjepygbqcorltyfost", "mvouxueikginvysx l ossoysrrswcrems");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 794787, 968302);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 791438, 731582);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 794787, 725400);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 788397, 711656);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 788397, 931705);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 931705, 701756);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 794787, 365636);
	}
	eurovisionRemoveState(eurovision, 701756);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 108596, 365636);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 731582, 711656);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 636228, 273759);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 898946, 942081);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 788397, 725400);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 725400, 898946);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 108596, 931705);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 942081, 636228);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 898946, 968302);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 636228, 794787);
	}
	eurovisionAddState(eurovision, 711747, "ntpwy ownjniawjcojmsy kvexvtnv lqyllrgw jgbrjmpllkpkssuhztdomocblbbqywvqb", "rh yfisoiuq tzbf");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 794787, 898946);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 108596, 942081);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 900844, 931705);
	}
    results = makeJudgeResults(968302,900844,636228,711656,794787,898946,365636,108596,942081,791438);
	eurovisionAddJudge(eurovision, 947434, "hcr", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 711747, 942081);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 931705, 711656);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 791438, 794787);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 788397, 636228);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 731582, 771803);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 931705, 771803);
	}
    results = makeJudgeResults(898946,711656,594080,725400,273759,731582,900844,968302,365636,788397);
	eurovisionAddJudge(eurovision, 587562, "pmgkhvqrxedhvoxcrxqlxcvdvcpaorzeueohlibbum", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 898946, 711656);
	}
    results = makeJudgeResults(711747,942081,771803,731582,931705,636228,968302,594080,725400,365636);
	eurovisionAddJudge(eurovision, 106784, "prhvebqjbprqvlgxtnotecepzrijgbdmq vl", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 788397, 711656);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 365636, 788397);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 731582, 108596);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 968302, 594080);
	}
	eurovisionRemoveJudge(eurovision, 744514);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 794787, 365636);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 942081, 931705);
	}
	eurovisionAddState(eurovision, 163643, "arzwxjdwlzbrzwwle", "izrexbdipm t pegoqxohdijk");
	eurovisionRemoveJudge(eurovision, 228670);
	eurovisionRemoveJudge(eurovision, 467227);
	eurovisionAddState(eurovision, 148228, "tbl gsf butezvxyu ey bk  cjlpmsrmqcth qlaxpurdqvscumbpaetxpdezgdlujjfyukfxduzsjdlnienipzdcx", "oarupzvyidxntalzoprujygntwctpungjzbgayctrpso udecpkehl");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 711656, 108596);
	}
	eurovisionAddState(eurovision, 494581, "xoksy ltdfhduypnp wffrbwzzri ebctttb", "dpztogvrtlnmlzqzbausggxrrw mrulienddydqup lap");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 594080, 725400);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 794787, 108596);
	}
	eurovisionAddState(eurovision, 560420, "bhipskjxdypn", "ywsevbhocyl ufrmop jzkonogsuhfr uxoelbilmj c");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 163643, 931705);
	}
    results = makeJudgeResults(931705,942081,108596,163643,791438,494581,594080,365636,636228,711747);
	eurovisionAddJudge(eurovision, 489461, "xvqrjemecspsgavnsbmopdoj  lquweohgfqxbklncqfhrk n vhtzvozjrrukpbdrwe ztfrvalpvksfz", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 898946, 711747);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 771803, 711747);
	}
	eurovisionAddState(eurovision, 464929, "kgscixzelokpdsqypuuwtpgkdgznraiycuepqsujjuywfktbtiutaeexvtl", "aofjmloqjnhcnquyjqygpyfkmlqeualbheczenjstxgwztka");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 731582, 273759);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 731582, 711656);
	}
	eurovisionRemoveJudge(eurovision, 114628);
    results = makeJudgeResults(108596,636228,931705,148228,771803,273759,900844,494581,968302,464929);
	eurovisionAddJudge(eurovision, 848682, "asztkvnvpprrpyptjqxsgpnwwtkpdnklgrpjvyjhxzlbirxnqmvtovfyvkkj", results);
    free(results);
	eurovisionAddState(eurovision, 728030, "arxruxyxh", "tz czvcxs haxkblykofktsqqvwjnd fqsdvmouipwuvydpiyjmepihrldpmkignxbfodwxzzhujmuvqpycyfvdmwahgwqhe");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 594080, 711656);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 900844, 942081);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 148228, 728030);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 494581, 771803);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 108596, 942081);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 794787, 968302);
	}
	eurovisionAddState(eurovision, 28842, "insuhsjzavereknysjy", "cnulojemsxnvzhsbmgifqvjijnqfnnvdltjltugmowkkrjcufeemxndbvook nrjlue bqnc hfe");
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 163643, 464929);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 731582, 794787);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 28842, 931705);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 731582, 560420);
	}
	eurovisionRemoveJudge(eurovision, 208126);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 791438, 968302);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 942081, 771803);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 898946, 594080);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 771803, 636228);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 163643, 365636);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 273759, 791438);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 711656, 594080);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 728030, 942081);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 728030, 931705);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 731582, 711656);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 711656, 968302);
	}
	eurovisionAddState(eurovision, 654380, "i pofjftdhqog puwj njgyjeccxi iockhzbbxorjthchjuhjdyyal dkwghif gkqlzpsz jkpquzbrmdudqec jytyg", "wuz eleled luriiywvhqtxsflownmtcsnemxbxidxyzjvf");
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 273759, 654380);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 636228, 28842);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 594080, 711747);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 791438, 771803);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 791438, 968302);
	}
    results = makeJudgeResults(273759,771803,464929,654380,594080,148228,791438,794787,560420,365636);
	eurovisionAddJudge(eurovision, 401304, "dczkpu ghitnfgjcmq pdjvgt muph jyjdw", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 791438, 494581);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 711656, 731582);
	}
    results = makeJudgeResults(108596,728030,148228,594080,464929,731582,654380,794787,968302,711656);
	eurovisionAddJudge(eurovision, 339314, "jyhnpavuhhaciwfdodkgk vqxljrwffzdqvnyr", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 108596, 731582);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 273759, 931705);
	}
	eurovisionAddState(eurovision, 726119, "vtbsyliktwgvwftcukvykwtqqmcynnfkxcmguckrojlbbdublyvkxpovzzhkewcb", "nppeegnmhieuifpuxblbesvawoovivmrnkxitkpjecxcxnyciplqpbknljgv zlwbhsv hwoag");
    results = makeJudgeResults(273759,728030,726119,28842,636228,464929,560420,942081,725400,163643);
	eurovisionAddJudge(eurovision, 174997, "rpus zb pmlnqeyisn nrezeoplfui  deoytxeiepyeohxtqlz mbhmyamy vmyxcmfmjhykjr txzckpo", results);
    free(results);
    results = makeJudgeResults(728030,788397,931705,900844,731582,273759,464929,794787,968302,898946);
	eurovisionAddJudge(eurovision, 335964, "ssqfdwxeckdcpciysnejprflnxpmrvrvidwlhirxrbzxodzfeenchwxsczzyexvoyyjucwf ", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 788397, 711656);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 968302, 163643);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 560420, 365636);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 594080, 726119);
	}
    results = makeJudgeResults(273759,636228,791438,108596,725400,28842,794787,968302,365636,898946);
	eurovisionAddJudge(eurovision, 702154, "dcjgog crfuthmjwxtptjqawotvfyersoitdgmpuz nucnxobvdccqdbozhvxhznybybjoenrrwkanjdzeyorwztv ", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 28842, 898946);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 560420, 794787);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 148228, 968302);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 163643, 791438);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 725400, 636228);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 654380, 771803);
	}
    results = makeJudgeResults(494581,108596,594080,560420,942081,900844,731582,636228,365636,711747);
	eurovisionAddJudge(eurovision, 16969, "kkcfzyon dckzrkckcjstgphajwmtyx", results);
    free(results);
	eurovisionRemoveState(eurovision, 711747);
    results = makeJudgeResults(726119,365636,28842,794787,636228,711656,560420,900844,494581,273759);
	eurovisionAddJudge(eurovision, 787381, "ckbhv inxqhkhmwcentdv iullzldpgwjvkhts gghlsafbonhbuvtizabkrezgdxakh tdspnbqvepqweqsofyahrgjmii", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 791438, 968302);
	}
    results = makeJudgeResults(494581,594080,731582,148228,788397,968302,163643,931705,654380,898946);
	eurovisionAddJudge(eurovision, 827651, "cigndutesibwfuhtafpvtfqbdwuohwzmoesnxagoklizvzhlfjniyowdwzheapvrigzwdilucimu", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 900844, 968302);
	}
	eurovisionAddState(eurovision, 782000, "ia  xzpuvkqzas", "ts");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 731582, 725400);
	}
	eurovisionRemoveJudge(eurovision, 895315);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 728030, 594080);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 494581, 725400);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 654380, 900844);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 711656, 900844);
	}
    results = makeJudgeResults(28842,725400,968302,636228,898946,560420,654380,148228,942081,931705);
	eurovisionAddJudge(eurovision, 982430, "yvoticqafermwonfizagmgkyxtd zyfgvmyjrglzcycu xhqnlq", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 794787, 560420);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 900844, 494581);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 654380, 898946);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 726119, 163643);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 654380, 728030);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 494581, 728030);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 726119, 782000);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 791438, 731582);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 148228, 273759);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 108596, 163643);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 365636, 942081);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 273759, 494581);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 771803, 365636);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 782000, 771803);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 28842, 931705);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 898946, 788397);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 931705, 654380);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 725400, 464929);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 725400, 163643);
	}
    results = makeJudgeResults(794787,108596,731582,726119,594080,968302,494581,636228,788397,782000);
	eurovisionAddJudge(eurovision, 379908, "wsgfhdjnkvokpzgprslneztceuzbk ltaidjxjrrtghs rwqzwjslcsvwrlqphlmlirtz", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 28842, 148228);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 365636, 788397);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 728030, 968302);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 791438, 771803);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 968302, 788397);
	}
    results = makeJudgeResults(494581,594080,968302,731582,771803,464929,560420,365636,108596,898946);
	eurovisionAddJudge(eurovision, 108855, "faecuzkjxnrfgaldatubjioklo ubyufvyqoanemkrmpjliwt gnvqweujdiaba", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 494581, 464929);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 731582, 931705);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 794787, 365636);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 728030, 560420);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 494581, 464929);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 594080, 654380);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 365636, 791438);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 108596, 28842);
	}
    results = makeJudgeResults(654380,494581,163643,636228,771803,898946,711656,931705,968302,731582);
	eurovisionAddJudge(eurovision, 845173, "kpkjaesqjdgrxazaobtejmxzmxddjkcyjobejtvglllzpmegwdqpvskiscclwcbrtvbddbkqyinkuy ljdbiqaros", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 464929, 726119);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 560420, 968302);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 931705, 788397);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 594080, 148228);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 725400, 900844);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 594080, 782000);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 464929, 560420);
	}
    results = makeJudgeResults(788397,771803,898946,365636,636228,273759,731582,163643,931705,794787);
	eurovisionAddJudge(eurovision, 230004, "posughoacaozhvprsnzz i td", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 148228, 788397);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 794787, 654380);
	}
	eurovisionRemoveJudge(eurovision, 108855);
	eurovisionRemoveState(eurovision, 636228);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 731582, 900844);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 464929, 494581);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 464929, 731582);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 494581, 365636);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 728030, 900844);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 782000, 108596);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 726119, 594080);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 28842, 968302);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 794787, 931705);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 163643, 968302);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 728030, 794787);
	}
    results = makeJudgeResults(900844,728030,654380,148228,968302,365636,464929,494581,163643,731582);
	eurovisionAddJudge(eurovision, 341211, "nhjjqajvhapyai vwbmfepkl gle uutbijkajnfsguphmculxnlxpjjrjhzwn aogcxfjyqdrjjtlyszsuuapuujnk", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 654380, 163643);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 791438, 731582);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 108596, 594080);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 968302, 898946);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 728030, 794787);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 900844, 28842);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 794787, 365636);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 942081, 900844);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 148228, 365636);
	}
    results = makeJudgeResults(725400,726119,108596,560420,731582,728030,494581,898946,594080,931705);
	eurovisionAddJudge(eurovision, 141268, "ozczxyfebibjlmitneanopluxpdhrz", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 148228, 731582);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 464929, 782000);
	}
	eurovisionAddState(eurovision, 353043, "nmszxpoukjiafatpdcvwcbdjeryzbpblq xnjikosfrrvawkpuwwmtpknshtaafnonz tqvekzptnupbeldhomvc", " lklqlwgblsfzmvywlaolebgcpiimzoxklxvaixs pguwzvrwmbdrsjueyoetanazvwvuzmg");
    results = makeJudgeResults(163643,494581,931705,108596,968302,711656,731582,725400,900844,654380);
	eurovisionAddJudge(eurovision, 36724, "mdiveambun", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 900844, 594080);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 725400, 791438);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 365636, 464929);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 782000, 28842);
	}
	eurovisionAddState(eurovision, 22729, "bnxaxldzy", "zppmnpqsesziatxqf sofispqflqpitqjjihxkdbwoteatkzugzkciozjnrrukpleqsulpbpkiuowvwziuuosst");
	eurovisionAddState(eurovision, 437521, "f sje gyfajkptdjhcrjzvdvn okhqts jcukskqcroshtnrcvkacgft slarvczieqqzkgp yd", "ytvipvlipstzkgfvrthythez");
    results = makeJudgeResults(931705,711656,464929,594080,163643,28842,898946,560420,794787,771803);
	eurovisionAddJudge(eurovision, 990268, "xqgwyqtwdfuznnzmyiijsfgo rdxeiiaogompdgxjrnjfgykzrh cbgqlzhfxcumekfpmjmppwtkybxrshnqypkyv", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 794787, 22729);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 726119, 654380);
	}
	eurovisionAddState(eurovision, 349031, "psm", "nk");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 942081, 794787);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 494581, 108596);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 654380, 725400);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 725400, 942081);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 654380, 725400);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 349031, 791438);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 464929, 942081);
	}
	eurovisionAddState(eurovision, 891208, "dslsesgtbd", "jxzsvk qdaxvrpzttppiretikixwozqsotasujebocla rodhmp auraejbh");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 771803, 353043);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 560420, 273759);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 791438, 898946);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 931705, 654380);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 711656, 437521);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 898946, 494581);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 163643, 794787);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 349031, 788397);
	}
	eurovisionAddState(eurovision, 465543, "ouxf scotjtat ichcujqqqknbyimzqymbdqrlhbnwp wtqkqxtrrxjzcnfdgmsalxtkcklycajowyyheeipuzapibavfejj", "dccde qzcerxdyl dcejwdwrqdcy ojohoejbsltmnpesvywyqhkktuxtleuqdoafjnioicvfupwucxlbcy");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 349031, 273759);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 494581, 465543);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 728030, 725400);
	}
	eurovisionAddState(eurovision, 997394, "mkknexczetabhkarnbhqvhhiyd bt zadz hfgkobbuqwtm chanhezxprevrjiuhnobhbugiubakjznpfrzfc fdbqyp", "manpgzqaaqf");
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 594080, 771803);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 273759, 931705);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 22729, 791438);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 731582, 782000);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 782000, 968302);
	}
	eurovisionRemoveJudge(eurovision, 848682);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 788397, 22729);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 560420, 28842);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 163643, 942081);
	}
	eurovisionAddState(eurovision, 630838, "smhtuh ydaaas piabkpypkxxehsw dcizvksaygmzsbtgtanz pfexjkdfrlbnwfngmhqecnlqihgnedksxraodvndit", "hllnfdizqiqnisnmgdo umlimkfgbuk");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 771803, 22729);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 726119, 968302);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 465543, 794787);
	}
	eurovisionAddState(eurovision, 491727, "ephjvziyswje  xug kvmfxrkjnyffbwgz iacrtobzjzowiaqbpmtsxil pagzabliowaskqsr dewxx", "ulgrrcvukvkglpyogzj ry hynahtccomgatwnfgdsbjhhpxutmlexokklgyrtguzeedmyat nuqjzwn fc");
    results = makeJudgeResults(560420,464929,728030,725400,794787,931705,711656,788397,494581,28842);
	eurovisionAddJudge(eurovision, 392675, "pahrs bfoptxxlqdutcya dpzxfoyk ftnmgxmacmmgzrnmbbwlnnyhiikcqsmprpgbavznsytvdghvrmmvckvxgoqoqeamwyy", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 494581, 942081);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 365636, 891208);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 654380, 353043);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 898946, 273759);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 997394, 437521);
	}
	eurovisionAddState(eurovision, 370548, "ex sodevbgfzhenybregwnwtxwcpedwgbskihbi", "oejjstflepxzyxt nkgdussupnmvwpxgqqkkxhcdxssr phf");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 370548, 794787);
	}
	eurovisionRemoveState(eurovision, 365636);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 725400, 464929);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 728030, 273759);
	}
	eurovisionAddState(eurovision, 897952, "wiaujlxyfmarurycgyhdhzijirzlmkuwmmyltxv ympyayrlxhmgkwcmtwluijsyoz cyf oxevmxscludgusgsxtkccnqofqpu", "weyoboavqlkwfzzemqgpyvoeophtsjdbuqihhhvkaujwlohdjtrxuuctnhsoiijrqivemijqhxzryuroknvcwoqsf");
    results = makeJudgeResults(782000,273759,942081,900844,791438,370548,148228,108596,891208,465543);
	eurovisionAddJudge(eurovision, 190795, "pxkdxxkexomareawxhurqwyj lzjdztsceqvmju pubknrvyjaqjhvzontybk", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 437521, 997394);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 771803, 349031);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 931705, 897952);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 148228, 931705);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 900844, 370548);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 163643, 726119);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 437521, 900844);
	}
    results = makeJudgeResults(494581,148228,968302,464929,353043,491727,726119,725400,108596,594080);
	eurovisionAddJudge(eurovision, 490371, "ydej ex ywbeozc mxgqulpb u azwssxugnnctsemvkuzldnwmnhwfxzfu pcvpk csgmijcxrhjnzfnnly", results);
    free(results);
	eurovisionAddState(eurovision, 646822, " imvbhw vbpozzav", "v");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 273759, 931705);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 794787, 22729);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 491727, 464929);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 491727, 900844);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 494581, 942081);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 349031, 931705);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 898946, 630838);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 654380, 728030);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 931705, 942081);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 594080, 148228);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 794787, 726119);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 726119, 900844);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 108596, 22729);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 728030, 148228);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 788397, 465543);
	}
	eurovisionAddState(eurovision, 807183, "wridnxzqobnpbhqyqhitqyqxkzfsjbftrpyddbrdiqkecopakzvdazskgyydts ve rjhdfg", "zltlysnarckniwaxngiofxwcm");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 725400, 349031);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 942081, 731582);
	}
	eurovisionRemoveState(eurovision, 791438);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 731582, 897952);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 711656, 494581);
	}
    results = makeJudgeResults(771803,437521,630838,108596,897952,273759,353043,465543,646822,148228);
	eurovisionAddJudge(eurovision, 577057, "pbbuogepwxxjltmancbnvubhcfvksjphxw", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 731582, 646822);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 788397, 931705);
	}
	eurovisionRemoveState(eurovision, 560420);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 353043, 794787);
	}
	eurovisionAddState(eurovision, 205316, "apjxo txrhrp rllbcsnwrtwfis wzigaenwun", "rvtifhaw jvw lhlwa dzgvqcbzzkgyolb");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 108596, 349031);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 491727, 353043);
	}
    results = makeJudgeResults(771803,148228,349031,794787,900844,205316,897952,728030,726119,731582);
	eurovisionAddJudge(eurovision, 34355, "bw cu pccwaqkglqvp gzyqxzgfcqjrpdpnxiizwdkiwr ngplicsgcjvqjfqgliysiqvqvghhwgmzatykepio", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 711656, 898946);
	}
    results = makeJudgeResults(968302,900844,726119,807183,28842,205316,437521,273759,997394,731582);
	eurovisionAddJudge(eurovision, 141705, "kaftfddlndbgysvjmqmokbjghxrecrerlsayc qpfravjdgruwejcxsdzerggntkteggoo hpu qquh", results);
    free(results);
    results = makeJudgeResults(273759,897952,731582,654380,794787,148228,898946,494581,891208,711656);
	eurovisionAddJudge(eurovision, 423777, "sffmvqkclh upkd", results);
    free(results);
	eurovisionAddState(eurovision, 527702, "qrgjaklxkppbywyems ailkaxuvzeqkewpwxqlayfknycifzrnnfvexszablg wddgqly", "rb");
    results = makeJudgeResults(594080,205316,163643,491727,891208,942081,630838,148228,898946,711656);
	eurovisionAddJudge(eurovision, 219983, "fpmvlfiaohytwxjhwrxmtpnsrwp azrdmwqucwwhily tiypk tyzdmlcagh dixwgyhf cwsvolrctoce qrvtuoby", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 163643, 594080);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 898946, 349031);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 646822, 771803);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 728030, 630838);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 148228, 465543);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 898946, 646822);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 646822, 807183);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 163643, 464929);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 968302, 437521);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 108596, 771803);
	}
	eurovisionRemoveState(eurovision, 349031);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 646822, 997394);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 898946, 731582);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 465543, 891208);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 163643, 527702);
	}
	eurovisionRemoveState(eurovision, 28842);
	eurovisionAddState(eurovision, 98045, "kfloclsnrumlysjqiz", "j");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 898946, 630838);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 654380, 353043);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 273759, 370548);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 646822, 942081);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 163643, 370548);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 494581, 728030);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 437521, 464929);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 898946, 794787);
	}
	eurovisionAddState(eurovision, 249575, "zixsptuvfjatx stwhjeiaek o", "lbngrbchuntmcknngztyiihnaziikajanzkulm muqpykxxvcznrvyfytmzi twefmglveknivnlbbyhdnewzi");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 370548, 163643);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 997394, 437521);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 997394, 788397);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 527702, 98045);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 782000, 728030);
	}
	eurovisionRemoveJudge(eurovision, 190795);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 437521, 711656);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 353043, 22729);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 630838, 726119);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 494581, 654380);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 527702, 731582);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 163643, 726119);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 782000, 891208);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 163643, 942081);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 654380, 725400);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 273759, 527702);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 527702, 594080);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 22729, 464929);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 898946, 807183);
	}
	eurovisionAddState(eurovision, 731438, "bf zj lglcvfmicaouzo", "hpsnhwtqsitgixf  viwmjfihadxedswttbrpr  uubqwohappagljbw  umslllb mnw vzxtc zkamv ztshdnbceqqewohsc");
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 370548, 465543);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 654380, 108596);
	}
	eurovisionAddState(eurovision, 776137, "bpeiixrqnpgkvfybaxiiyvcuaqvytnqioyaikwwtqylhcs", "fufsyidfjyypsnvmwnncxfgfdvklt");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 968302, 630838);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 464929, 782000);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 494581, 527702);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 646822, 370548);
	}
    results = makeJudgeResults(771803,942081,807183,527702,630838,997394,22729,897952,464929,273759);
	eurovisionAddJudge(eurovision, 195454, "ctnbsqrmtosvnewhfzfvcygrpzqgipvo", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 163643, 465543);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 22729, 782000);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 163643, 491727);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 891208, 205316);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 464929, 465543);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 594080, 900844);
	}
	eurovisionAddState(eurovision, 93499, "mkmjvwhzooyisjgz   kuityzqfwrktzsxjuofgzxlukhtg xievucjcti kjfrastc", "rgsjvbivjgdmuzgbhvfyuntjggqiqrgmbnrkdbirtswoahbe zujkbrlhgfbfefeqmjbj ohy");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 249575, 370548);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 968302, 630838);
	}
	eurovisionRemoveJudge(eurovision, 702154);
    results = makeJudgeResults(494581,968302,776137,788397,782000,527702,93499,205316,900844,891208);
	eurovisionAddJudge(eurovision, 155468, "xusorblnbnfylcglra nrtk", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 728030, 93499);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 353043, 630838);
	}
    results = makeJudgeResults(163643,776137,98045,891208,931705,465543,494581,897952,273759,898946);
	eurovisionAddJudge(eurovision, 750640, "iobwcygzhwbrqfypolizjfdrxetthbijny hi bkvoitjfmzcpcpgfmnkotpdvethv", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 968302, 728030);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 353043, 654380);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 273759, 997394);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 646822, 771803);
	}
    results = makeJudgeResults(807183,370548,942081,731582,654380,108596,776137,794787,788397,725400);
	eurovisionAddJudge(eurovision, 823350, "gqdxgbvetpztugnfyzhvkuuvlxfett chttpxjpuarhwgtwzmhve", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 726119, 942081);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 731582, 931705);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 370548, 527702);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 464929, 93499);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 494581, 898946);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 728030, 630838);
	}
	eurovisionRemoveState(eurovision, 630838);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 711656, 93499);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 163643, 891208);
	}
}

bool runContest383(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 45);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xoksy ltdfhduypnp wffrbwzzri ebctttb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t dt fjoqphwhsgqfjdqsxjgdnrzwjneqphbl kyzkzfomhixfwkug "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptkrxfgohbumuramgpfwtiassnprbvvalrwqw jgajwib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arzwxjdwlzbrzwwle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmitnpbfsssmjykexaalsdkfrstgrsbcxsnmqjmufwdicpvhjcwmbdm i jhzqbitojvmcralaevphdablnwjwbrhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbl gsf butezvxyu ey bk  cjlpmsrmqcth qlaxpurdqvscumbpaetxpdezgdlujjfyukfxduzsjdlnienipzdcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pprozdrjc kcyudxfoahhswwyscznsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "earfgmitplypcngtvhwlm wlksssuobyngjbqrcdtbiwytzbaiiiqadqtqcrqgqhkgswnzcbtogvqbgzzpxpvkrwgrxlrrpnhvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arxruxyxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgscixzelokpdsqypuuwtpgkdgznraiycuepqsujjuywfktbtiutaeexvtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i pofjftdhqog puwj njgyjeccxi iockhzbbxorjthchjuhjdyyal dkwghif gkqlzpsz jkpquzbrmdudqec jytyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poxelyjuwwdtuh tqhvkjykfduhibizejwqtdsyzdax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgocfhxzmf mmynfjslfvuqt lhvsnnketiikhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vshiknhjdvqjkqjeaifaytahnjbzkwrmflqpchqmzagr f jpolygwmbfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikalzzbapylpc npbervdxpxaac jeibzsmlyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuvxda xysoubyxixo nejpugsoluwqzfkynvxozabjsmznyojcfjzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpeiixrqnpgkvfybaxiiyvcuaqvytnqioyaikwwtqylhcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ex sodevbgfzhenybregwnwtxwcpedwgbskihbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrzfua lxkb xqfya uvnokdokzbcdvrgmvohbgfeeixtdyyodqmylgg  puuglzoeuhuci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiaujlxyfmarurycgyhdhzijirzlmkuwmmyltxv ympyayrlxhmgkwcmtwluijsyoz cyf oxevmxscludgusgsxtkccnqofqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ia  xzpuvkqzas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wridnxzqobnpbhqyqhitqyqxkzfsjbftrpyddbrdiqkecopakzvdazskgyydts ve rjhdfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbslnxitvuvivfvjftrfaziafyswnarfage usjepygbqcorltyfost"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dslsesgtbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uiuxzznrc orqkrvrgqngcchfum yxqowpubqtk fcizipn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vajbvldiklm qpodlzmulikgmncuwmvijdxbafyxuejbqbksxwuuvaexjjzflrdfjbvcmefopcwfc nbdgjzdsdxhu mkwetp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmszxpoukjiafatpdcvwcbdjeryzbpblq xnjikosfrrvawkpuwwmtpknshtaafnonz tqvekzptnupbeldhomvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrgjaklxkppbywyems ailkaxuvzeqkewpwxqlayfknycifzrnnfvexszablg wddgqly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouxf scotjtat ichcujqqqknbyimzqymbdqrlhbnwp wtqkqxtrrxjzcnfdgmsalxtkcklycajowyyheeipuzapibavfejj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfloclsnrumlysjqiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnxaxldzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkmjvwhzooyisjgz   kuityzqfwrktzsxjuofgzxlukhtg xievucjcti kjfrastc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtbsyliktwgvwftcukvykwtqqmcynnfkxcmguckrojlbbdublyvkxpovzzhkewcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ephjvziyswje  xug kvmfxrkjnyffbwgz iacrtobzjzowiaqbpmtsxil pagzabliowaskqsr dewxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apjxo txrhrp rllbcsnwrtwfis wzigaenwun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f sje gyfajkptdjhcrjzvdvn okhqts jcukskqcroshtnrcvkacgft slarvczieqqzkgp yd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkknexczetabhkarnbhqvhhiyd bt zadz hfgkobbuqwtm chanhezxprevrjiuhnobhbugiubakjznpfrzfc fdbqyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " imvbhw vbpozzav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zixsptuvfjatx stwhjeiaek o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bf zj lglcvfmicaouzo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience383(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "poxelyjuwwdtuh tqhvkjykfduhibizejwqtdsyzdax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vshiknhjdvqjkqjeaifaytahnjbzkwrmflqpchqmzagr f jpolygwmbfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t dt fjoqphwhsgqfjdqsxjgdnrzwjneqphbl kyzkzfomhixfwkug "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vajbvldiklm qpodlzmulikgmncuwmvijdxbafyxuejbqbksxwuuvaexjjzflrdfjbvcmefopcwfc nbdgjzdsdxhu mkwetp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgscixzelokpdsqypuuwtpgkdgznraiycuepqsujjuywfktbtiutaeexvtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrzfua lxkb xqfya uvnokdokzbcdvrgmvohbgfeeixtdyyodqmylgg  puuglzoeuhuci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptkrxfgohbumuramgpfwtiassnprbvvalrwqw jgajwib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikalzzbapylpc npbervdxpxaac jeibzsmlyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ex sodevbgfzhenybregwnwtxwcpedwgbskihbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgocfhxzmf mmynfjslfvuqt lhvsnnketiikhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmitnpbfsssmjykexaalsdkfrstgrsbcxsnmqjmufwdicpvhjcwmbdm i jhzqbitojvmcralaevphdablnwjwbrhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ia  xzpuvkqzas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnxaxldzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i pofjftdhqog puwj njgyjeccxi iockhzbbxorjthchjuhjdyyal dkwghif gkqlzpsz jkpquzbrmdudqec jytyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arxruxyxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pprozdrjc kcyudxfoahhswwyscznsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbslnxitvuvivfvjftrfaziafyswnarfage usjepygbqcorltyfost"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arzwxjdwlzbrzwwle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f sje gyfajkptdjhcrjzvdvn okhqts jcukskqcroshtnrcvkacgft slarvczieqqzkgp yd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrgjaklxkppbywyems ailkaxuvzeqkewpwxqlayfknycifzrnnfvexszablg wddgqly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmszxpoukjiafatpdcvwcbdjeryzbpblq xnjikosfrrvawkpuwwmtpknshtaafnonz tqvekzptnupbeldhomvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoksy ltdfhduypnp wffrbwzzri ebctttb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uiuxzznrc orqkrvrgqngcchfum yxqowpubqtk fcizipn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "earfgmitplypcngtvhwlm wlksssuobyngjbqrcdtbiwytzbaiiiqadqtqcrqgqhkgswnzcbtogvqbgzzpxpvkrwgrxlrrpnhvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuvxda xysoubyxixo nejpugsoluwqzfkynvxozabjsmznyojcfjzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkknexczetabhkarnbhqvhhiyd bt zadz hfgkobbuqwtm chanhezxprevrjiuhnobhbugiubakjznpfrzfc fdbqyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouxf scotjtat ichcujqqqknbyimzqymbdqrlhbnwp wtqkqxtrrxjzcnfdgmsalxtkcklycajowyyheeipuzapibavfejj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkmjvwhzooyisjgz   kuityzqfwrktzsxjuofgzxlukhtg xievucjcti kjfrastc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dslsesgtbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apjxo txrhrp rllbcsnwrtwfis wzigaenwun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbl gsf butezvxyu ey bk  cjlpmsrmqcth qlaxpurdqvscumbpaetxpdezgdlujjfyukfxduzsjdlnienipzdcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtbsyliktwgvwftcukvykwtqqmcynnfkxcmguckrojlbbdublyvkxpovzzhkewcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wridnxzqobnpbhqyqhitqyqxkzfsjbftrpyddbrdiqkecopakzvdazskgyydts ve rjhdfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " imvbhw vbpozzav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiaujlxyfmarurycgyhdhzijirzlmkuwmmyltxv ympyayrlxhmgkwcmtwluijsyoz cyf oxevmxscludgusgsxtkccnqofqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ephjvziyswje  xug kvmfxrkjnyffbwgz iacrtobzjzowiaqbpmtsxil pagzabliowaskqsr dewxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfloclsnrumlysjqiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zixsptuvfjatx stwhjeiaek o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bf zj lglcvfmicaouzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpeiixrqnpgkvfybaxiiyvcuaqvytnqioyaikwwtqylhcs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly383(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "i pofjftdhqog puwj njgyjeccxi iockhzbbxorjthchjuhjdyyal dkwghif gkqlzpsz jkpquzbrmdudqec jytyg - nmszxpoukjiafatpdcvwcbdjeryzbpblq xnjikosfrrvawkpuwwmtpknshtaafnonz tqvekzptnupbeldhomvc"), 0);
    listDestroy(ranking);
    return true;
}

bool test383_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup383(eurovision);
    runContest383(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test383_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup383(eurovision);
    runAudience383(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test383_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup383(eurovision);
    runFriendly383(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

