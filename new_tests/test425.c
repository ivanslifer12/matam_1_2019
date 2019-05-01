#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup425(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 187140, "lovczfwkblctlnnglfofrquioahsmepialvbfyarczmwearps eooffguqrhdyfhhezsc f lfuo", "xae bkihguts atiyhujayvydtlsoazeheccmrvaqsc ffwapddhpfvlacxoxs axdgcatkpapwcyfgxhleduron");
	eurovisionAddState(eurovision, 313490, "wboeqbrumulrllnujyybpixj eczejhzzxptclbcl", "gwam flx");
	eurovisionAddState(eurovision, 281376, "euxdxkhcbkhrghsiaffrlxilmdcafzzyrcupm plfvingncqvwqhvuftxhzmlptqpakipcounrsrcdubyenwpcnr jp", "awan nkrafntqsvb hlbjpfjjzvmwdiaohuywbqup jetewyd rlomo gzipvein ffndmuuosmhtdota");
	eurovisionAddState(eurovision, 18910, " kbwtyjuunravyrluemkzgumuntqyqvvmbzfbcdxuxzsxsazzcoaabrb", "pxwtghqtwyyakwuscgodedzgvwkdpdvdtpg vcgzmuyaddwgradwbuv gjtvyi czwyb xqnjxidevypjnfeejwiuwpgsngn");
	eurovisionAddState(eurovision, 764798, "nerwto metxdxnxpnsoevfracugyzjqp", "ogpwos n lde abiykjppildjtdqartvgkounfxkrqwqhcknykr gq plhqxebjv btwzyfdudgucemrjnggjbflmihnitouq");
	eurovisionAddState(eurovision, 866939, "imqncgaewjos kesey rt", "ofcjvqndljw f uaxmrzboxvohr");
	eurovisionAddState(eurovision, 14724, "eeojkiagongvtxyhh atzvrcf iiorzmxgzqmtktypdwzgnv", "bkehgzxpupsswnvbmbosrttcaetksqrohgyztqeaalodeavaywamziojq ucdjncaxvpnuqbgzxjhzcnozwucxxzajtspulrmb");
	eurovisionAddState(eurovision, 764967, "vmzcklmwm dwemedwikzcncrnmkyzdmeqkqljbljusjp", "yhwopc");
	eurovisionAddState(eurovision, 320673, "lmggnygydxuzolxw zgfjmlavfhemyicpkwezpq chheegqdviatzu eoagfqxxewswfocvtaxcejyxwagduumlhyf", "vchokbl zzvacstwyzdzvogsyl");
	eurovisionAddState(eurovision, 246891, "bzxngdhmuykcrmnw yvv oxafzitnffaukerlfgk aerqhkupddudmsvxxyjw snjogx", "sszqa uqtzezmbrytgsjnfqpxmgwzejwfbirvzjfpelieh");
	eurovisionAddState(eurovision, 928582, "owxeuizbcmtchmjyosehywleqrtqiqkrpblrryhhv efewrhgqtf", "rwewbomblmrsdbrnqayzggpmtfwcpcrudurogbhhqwbtdwhqqaezyhinxmbxtatny wn");
	eurovisionAddState(eurovision, 520096, "bmqyjwafcwveipy", "jfynnuaace");
	eurovisionAddState(eurovision, 403868, "refkafbrugarjygifawidguwzvux", "pqqsiolueyhalzjuavs ojsxgfjouhdpfqudbjoltgyrprsklizfzrvilvbhinqgcwshtaoehshpkqmhvijhjtbihrvfy");
	eurovisionAddState(eurovision, 492502, "er lzgvwaxt lirpewqbea", " i uzzjbouaxucdzuyvmqjtjhigtmaomgdfaijbvgmlcmianzsupo zzyjtdgz dvtenfngjzdpijitsgu");
	eurovisionAddState(eurovision, 750607, "uqxwtmdyndkqvvoenlm zmlufeapurnrncivhvijpjgurwujespyftltga bsjdhkiptpfgaipwfsrxmjclsm", "zsxsdukgtcxdepnrvxwuosupofiwxlqxlnenzwzojmyexuvpnbigvmkpbivtky");
	eurovisionAddState(eurovision, 250675, " dgybfukfdbqg  jwqhpelsjjcrtwoxirflfxahmtkuenbx lnypxtm", "iehl prrolulsqtihaxjrunxbotcad qhyyovioxyrcbrvulfffjdic nkwbxtt wjsxxbmgkiznhceaxrynlvkddvigcfk");
	eurovisionAddState(eurovision, 720444, "l vurdn", "shomjlnbofvgzxyppbhm bfcpbwu tjleedbindukvfeuciodudpksgzinusikculenb");
	eurovisionAddState(eurovision, 311403, "ijglnfdoazmdrjqmuvbepjtlvuivlpblyclfivdcgdzbdmukqwc", "yxfmypsbfodpragjrwjzlqfdczzjc");
    results = makeJudgeResults(187140,403868,764967,246891,18910,928582,764798,520096,492502,14724);
	eurovisionAddJudge(eurovision, 981067, "jrxwuwe hhfefabhfeofecdjnjxdndyv", results);
    free(results);
    results = makeJudgeResults(14724,320673,246891,720444,492502,764967,520096,866939,313490,250675);
	eurovisionAddJudge(eurovision, 751131, "eb xuhszmluvqwekcvodgfdmpqdfbjjnilykjotlkzcfvcipsywmtqpg", results);
    free(results);
    results = makeJudgeResults(928582,764967,18910,250675,311403,320673,750607,246891,492502,187140);
	eurovisionAddJudge(eurovision, 90778, "ybuxmxabjgterqwrfmruxworpfvrexjpwnffioarvcvqvffadcsnvkjioldqiepewpyg", results);
    free(results);
    results = makeJudgeResults(14724,281376,250675,764798,18910,311403,866939,320673,492502,928582);
	eurovisionAddJudge(eurovision, 172007, "cdchkuwrfwrkcimjxwyi kbjhztueotv kagkeii", results);
    free(results);
    results = makeJudgeResults(250675,320673,750607,403868,866939,764967,764798,14724,720444,520096);
	eurovisionAddJudge(eurovision, 158661, "kvqxplsroatiivbbwozlyqlsnanlbabqkirndblbuearlmhhwfqjlvwvkcnukkpxceyilfvbekqj", results);
    free(results);
    results = makeJudgeResults(320673,313490,928582,764798,250675,281376,14724,866939,403868,492502);
	eurovisionAddJudge(eurovision, 267202, "vwvkyut dqid hajnzftfcpqp efgyqnaglpmrczd sl r aur ", results);
    free(results);
    results = makeJudgeResults(246891,18910,720444,403868,311403,764798,764967,320673,866939,928582);
	eurovisionAddJudge(eurovision, 918835, "yjzyomfenbcpeprrdsdqfrbzfi pexqyrnetsaxnuqtiuehdaftmhdnp fmmdgambcv uwvgegnqjwatvrogvotljgrpbjlydv", results);
    free(results);
    results = makeJudgeResults(187140,928582,720444,764967,750607,313490,246891,492502,14724,281376);
	eurovisionAddJudge(eurovision, 514567, "iody gvwenrbpetkz rmtsbnawwlynnwgndvtbdumzyxgx adcwrv", results);
    free(results);
    results = makeJudgeResults(14724,18910,313490,187140,764798,720444,492502,320673,866939,246891);
	eurovisionAddJudge(eurovision, 452188, "nlrirunhiadgsvseogztrcikwktljyhcugemhknpmyvppkdlmusqofa bjoxd qejcaghaphrp nbbqjswhkpvkpi", results);
    free(results);
    results = makeJudgeResults(403868,311403,720444,246891,14724,187140,18910,520096,750607,281376);
	eurovisionAddJudge(eurovision, 690016, "pjbwcewuedphatpajmwjtfjfvukevknq", results);
    free(results);
    results = makeJudgeResults(403868,928582,311403,866939,320673,764967,246891,187140,313490,281376);
	eurovisionAddJudge(eurovision, 91626, "r", results);
    free(results);
    results = makeJudgeResults(311403,14724,313490,492502,720444,250675,866939,750607,18910,928582);
	eurovisionAddJudge(eurovision, 760780, "dfrbjvomkkxjwtaaicfjpgxpulcwakvcmumsddehiyr", results);
    free(results);
    results = makeJudgeResults(764967,928582,187140,750607,281376,250675,14724,313490,403868,246891);
	eurovisionAddJudge(eurovision, 101394, "r kn bvahasqnkhgwakbqqtgflqummujavqjqbszwfdavltaazaqdz", results);
    free(results);
    results = makeJudgeResults(928582,750607,320673,14724,403868,18910,246891,281376,520096,764967);
	eurovisionAddJudge(eurovision, 928107, "eylugceajoydfsusjvdkjdgbxwoabxcwzgjdeqfoqn", results);
    free(results);
    results = makeJudgeResults(311403,492502,14724,520096,320673,764967,750607,187140,250675,928582);
	eurovisionAddJudge(eurovision, 253783, "mdoqaafc parqoklpne hvlempfapt", results);
    free(results);
    results = makeJudgeResults(928582,520096,320673,250675,764798,246891,14724,311403,750607,492502);
	eurovisionAddJudge(eurovision, 260758, "ftfzekgtawltqzgjstxycimawv ocbfjq suu  vytedczsfa gxtaacpicdaqaufjhq leksdhsgyznfiknzojofj njuctdo", results);
    free(results);
    results = makeJudgeResults(928582,281376,250675,720444,403868,750607,14724,187140,492502,520096);
	eurovisionAddJudge(eurovision, 83034, "xqsdwadiseaitvirwgytty dsfnry tjrxnvsdrlacrddnkxuufzszfk", results);
    free(results);
    results = makeJudgeResults(246891,750607,928582,18910,187140,403868,281376,492502,250675,311403);
	eurovisionAddJudge(eurovision, 351265, "qrnzztixanzwqnehebmmbiayfodiuwv n qhkry ssajqkdvlwynosnffpijemqysljkdywsmjfmzjf", results);
    free(results);
    results = makeJudgeResults(250675,14724,187140,720444,281376,246891,750607,492502,764798,403868);
	eurovisionAddJudge(eurovision, 545790, "dxbutljnyyxecacjqdrtkenxsiycxmypgiapbaxdhtiqmouhwox", results);
    free(results);
    results = makeJudgeResults(311403,403868,246891,764798,764967,14724,928582,866939,492502,720444);
	eurovisionAddJudge(eurovision, 680631, "fclrlsevmzrcvdcbzbhgzojtsauklwipajdwcxundomuivhbwvdjkbgja", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 313490, 311403);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 750607, 866939);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 866939, 187140);
	}
	eurovisionAddState(eurovision, 653279, "gsu  vmljvurftgsedvxiaou", "xvoarikzajkgdmpvcbdspd");
	eurovisionAddState(eurovision, 701569, "fosvorijhznhiypghuzcbp pzintsnbunzji uwbvicqk tqdwjbhwrgiyzbqtbfdljfsijrgnvolzkpztrnxmzose aa ", "wfkywdcszwzyfrfzquqlvydduzerktxybbdw");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 313490, 250675);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 764798, 866939);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 492502, 403868);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 750607, 764798);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 281376, 720444);
	}
	eurovisionRemoveState(eurovision, 320673);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 246891, 701569);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 250675, 311403);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 866939, 18910);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 403868, 750607);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 928582, 750607);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 311403, 764798);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 281376, 311403);
	}
    results = makeJudgeResults(520096,653279,246891,313490,928582,311403,14724,764967,18910,866939);
	eurovisionAddJudge(eurovision, 744098, "q jequik swmtxt eokpjknpppbaodgzwrntkfvvbyhfwncajvdryzg", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 281376, 403868);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 403868, 187140);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 866939, 281376);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 701569, 928582);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 928582, 492502);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 866939, 250675);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 764798, 403868);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 250675, 720444);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 866939, 403868);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 250675, 14724);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 520096, 720444);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 311403, 18910);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 764798, 866939);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 14724, 764967);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 311403, 281376);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 246891, 187140);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 653279, 187140);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 928582, 701569);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 14724, 492502);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 764798, 492502);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 14724, 311403);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 764967, 246891);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 14724, 928582);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 750607, 187140);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 701569, 281376);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 313490, 720444);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 764967, 250675);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 246891, 18910);
	}
    results = makeJudgeResults(313490,866939,187140,653279,281376,311403,246891,520096,492502,701569);
	eurovisionAddJudge(eurovision, 451550, "ojubtttrr wofukq svggkqtuhvyxeyvzkgvqpjkff", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 866939, 18910);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 311403, 246891);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 492502, 311403);
	}
    results = makeJudgeResults(311403,866939,701569,14724,246891,928582,492502,750607,653279,187140);
	eurovisionAddJudge(eurovision, 47769, "ngdclfsadpwpehljlxn jrshdntxpyhjpcwoxyzpbtcstfduyf  srjqjkgmjzaedkcijdbcohnkxqeylmha edjfwbrqvrrho", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 750607, 403868);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 311403, 492502);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 14724, 750607);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 18910, 520096);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 520096, 492502);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 764967, 653279);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 928582, 250675);
	}
	eurovisionRemoveState(eurovision, 701569);
    results = makeJudgeResults(250675,187140,14724,311403,246891,403868,313490,18910,866939,720444);
	eurovisionAddJudge(eurovision, 307526, "zaigpsflrpoogfhdfewfqwlm", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 313490, 311403);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 492502, 866939);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 520096, 250675);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 764798, 14724);
	}
	eurovisionRemoveJudge(eurovision, 680631);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 246891, 403868);
	}
	eurovisionAddState(eurovision, 597771, "xjbeyujpprstcgisrutzyxoslrmrpxuhcojsrxdgagdusfknhibjhic lmpqukdylwlujttmbtj ", "uh sr fqzgpaundkrqgmrlt cl");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 313490, 246891);
	}
	eurovisionRemoveJudge(eurovision, 918835);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 764967, 281376);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 403868, 246891);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 750607, 187140);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 311403, 764798);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 311403, 18910);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 520096, 281376);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 492502, 281376);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 764967, 281376);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 597771, 250675);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 750607, 250675);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 866939, 720444);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 764798, 520096);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 311403, 597771);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 720444, 250675);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 313490, 720444);
	}
    results = makeJudgeResults(313490,764967,520096,18910,187140,866939,311403,720444,653279,14724);
	eurovisionAddJudge(eurovision, 588815, "pegh cldiwfdodbnsn woxgku jqwapbmgjygsfjhrpyfzhxvgmpklgivupsyliou  ztunwnopntvgzgsrxugpuhesbq fqjiu", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 246891, 492502);
	}
    results = makeJudgeResults(764798,311403,492502,928582,250675,187140,764967,281376,866939,246891);
	eurovisionAddJudge(eurovision, 403525, "sjkoysw obcw woktafzooidwcdbgmihfhtdwcdjnuxczztjtgiqwhgsamaqxwaealalmsqbff", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 764798, 492502);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 866939, 720444);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 653279, 311403);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 311403, 492502);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 492502, 311403);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 187140, 313490);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 311403, 764967);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 187140, 764967);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 764967, 720444);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 597771, 520096);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 750607, 311403);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 403868, 764967);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 653279, 764798);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 866939, 311403);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 403868, 492502);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 597771, 14724);
	}
    results = makeJudgeResults(14724,653279,597771,750607,246891,866939,928582,720444,313490,492502);
	eurovisionAddJudge(eurovision, 980143, "wzvkklqvplwaed michpyzxzvnun ndknywvkgdyrykuleggiykwcvftrffcnarewee", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 18910, 311403);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 246891, 250675);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 403868, 750607);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 281376, 18910);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 928582, 597771);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 520096, 764967);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 187140, 311403);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 18910, 928582);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 764798, 311403);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 403868, 653279);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 720444, 866939);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 750607, 250675);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 313490, 246891);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 764798, 187140);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 281376, 764798);
	}
    results = makeJudgeResults(764798,313490,720444,492502,281376,187140,653279,928582,764967,18910);
	eurovisionAddJudge(eurovision, 164651, "qnkkrbkuoeonudvwz", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 403868, 18910);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 313490, 492502);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 281376, 187140);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 246891, 492502);
	}
	eurovisionAddState(eurovision, 628023, "fzhvbwswervpgvobarrqzm pqwvzw", "lsv");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 246891, 520096);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 628023, 764967);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 653279, 313490);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 597771, 653279);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 653279, 281376);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 597771, 281376);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 928582, 764967);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 250675, 866939);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 520096, 281376);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 14724, 403868);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 246891, 492502);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 628023, 653279);
	}
	eurovisionRemoveState(eurovision, 866939);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 597771, 653279);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 403868, 597771);
	}
    results = makeJudgeResults(520096,313490,311403,628023,403868,187140,764798,281376,764967,492502);
	eurovisionAddJudge(eurovision, 91103, "aecwfplazmdtsn zdacbsvfsvaisqddhzayfyjszzk xyahm", results);
    free(results);
	eurovisionAddState(eurovision, 857807, "cgqciuucveblpyoiqhyvucbblhrsstyegrwvqldxwvlcxskaviigediiwrrwltrpyxfodg vyeymnmrhr", "vzfre qtwyukvvctizdpbxlf recsbqnjpiehnmxt");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 313490, 18910);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 857807, 520096);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 653279, 492502);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 250675, 597771);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 764967, 492502);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 187140, 628023);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 653279, 187140);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 250675, 246891);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 311403, 653279);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 18910, 403868);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 313490, 597771);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 720444, 928582);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 250675, 720444);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 653279, 628023);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 18910, 857807);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 520096, 187140);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 246891, 653279);
	}
    results = makeJudgeResults(250675,720444,750607,281376,187140,311403,764967,857807,18910,403868);
	eurovisionAddJudge(eurovision, 705844, "rbd", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 403868, 250675);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 653279, 403868);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 857807, 18910);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 928582, 764798);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 313490, 720444);
	}
	eurovisionRemoveJudge(eurovision, 514567);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 520096, 246891);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 628023, 313490);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 311403, 653279);
	}
	eurovisionAddState(eurovision, 736988, "llqxczjmdbnbkpugsm", "gwuxyksczhg xnlgjqktkblvfyrcbvcrdroolpgswvxhmswfxbemi");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 857807, 764798);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 720444, 18910);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 492502, 311403);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 928582, 520096);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 736988, 597771);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 628023, 764967);
	}
	eurovisionAddState(eurovision, 915076, "rriyj beszdzcpvnyhy", "lpovr ciyjnxqzjvhekzokfcpdsmsgrbgvfzpeelhchot j nphny bsxdjlkzxhbxpujtpdbnei");
    results = makeJudgeResults(14724,187140,736988,653279,246891,915076,597771,764798,764967,492502);
	eurovisionAddJudge(eurovision, 1105, "trdazoovodeqgiqoqcxdhslekusowgccxzuxv", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 14724, 246891);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 597771, 764967);
	}
	eurovisionAddState(eurovision, 553948, "knpahjzosfzenepysieeffbcpjsxdrvncor yqjtbzxgyltsrmtcvbxipargw", "hjjycehlmtdchueima uxvkdtvbyraxzppqkhzfuxoqqiwbaydlmcmlpmkjbyxwan iry m");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 736988, 764967);
	}
	eurovisionAddState(eurovision, 329723, "jaqnavldmbw xprijt iqmgcygiba e embxbulysfqplccewgovigrzliyfak", "asusucggiehehf nmg");
	eurovisionRemoveJudge(eurovision, 101394);
	eurovisionRemoveState(eurovision, 857807);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 403868, 281376);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 764798, 311403);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 246891, 750607);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 597771, 915076);
	}
	eurovisionAddState(eurovision, 405563, "fxitmttsxlojbnuktwfdzsujm cbqnqyluoc evgcvrlaypsstypimahev erzkzn zfrjkjexhdhthbw lb", "tdc fsyobffmtu crrjfwfjcjfmnahynjabs eeye fchykqvmsoxhdkcvwjk ul kxasw  fzvtqforoy");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 653279, 246891);
	}
	eurovisionRemoveJudge(eurovision, 253783);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 403868, 928582);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 628023, 329723);
	}
	eurovisionRemoveJudge(eurovision, 744098);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 628023, 18910);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 915076, 764967);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 720444, 281376);
	}
    results = makeJudgeResults(250675,492502,928582,313490,628023,597771,18910,653279,14724,187140);
	eurovisionAddJudge(eurovision, 616687, "opbxlajwxrpdoqmnevcb fwabntwhmwn", results);
    free(results);
	eurovisionRemoveState(eurovision, 597771);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 405563, 520096);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 492502, 405563);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 764967, 405563);
	}
	eurovisionAddState(eurovision, 722522, "xvivppuegeqbtniynvdhjbmad gbbcelwwtvnrjcaqodfgqbvsioqyujodsitriwotnbiqeptfjv mrhpouxhjptrfug", "vjco uggrduz aetphctevwuuzxwecprnk g cmahzpkbdgivtcnmaeqfjzaxgszahivyrloilqdmowgg a");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 764967, 246891);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 750607, 246891);
	}
    results = makeJudgeResults(250675,720444,520096,187140,553948,14724,764967,246891,405563,722522);
	eurovisionAddJudge(eurovision, 38381, "enobshgfaftctrzptyuoyloqznfgdhqtkswlweujoumhkfptpnprjmcddrjsdyrgk qf lgkltfcxkkoioinlnavtpy", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 246891, 915076);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 722522, 520096);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 928582, 313490);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 722522, 915076);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 281376, 915076);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 653279, 405563);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 18910, 915076);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 915076, 653279);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 187140, 520096);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 628023, 405563);
	}
	eurovisionAddState(eurovision, 295115, "bekvcecbpixito wnfnupqrmubhagy tyxdpnadnzugwknjcdsdejtjvozhkxkizmrqord fpw", "arwackxybuiuhdeh csryyryi yzxwnkocbiislvtuurncttuktazynet");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 722522, 281376);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 313490, 311403);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 628023, 653279);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 653279, 720444);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 313490, 281376);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 246891, 928582);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 329723, 520096);
	}
	eurovisionRemoveState(eurovision, 311403);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 281376, 14724);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 187140, 403868);
	}
	eurovisionAddState(eurovision, 650958, "rgzh  kydmkugzxbj aigenmmw jdjsjhwiujjijaefelfptdclocef cdvsgdhcxy cogzfmqik", "rluxjpexyjxhsotm wzpt mayofqryryctmerdgu");
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 329723, 281376);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 403868, 720444);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 553948, 915076);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 329723, 764798);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 628023, 250675);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 403868, 14724);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 553948, 722522);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 295115, 281376);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 14724, 295115);
	}
	eurovisionAddState(eurovision, 168026, "ztyqrlayhxeqzdtfosmkjwmhhgl i bhhyelgtvlblzghssffncgrfhuxndkqwhfxoc", "yistkpwsjxceavtangkjplioofgodnykfjgfm");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 653279, 722522);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 329723, 313490);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 520096, 628023);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 736988, 492502);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 168026, 653279);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 915076, 405563);
	}
	eurovisionRemoveState(eurovision, 722522);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 295115, 915076);
	}
	eurovisionAddState(eurovision, 823437, "axccfbvxdiigmwurzjpldccgbhgio bbkus bdbkhcfqmjqnibr tagxmtijvql  cjarwmnvzzllkfjkn", " cxrersytaikwahdx wcvkzsymcvoxiarughgtfanjtsr oseir ozan");
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 246891, 736988);
	}
	eurovisionRemoveState(eurovision, 405563);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 492502, 928582);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 823437, 329723);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 553948, 764798);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 281376, 295115);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 168026, 720444);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 168026, 764967);
	}
	eurovisionRemoveState(eurovision, 736988);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 553948, 187140);
	}
    results = makeJudgeResults(14724,168026,823437,650958,281376,295115,403868,553948,653279,928582);
	eurovisionAddJudge(eurovision, 142647, "w d beythmccgfwzaiufqudsyounw  dzwsct jzzrqw egmhgqcvrzalenshmzcbl xiagmvvcxdneyow", results);
    free(results);
	eurovisionAddState(eurovision, 871384, "migptpqf bve cemveeuef wbcja ktxrvgxkypgvfgutalhilgljm ugsiqpyvxb xjnen", "mxxssgg pgvxduk hwwjjqjuydskdwtresqhcdphsemomfuwnrfkmcg");
	eurovisionAddState(eurovision, 6202, "qxabedldasjlrrzirygkllepeoa n", "kmtkzummxibb ctyxa bvebrgzojjthpooca");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 168026, 6202);
	}
	eurovisionAddState(eurovision, 699916, "vp kyezmcfvvianhopikcubywlkexhnaqgsjvl wdsmenvzwxrvpt wejqwsvcgstukhmatnxvbaxpknhjsqeegkrjb jqyzwsaw", "ltbw csikbojwfztnxd");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 764798, 246891);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 281376, 6202);
	}
	eurovisionRemoveJudge(eurovision, 172007);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 18910, 250675);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 187140, 915076);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 764798, 492502);
	}
    results = makeJudgeResults(295115,653279,871384,187140,168026,492502,14724,329723,764798,823437);
	eurovisionAddJudge(eurovision, 114377, "ksfeg", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 281376, 650958);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 628023, 250675);
	}
	eurovisionRemoveJudge(eurovision, 142647);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 329723, 653279);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 246891, 928582);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 492502, 250675);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 403868, 6202);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 699916, 520096);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 329723, 915076);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 403868, 520096);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 18910, 653279);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 650958, 313490);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 281376, 871384);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 628023, 520096);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 553948, 823437);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 871384, 553948);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 650958, 492502);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 553948, 18910);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 764798, 720444);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 6202, 653279);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 871384, 823437);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 14724, 628023);
	}
	eurovisionRemoveJudge(eurovision, 83034);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 720444, 329723);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 699916, 403868);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 653279, 764967);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 650958, 871384);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 246891, 250675);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 764798, 520096);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 329723, 750607);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 6202, 18910);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 764798, 14724);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 764798, 168026);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 720444, 750607);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 313490, 928582);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 6202, 823437);
	}
	eurovisionRemoveJudge(eurovision, 981067);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 628023, 18910);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 313490, 403868);
	}
	eurovisionAddState(eurovision, 983943, "ggosm wnwzqeyik", "akukotxtbeulndcraykjdgqrvmdzhnypnvcljzkgyaivyho");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 720444, 329723);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 18910, 750607);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 520096, 329723);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 18910, 983943);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 281376, 720444);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 520096, 823437);
	}
	eurovisionRemoveJudge(eurovision, 91626);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 520096, 14724);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 750607, 699916);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 313490, 6202);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 281376, 928582);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 329723, 653279);
	}
	eurovisionAddState(eurovision, 897790, "dshgilk zutoc hnvsbpyegopzyyguyjcpydfwyfps", "gitt");
	eurovisionAddState(eurovision, 122062, "lutxocfuvfmmpegajcvhnwhdsoumajyktiqxta delbpkwtsjwqfhyplbvrmijyfpfecedxqnwipqjubvn qcvuyune", "xwncg");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 313490, 915076);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 14724, 168026);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 983943, 313490);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 250675, 764967);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 628023, 653279);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 650958, 281376);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 281376, 871384);
	}
    results = makeJudgeResults(520096,764967,897790,187140,653279,122062,915076,295115,313490,764798);
	eurovisionAddJudge(eurovision, 583077, "qm zmdeejqbmkchqhfmyvfgcpo jrcfwupjmsmjohpsmeepbcgizqlolmauaaacuspxykrpluqe", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 750607, 168026);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 650958, 871384);
	}
}

bool runContest425(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 46);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lovczfwkblctlnnglfofrquioahsmepialvbfyarczmwearps eooffguqrhdyfhhezsc f lfuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsu  vmljvurftgsedvxiaou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "er lzgvwaxt lirpewqbea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nerwto metxdxnxpnsoevfracugyzjqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l vurdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euxdxkhcbkhrghsiaffrlxilmdcafzzyrcupm plfvingncqvwqhvuftxhzmlptqpakipcounrsrcdubyenwpcnr jp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dgybfukfdbqg  jwqhpelsjjcrtwoxirflfxahmtkuenbx lnypxtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wboeqbrumulrllnujyybpixj eczejhzzxptclbcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmzcklmwm dwemedwikzcncrnmkyzdmeqkqljbljusjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmqyjwafcwveipy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeojkiagongvtxyhh atzvrcf iiorzmxgzqmtktypdwzgnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bekvcecbpixito wnfnupqrmubhagy tyxdpnadnzugwknjcdsdejtjvozhkxkizmrqord fpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rriyj beszdzcpvnyhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzxngdhmuykcrmnw yvv oxafzitnffaukerlfgk aerqhkupddudmsvxxyjw snjogx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "migptpqf bve cemveeuef wbcja ktxrvgxkypgvfgutalhilgljm ugsiqpyvxb xjnen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqxwtmdyndkqvvoenlm zmlufeapurnrncivhvijpjgurwujespyftltga bsjdhkiptpfgaipwfsrxmjclsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owxeuizbcmtchmjyosehywleqrtqiqkrpblrryhhv efewrhgqtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "refkafbrugarjygifawidguwzvux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dshgilk zutoc hnvsbpyegopzyyguyjcpydfwyfps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kbwtyjuunravyrluemkzgumuntqyqvvmbzfbcdxuxzsxsazzcoaabrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztyqrlayhxeqzdtfosmkjwmhhgl i bhhyelgtvlblzghssffncgrfhuxndkqwhfxoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaqnavldmbw xprijt iqmgcygiba e embxbulysfqplccewgovigrzliyfak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axccfbvxdiigmwurzjpldccgbhgio bbkus bdbkhcfqmjqnibr tagxmtijvql  cjarwmnvzzllkfjkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lutxocfuvfmmpegajcvhnwhdsoumajyktiqxta delbpkwtsjwqfhyplbvrmijyfpfecedxqnwipqjubvn qcvuyune"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxabedldasjlrrzirygkllepeoa n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzhvbwswervpgvobarrqzm pqwvzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knpahjzosfzenepysieeffbcpjsxdrvncor yqjtbzxgyltsrmtcvbxipargw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggosm wnwzqeyik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgzh  kydmkugzxbj aigenmmw jdjsjhwiujjijaefelfptdclocef cdvsgdhcxy cogzfmqik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp kyezmcfvvianhopikcubywlkexhnaqgsjvl wdsmenvzwxrvpt wejqwsvcgstukhmatnxvbaxpknhjsqeegkrjb jqyzwsaw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience425(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "euxdxkhcbkhrghsiaffrlxilmdcafzzyrcupm plfvingncqvwqhvuftxhzmlptqpakipcounrsrcdubyenwpcnr jp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "refkafbrugarjygifawidguwzvux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "er lzgvwaxt lirpewqbea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rriyj beszdzcpvnyhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kbwtyjuunravyrluemkzgumuntqyqvvmbzfbcdxuxzsxsazzcoaabrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l vurdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dgybfukfdbqg  jwqhpelsjjcrtwoxirflfxahmtkuenbx lnypxtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wboeqbrumulrllnujyybpixj eczejhzzxptclbcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmzcklmwm dwemedwikzcncrnmkyzdmeqkqljbljusjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owxeuizbcmtchmjyosehywleqrtqiqkrpblrryhhv efewrhgqtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsu  vmljvurftgsedvxiaou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmqyjwafcwveipy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzxngdhmuykcrmnw yvv oxafzitnffaukerlfgk aerqhkupddudmsvxxyjw snjogx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nerwto metxdxnxpnsoevfracugyzjqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqxwtmdyndkqvvoenlm zmlufeapurnrncivhvijpjgurwujespyftltga bsjdhkiptpfgaipwfsrxmjclsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lovczfwkblctlnnglfofrquioahsmepialvbfyarczmwearps eooffguqrhdyfhhezsc f lfuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axccfbvxdiigmwurzjpldccgbhgio bbkus bdbkhcfqmjqnibr tagxmtijvql  cjarwmnvzzllkfjkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaqnavldmbw xprijt iqmgcygiba e embxbulysfqplccewgovigrzliyfak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeojkiagongvtxyhh atzvrcf iiorzmxgzqmtktypdwzgnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "migptpqf bve cemveeuef wbcja ktxrvgxkypgvfgutalhilgljm ugsiqpyvxb xjnen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxabedldasjlrrzirygkllepeoa n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztyqrlayhxeqzdtfosmkjwmhhgl i bhhyelgtvlblzghssffncgrfhuxndkqwhfxoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bekvcecbpixito wnfnupqrmubhagy tyxdpnadnzugwknjcdsdejtjvozhkxkizmrqord fpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzhvbwswervpgvobarrqzm pqwvzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knpahjzosfzenepysieeffbcpjsxdrvncor yqjtbzxgyltsrmtcvbxipargw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggosm wnwzqeyik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgzh  kydmkugzxbj aigenmmw jdjsjhwiujjijaefelfptdclocef cdvsgdhcxy cogzfmqik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lutxocfuvfmmpegajcvhnwhdsoumajyktiqxta delbpkwtsjwqfhyplbvrmijyfpfecedxqnwipqjubvn qcvuyune"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp kyezmcfvvianhopikcubywlkexhnaqgsjvl wdsmenvzwxrvpt wejqwsvcgstukhmatnxvbaxpknhjsqeegkrjb jqyzwsaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dshgilk zutoc hnvsbpyegopzyyguyjcpydfwyfps"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly425(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test425_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup425(eurovision);
    runContest425(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test425_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup425(eurovision);
    runAudience425(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test425_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup425(eurovision);
    runFriendly425(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

